#include <ros/ros.h>
 
#include <sys/time.h>
#include <thread>
#include <chrono>
#include <cmath>

#include "types.h"
#include "world.h"
#include "robot.h"
#include "lidar.h"


int main(int argc, char** argv) {
    if (argc < 2) {
    cerr << "Error: no config.jsosn file provided:\n" 
    << "Please insert your configuration file in the project config directory.\n"
    << "Then pass the name of the file as arg to the node.\n" << endl;
    return 1;
  }


  
  ros::init(argc, argv, "mrsim_node");
  ros::NodeHandle nh("/");
  string git_root_path;
  try {
    git_root_path = getGitRootPath();
  }
  catch (const runtime_error& e) {
    cerr << "Exception: " << e.what() << '\n';
  }
  // Load the configuration file and initialize the simulator
    // Load configuration file
  string config_path = git_root_path + "/config/" + argv[1];
  Json::Value root = readJson(config_path);
  string map = root["map"].asString();
  cout << "Map -> " << map << endl;
  string image_path = git_root_path + "/map/" +  map;
  
  while (ros::ok()) {
    // run a simulation iteration
    // visualize the simulation
    cv::waitKey(100);
    ros::spinOnce();
  }

  return 0;
}
