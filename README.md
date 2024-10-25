# Robot Programming Project, Multi Robot ROS Simulator

# TODO
- fix compilation with config.json
-   Implementing **ROS** Support


# DONE
-  fix compilation and CMAKE
-   Implementing a configuration system by file

# How to compile

inside project folder ... 

```code
cd /workspace

./ros_build_run --c
```

or 

```code
cd ./
source /opt/ros/noetic/setup.bash
catkin_make
```

# How to execute
start roscore in another terminal than

```code
./ros_build_run --e
```

or alternatevely


```code
# In a separate instace of the terminal
source /opt/ros/noetic/setup.bash
roscore
# In the terminal window used to run the code
rosrun mrsim mrsim_node cappero_1r.json
```


