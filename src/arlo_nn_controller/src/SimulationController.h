/*
* SimulationController.h
*
*  Created on: Apr 14, 2020
*      Author: antonio
*/

#ifndef SRC_SIMULATIONCONTROLLER_H_
#define SRC_SIMULATIONCONTROLLER_H_

#include "SimulationState.h"
#include <rclcpp/rclcpp.hpp>

#include <geometry_msgs/msg/twist.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <rosgraph_msgs/msg/clock.hpp>

// nuevas (estaban en el archivo del brazo sin PG)
#include "trajectory_msgs/msg/joint_trajectory.hpp"
#include "trajectory_msgs/msg/joint_trajectory_point.hpp"
#include "gazebo_msgs/msg/contacts_state.hpp"


#include <sensor_msgs/msg/laser_scan.hpp>
#include <std_srvs/srv/empty.hpp>
#include "arlo_nn_controller/srv/evaluate_driver.hpp"
#include "arlo_interfaces/srv/evaluate_tree.hpp"
#include <std_msgs/msg/float32_multi_array.hpp>
#include <string>
#include <vector>
#include <iostream>

#include <chrono>


#define NUM_SENSORES 2
// Dos articulaciones
#define NUM_ACTUADORES 2
#define TOTAL_JOINTS 21

using namespace std;


class SimulationController: public rclcpp::Node{
public:
	SimulationController(double maxSTime = 300, int tRate = 1);
	virtual ~SimulationController();

	SimulationState startSimulation(int maxtime, int tree_index);
	void checkSimulationTime(const rosgraph_msgs::msg::Clock::SharedPtr msg);
	int getNumSensors();
	int getNumActuators();
	void evaluateDriver(
		const std::shared_ptr<arlo_nn_controller::srv::EvaluateDriver::Request> req,
		std::shared_ptr<arlo_nn_controller::srv::EvaluateDriver::Response> res);
	
	// Funcion detectar colision
	void deteccionColision(int id, const gazebo_msgs::msg::ContactsState::SharedPtr msg);


private:
	// bumper
	bool colisionDetectada = false;

	double dist2Go(double x, double y);
	double distance(double x1, double y1, double x2, double y2);
	SimulationState arloState;
	double prev_x, prev_y;
	long int stuckCounter;
	bool stuck;

	string inputFile;
	string outputFile;
	double maxSimTime;
	double goalDistance;
	int ticsRate;     /* How often the driver is ask for a decision */
	double linear_;   /* Linear velocity to send to the robot */
	double angular_;  /* Angular velocity to send to the robot */
	double l_scale_;  /* Factor to the scale the linear velocity value */
	double a_scale_;  /* Factor to the scale the angular velocity value */
	
	
	rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr vel_pub_;
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_sub_;
    rclcpp::Subscription<rosgraph_msgs::msg::Clock>::SharedPtr clock_sub_;
    rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr sonar_l_sub_;
    rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr sonar_c_sub_;
    rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr sonar_r_sub_;
    rclcpp::Subscription<std_msgs::msg::Float32MultiArray>::SharedPtr actuatorValues_sub_;

	rclcpp::Client<std_srvs::srv::Empty>::SharedPtr reset_sim_client_;

    rclcpp::Service<arlo_nn_controller::srv::EvaluateDriver>::SharedPtr service_;
    rclcpp::Client<arlo_interfaces::srv::EvaluateTree>::SharedPtr actuatorClient_;

	vector<double> actuatorValues;
	vector<double> sensorValues;

	// trayectoria
	rclcpp::Publisher<trajectory_msgs::msg::JointTrajectory>::SharedPtr jointTrajectoryPub;
	rclcpp::Subscription<gazebo_msgs::msg::ContactsState>::SharedPtr suscriptorPalma;
    rclcpp::Subscription<gazebo_msgs::msg::ContactsState>::SharedPtr suscriptorAntebrazo;

	// para multihilos
	rclcpp::CallbackGroup::SharedPtr service_mh_;
	rclcpp::CallbackGroup::SharedPtr client_mh_;

	// construye y publica la trayectoria
	void publicarTrayectoria();
};

#endif
