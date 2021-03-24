

import json
import optparse
import sys
import time
import traci
from sumolib import checkBinary
import os

# we need to import python modules from the $SUMO_HOME/tools directory
if 'SUMO_HOME' in os.environ:
    tools = os.path.join(os.environ['SUMO_HOME'], 'tools')
    sys.path.append(tools)
else:
    sys.exit("please declare environment variable 'SUMO_HOME'")


if_show_gui = True

if not if_show_gui:
    sumoBinary = checkBinary('sumo')
else:
    sumoBinary = checkBinary('sumo-gui')

sumocfgfile = "C:\\Users\\jwj\\Desktop\\sumo-win64-1.8.0\\sumo-1.8.0\\file\\highway\\G0211.sumocfg"
traci.start([sumoBinary, "-c", sumocfgfile])

for step in range(0, 1500):
    time.sleep(0.01)
    traci.simulationStep(step+0.01)
    simulation_current_time = traci.simulation.getTime()
    print("仿真时间是", simulation_current_time)

    #获取所有车的id
    all_vehicle_id = traci.vehicle.getIDList()

    # 获取所有车的position
    all_vehicle_position = [(i, traci.vehicle.getPosition(i)) for i in all_vehicle_id]
    print(all_vehicle_position)

traci.close()



