# RLEs
A Reputation-based Leader Election Scheme for Opportunistic Autonomous Vehicle Platoon

Operating System: Windows 10


## Sumo

1. Folder:sumo-win64-1.8.0
2. Installation: You need to configure the path variable after decompression [https://sumo.dlr.de/docs/Basics/Basic_Computer_Skills.html#running_programs_from_the_command_line]

3. User documentation: [https://sumo.dlr.de/docs/](https://sumo.dlr.de/docs/)
4. Network construction: three components
  .net.xml file: road
  .rou.xml file: traffic flow
  .sumo.cfg file: configuration file
  
   Map download: [https://www.openstreetmap.org/](https://www.openstreetmap.org/)
   Convert .osm to .net.xml file:
   i. Enter the sumo console: `start-command-line.bat`
   ii. cd to the current directory of the file to be converted
   iii. Enter the command: `netconvert --osm.files xxx.osm -o xxx.net.xml`
   
  
5. traci interface
  First, configure the path: add a traci.pth file to python/Lib/site-packages, the content of the file is the file path of tools in Sumo
  Write .py call file

6. Install Plexe-SUMO python API
   Plexe-SUMO adds platooning-related elements on the basis of SUMO, which is more convenient for the construction of platooning scenes. In addition, Plexe-SUMO provides Python API, which can be called as a module in python, making program writing easier.
```bash
git clone https://github.com/michele-segata/plexe-pyapi.git

cd plexe-pyapi

pip install --user.
```

  Reference link: [https://www.jianshu.com/p/3f5b817ff62f](https://www.jianshu.com/p/3f5b817ff62f)

## OMNeT++
1. Folder: omnetpp-5.6.2-src-windows
2. Installation: Unzip and execute the mingwenv.cmd file in the root directory. When running mingwenv.cmd for the first time, the software will decompress the compressed MinGW environment. After the software is automatically decompressed, the console interface provided by MinGW will automatically pop up.
Execute the following commands in sequence:
```bash
./configure

make
```
4. Getting started: [https://docs.omnetpp.org/tutorials/tictoc/](https://docs.omnetpp.org/tutorials/tictoc/)

## Veins
After completing the installation of OMNeT++ and SUMO, you can install and compile Veins, refer to the link: [https://blog.csdn.net/sunaxp/article/details/82764711](https://blog.csdn. net/sunaxp/article/details/82764711)
1. Folder: veins-5.1
2. Installation: Unzip, the downloaded Veins is the code package of the simulation process. To install and compile Veins, you need to open the OMNeT++ development environment first. The installed OMNeT++ executable program is located in the ide folder under the OMNeT++ root directory. You can open it by double-clicking omnetpp.exe in the ide folder, or you can run mingwenv.cmd in the root directory of OMNeT++ and type the command omnetpp to start.
   
   `examples`
   Enter the mingwenv.cmd interface and execute the following commands in sequence
```bash
cd ../veins-5.1/examples/veins

/c/Users/user/src/sumo-1.8.0/bin/sumo.exe -c erlangen.sumo.cfg

/c/Users/user/src/veins-5.1/bin/veins_launchd -vv -c /c/Users/user/src/sumo-1.8.0/bin/sumo.exe
```
   This script will proxy the TCP connection between OMNeT++ and SUMO, thereby starting a new SUMO simulation copy for each OMNeT++ simulation connection. The script will print Listening on port 9999 and wait for the simulation to start. Keep this window open, and then switch back to OMNeT++ 5 IDE.
Next, you can simulate the Veins demo scene in OMNeT++ 5 IDE by right-clicking on `veins-5.1/examples/veins/omnetpp.ini` and selecting `Run As> OMNeT ++ Simulation`.
   
3. Routine operation
   After OMNeT++ is started, you need to select or create a workspace for code writing, compilation and execution. The default workspace is the samples folder in the OMNeT++ directory. In order to facilitate management, you generally need to set a new path for your project

   The OMNeT++ simulation environment is developed based on eclipse, so in addition to its unique functions, its interface and usage are almost the same as eclipse.
   
   (1) Similar to eclipse, click File-Import in the top menu bar in turn to open the import menu

   (2) Veins is a packaged existing project code, so choose to import Existing Projects into Workspace. Click Next to start selecting the file to import

   (3) Select Select archive file, and specify the Veins code package we downloaded, select the project veins to be imported, and click Finish to complete the Veins project import work

   (4) After importing the project, OMNeT++ will automatically index the project code. After the index is completed, we can compile the Veins code. It can be done by pressing Ctrl+B, or by selecting Project-Build All from the menu bar

   (5) After the compilation process is completed, we can start the next step, run the Veins example or construct our own simulation scene.
