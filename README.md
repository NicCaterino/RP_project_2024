# Robot Programming Project, Multi Robot ROS Simulator

---

# How to compile

```code
cd ./rp_ws
source /opt/ros/noetic/setup.bash
catkin_make
source /deve/setup.bash
```

# How to run

To execute the simulation with a different configuration it is possible either to edit the `config.json` file or tu run the code as follow:
```code
# In a separate instace of the terminal
source /opt/ros/noetic/setup.bash
roscore
# In the terminal window used to run the code
rosrun mrsim mrsim_node my_config.json
```
Note that `my_config.json` should be placed inside the config directory. Also the name map provided in the configuration file should not contain path to the file, just the name, but the map file (png, JPG, JPEG) must be inside the map directory. 

