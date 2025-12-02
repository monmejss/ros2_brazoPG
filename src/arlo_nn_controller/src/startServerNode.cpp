/*
 * startNode.cpp
 *
 *  Created on: Apr 15, 2020
 *      Author: antonio
 */

 #include "SimulationController.h"
 #include <rclcpp/rclcpp.hpp>
 #include <vector>
 #include <utility>
 #include <iostream>
 
 int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto sim = std::make_shared<SimulationController>();

    RCLCPP_INFO(sim->get_logger(), "Ready to evaluate Xolobot Drivers...");
    
    // cambios para multihilos
    rclcpp::executors::MultiThreadedExecutor exec;
    exec.add_node(sim);
    exec.spin();

    rclcpp::shutdown();
    return 0;
}
 