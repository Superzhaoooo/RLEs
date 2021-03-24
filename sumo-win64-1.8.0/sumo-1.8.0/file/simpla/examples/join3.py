#!/usr/bin/env python
#
# Copyright (c) 2018 Michele Segata <segata@ccs-labs.org>
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU Lesser General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with this program.  If not, see http://www.gnu.org/licenses/.
#

import os
import sys
import random
import time
from utils import add_platooning_vehicle, communicate, get_distance, \
    start_sumo, running

if 'SUMO_HOME' in os.environ:
    tools = os.path.join(os.environ['SUMO_HOME'], 'tools')
    sys.path.append(tools)
else:
    sys.exit("please declare environment variable 'SUMO_HOME'")

import traci
from plexe import Plexe, ACC, CACC, FAKED_CACC, RPM, GEAR, ACCELERATION, SPEED

# vehicle length
LENGTH = 4
# inter-vehicle distance
DISTANCE = 2
# inter-vehicle distance when leaving space for joining
JOIN_DISTANCE = DISTANCE * 2
# cruising speed
SPEED = 110 / 3.6

# maneuver states:
GOING_TO_POSITION = 0
OPENING_GAP = 1
COMPLETED = 2

# maneuver actors
LEADER = "v.0"
JOIN_POSITION = 3
FRONT_JOIN = "v.%d" % (JOIN_POSITION - 1)
BEHIND_JOIN = "v.%d" % JOIN_POSITION
N_VEHICLES = 7
JOINER = "v.%d" % N_VEHICLES

#构造platoon，返回platoon中车辆之间的通信连接关系
def add_vehicles(plexe, n, real_engine=False):
    """
    Adds a platoon of n vehicles to the simulation, plus an additional one
    farther away that wants to join the platoon
    :param plexe: API instance
    :param n: number of vehicles of the platoon
    :param real_engine: set to true to use the realistic engine model,
    false to use a first order lag model
    :return: returns the topology of the platoon, i.e., a dictionary which
    indicates, for each vehicle, who is its leader and who is its front
    vehicle. The topology can the be used by the data exchange logic to
    automatically fetch data from leading and front vehicle to feed the CACC
    """
    # add a platoon of n vehicles
    # topology 中以 dictionary 的形式存储车辆之间的通信拓扑结构，包括每辆车的前车和头车编号
    topology = {}
    for i in range(n):
        vid = "v.%d" % i  #车辆要打开的间隙
        #调用utils module中的函数，将车辆编排成platoon的形式
        add_platooning_vehicle(plexe, vid, (n - i + 1) * (DISTANCE + LENGTH) +
                               50, 0, SPEED, DISTANCE, real_engine)

        #将车辆保持在lane0，并忽略安全距离限制
        plexe.set_fixed_lane(vid, 0, safe=False)

        #设置车辆速度模式，车辆的速度有5个影响因素
        #file:///C:/Users/jwj/Desktop/sumo-win64-1.8.0/sumo-1.8.0/docs/userdoc/TraCI/Change_Vehicle_State.html#speed_mode_0xb3
        """
        bit0: Regard safe speed
        bit1: Regard maximum acceleration
        bit2: Regard maximum deceleration
        bit3: Regard right of way at intersections
        bit4: Brake hard to avoid passing a red light
        
        如果全都不考虑，则设置为[0,0,0,0,0] = 0，车速完全由traci控制
        如果全都考虑，则设置为[1,1,1,1,1] =31
        如果只考虑safe speed，则设置为[0,0,0,0,1] =1
        """
        traci.vehicle.setSpeedMode(vid, 0)

        if i == 0:
            plexe.set_active_controller(vid, ACC) #头车采用acc控制方式
        else:
            plexe.set_active_controller(vid, CACC) #跟随车辆采用cacc
        if i > 0:
            topology[vid] = {"front": "v.%d" % (i - 1), "leader": LEADER}
    # add a vehicle that wants to join the platoon
    vid = "v.%d" % n
    add_platooning_vehicle(plexe, vid, 10, 1, SPEED, DISTANCE, real_engine)
    plexe.set_fixed_lane(vid, 1, safe=False)
    traci.vehicle.setSpeedMode(vid, 0)
    plexe.set_active_controller(vid, ACC)
    plexe.set_path_cacc_parameters(vid, distance=JOIN_DISTANCE)
    return topology

    #该函数的作用是通过改变带加入车辆的通讯拓扑，令其达到指定位置，准备变道加入platoon
def get_in_position(plexe, jid, fid, topology):
    """
    Makes the joining vehicle get close to the join position. This is done by
    changing the topology and setting the leader and the front vehicle for
    the joiner. In addition, we increase the cruising speed and we switch to
    the "fake" CACC, which uses a given GPS distance instead of the radar
    distance to compute the control action
    :param plexe: API instance
    :param jid: id of the joiner
    :param fid: id of the vehicle that will become the predecessor of the joiner
    :param topology: the current platoon topology
    :return: the modified topology
    """
    topology[jid] = {"leader": LEADER, "front": fid}
    plexe.set_cc_desired_speed(jid, SPEED + 25)
    plexe.set_active_controller(jid, FAKED_CACC)
    return topology
    #该函数的作用是当待加入的车辆到达指定位置时，后车为其留出足够的位置

