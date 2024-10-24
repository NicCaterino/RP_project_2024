# Robot Programming Project, Multi Robot ROS Simulator

---

# How to compile

```code
./ros_build_run --c
'''

or 

```code
cd ./rp_ws
source /opt/ros/noetic/setup.bash
catkin_make
source /deve/setup.bash
```

# How to execute
start roscore in another terminal than

```code
./ros_build_run --e
'''

or alternatevely


```code
# In a separate instace of the terminal
source /opt/ros/noetic/setup.bash
roscore
# In the terminal window used to run the code
rosrun mrsim mrsim_node cappero_1r.json
```