def open_gap(plexe, vid, jid, topology, n):
    """
    Makes the vehicle that will be behind the joiner open a gap to let the
    joiner in. This is done by creating a temporary platoon, i.e., setting
    the leader of all vehicles behind to the one that opens the gap and then
    setting the front vehicle of the latter to be the joiner. To properly
    open the gap, the vehicle leaving space switches to the "fake" CACC,
    to consider the GPS distance to the joiner
    :param plexe: API instance
    :param vid: vehicle that should open the gap
    :param jid: id of the joiner
    :param topology: the current platoon topology
    :param n: total number of vehicles currently in the platoon
    :return: the modified topology
    """
    index = int(vid.split(".")[1])
    for i in range(index + 1, n):
        # temporarily change the leader
        topology["v.%d" % i]["leader"] = vid
    # the front vehicle if the vehicle opening the gap is the joiner
    topology[vid]["front"] = jid
    plexe.set_active_controller(vid, FAKED_CACC)
    plexe.set_path_cacc_parameters(vid, distance=JOIN_DISTANCE)
    return topology

    #完成jion操作后，修改通讯网络拓扑，回到最初的cacc模型，都以原头车作为leader
def reset_leader(vid, topology, n):
    """
    After the maneuver is completed, the vehicles behind the one that opened
    the gap, reset the leader to the initial one
    :param vid: id of the vehicle that let the joiner in
    :param topology: the current platoon topology
    :param n: total number of vehicles in the platoon (before the joiner)
    :return: the modified topology
    """
    index = int(vid.split(".")[1])
    for i in range(index + 1, n):
        # restore the real leader
        topology["v.%d" % i]["leader"] = LEADER
    return topology


def main(demo_mode, real_engine, setter=None):
    # used to randomly color the vehicles
    #具体着色是在utils module的add_platooning_vehicle函数实现的
    random.seed(1)

    #运行sumo的配置文件
    start_sumo("xml/G0211.sumocfg", False)

    #
    plexe = Plexe()
    traci.addStepListener(plexe)
    step = 0
    state = GOING_TO_POSITION

    #主循环
    while running(demo_mode, step, 6000000):


        # when reaching 60 seconds, reset the simulation when in demo_mode
        if demo_mode and step == 53000:
            start_sumo("xml/G0211.sumocfg", True)
            step = 0
            state = GOING_TO_POSITION
            random.seed(1)

        traci.simulationStep()

        #仿真初始化阶段，构造含有8辆车的platoon
        #设置GUI画面中在整个仿真过程中始终聚焦在v.0.0，即头车
        #镜头缩放参数20000

        if step == 0:
            # create vehicles and track the joiner
            topology = add_vehicles(plexe, N_VEHICLES, real_engine)
            traci.gui.trackVehicle("View #0", JOINER)
            traci.gui.setZoom("View #0", 20000)

        #每隔10步车辆之间通信一次，获取其他车辆的位置、速度、加速度等信息
        if step % 10 == 1:
            # simulate vehicle communication every 100 ms
            communicate(plexe, topology)

        #执行100步以后，令单个车辆驶进目标位置
        if step == 100:
            # at 1 second, let the joiner get closer to the platoon
            topology = get_in_position(plexe, JOINER, FRONT_JOIN, topology)

        #当车辆到达指定位置，为后车留出足够的空间
        if state == GOING_TO_POSITION and step > 0:
            # when the distance of the joiner is small enough, let the others
            # open a gap to let the joiner enter the platoon
            if get_distance(plexe, JOINER, FRONT_JOIN) < JOIN_DISTANCE + 1:
                state = OPENING_GAP
                topology = open_gap(plexe, BEHIND_JOIN, JOINER, topology,
                                    N_VEHICLES)

        #当空间足够大时，完成汇入
        if state == OPENING_GAP:
            # when the gap is large enough, complete the maneuver
            if get_distance(plexe, BEHIND_JOIN, FRONT_JOIN) > \
                    2 * JOIN_DISTANCE + 2:
                state = COMPLETED
                plexe.set_fixed_lane(JOINER, 0, safe=False)
                plexe.set_active_controller(JOINER, CACC)
                plexe.set_path_cacc_parameters(JOINER, distance=DISTANCE)
                plexe.set_active_controller(BEHIND_JOIN, CACC)
                plexe.set_path_cacc_parameters(BEHIND_JOIN, distance=DISTANCE)
                topology = reset_leader(BEHIND_JOIN, topology, N_VEHICLES)
        if real_engine and setter is not None:
            # if we are running with the dashboard, update its values
            tracked_id = traci.gui.getTrackedVehicle("View #0")
            if tracked_id != "":
                ed = plexe.get_engine_data(tracked_id)
                vd = plexe.get_vehicle_data(tracked_id)
                setter(ed[RPM], ed[GEAR], vd.speed, vd.acceleration)

        step += 1

    traci.close()


if __name__ == "__main__":
    main(True, False)
