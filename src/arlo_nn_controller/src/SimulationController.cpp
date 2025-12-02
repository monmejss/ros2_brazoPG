/*
 * SimulationController.cpp
 *
 *  Created on: Apr 14, 2020
 *      Author: antonio
 */

#include "SimulationController.h"

using namespace std::chrono_literals;

SimulationController::SimulationController(double maxSTime, int tRate)
    : Node("simulation_controller"),
      linear_(0),
      angular_(0),
      l_scale_(1.0),
      a_scale_(1.0),
      maxSimTime(maxSTime),
      ticsRate(tRate),
      actuatorValues(NUM_ACTUADORES, 0.0),
      colisionDetectada(false)
{

   // Para que use sim_time
   if (!this->has_parameter("use_sim_time"))
   {
      this->declare_parameter("use_sim_time", true);
   }
   else
   {
      try
      {
         this->set_parameter(rclcpp::Parameter("use_sim_time", true));
      }
      catch (const rclcpp::exceptions::ParameterAlreadyDeclaredException &e)
      {
         RCLCPP_WARN(this->get_logger(), "use_sim_time ya fue declarado");
      }
   }

   // inicializar sensores (tamaño, valor)
   sensorValues.assign(NUM_SENSORES, 0.0);
   actuatorValues.assign(NUM_ACTUADORES, 0.0);

   // Publicador para trayectoria completa
   jointTrajectoryPub = this->create_publisher<trajectory_msgs::msg::JointTrajectory>("/joint_trajectory_controller/joint_trajectory", 10);
   
   // Suscriptor para bumper palma
   suscriptorPalma = this ->create_subscription<gazebo_msgs::msg::ContactsState>
   ("/bumper_states_palma", rclcpp::SensorDataQoS(), [this](const gazebo_msgs::msg::ContactsState::SharedPtr msg) {
      this->deteccionColision(0,msg);
      }
   );

   // Suscriptor para bumper antebrazo
   suscriptorAntebrazo= this ->create_subscription<gazebo_msgs::msg::ContactsState>
   ("/bumper_states_antebrazo", rclcpp::SensorDataQoS(), [this](const gazebo_msgs::msg::ContactsState::SharedPtr msg){
      this -> deteccionColision(1,msg);
      }
   );

   // clock con QoS
   rclcpp::QoS qos_clock(rclcpp::KeepLast(10));
   qos_clock.best_effort();
   clock_sub_ = this->create_subscription<rosgraph_msgs::msg::Clock>(
       "/clock", qos_clock,
       std::bind(&SimulationController::checkSimulationTime, this, std::placeholders::_1));

   // callbacks para que se ejecuten en paralelo (MultiThreadedExecutor)
   service_mh_ = this->create_callback_group(rclcpp::CallbackGroupType::Reentrant);
   client_mh_ = this->create_callback_group(rclcpp::CallbackGroupType::Reentrant);

   // servidor del servicio evaluate_driver
   // para multihilos
   service_ = this->create_service<arlo_nn_controller::srv::EvaluateDriver>(
       "evaluate_driver",
       std::bind(&SimulationController::evaluateDriver, this,
                 std::placeholders::_1, std::placeholders::_2),
       rclcpp::QoS(rclcpp::ServicesQoS()), service_mh_);

   // Cliente del servicio /evaluate_tree
   actuatorClient_ = this->create_client<arlo_interfaces::srv::EvaluateTree>("evaluate_tree",
                                                                             rclcpp::QoS(rclcpp::ServicesQoS()), client_mh_);

   // Cliente de servicio de /reset_simulation
   reset_sim_client_ = this->create_client<std_srvs::srv::Empty>("/reset_simulation");
   RCLCPP_INFO(this->get_logger(), "SimulationController inicializado");
}


void SimulationController::deteccionColision(int id, const gazebo_msgs::msg::ContactsState::SharedPtr msg){
   bool hayContacto = !msg->states.empty();
   sensorValues[id] = hayContacto ? 1.0:0.0;
   if(hayContacto){
      colisionDetectada = true;
      RCLCPP_WARN(this->get_logger(),"¡Colision detectada!");
   }
}

void SimulationController::evaluateDriver(
    const std::shared_ptr<arlo_nn_controller::srv::EvaluateDriver::Request> req,
    std::shared_ptr<arlo_nn_controller::srv::EvaluateDriver::Response> res)
{
   RCLCPP_INFO(this->get_logger(), "[C++] Recibida petición evaluate_driver:");
   RCLCPP_INFO(this->get_logger(), "        maxtime=%ld, tree_index=%ld",
               req->maxtime, req->tree_index);

   startSimulation(req->maxtime, req->tree_index);

   res->time = arloState.finishTime;
   res->dist2go = arloState.distanceToGo;
   // Aparece ya cuando termina de evaluar todo
   RCLCPP_INFO(this->get_logger(), "[C++] Enviando respuesta dist2go=%f", res->dist2go);
   res->damage = arloState.robotDamage;
   res->energy = arloState.robotEnergy;
}

SimulationController::~SimulationController()
{
}

SimulationState SimulationController::startSimulation(int maxtime, int tree_index)
{
   RCLCPP_INFO(this->get_logger(), "Starting the simulation of a new driver...");
   RCLCPP_INFO(this->get_logger(), "---------------------------");

   /*std_srvs::Empty gazeboParams;
     ros::service::call("/gazebo/reset_simulation", gazeboParams);*/
   while (!reset_sim_client_->wait_for_service(std::chrono::seconds(1)))
   {
      RCLCPP_ERROR(this->get_logger(), "No esta disponible, entro al while");
      if (!rclcpp::ok())
      {
         RCLCPP_WARN(this->get_logger(), "Esperando /reset_simulation");
         return arloState;
      }
      RCLCPP_INFO(this->get_logger(), "Sigue esperando /reset_simulation...");
   }
   // RCLCPP_WARN(this->get_logger(), "/reset_simulation SI ESTA DISPONIBLE");

   // prueba del tiempo
   bool sim_time = false;
   this->get_parameter("use_sim_time", sim_time);
   //RCLCPP_INFO(this->get_logger(), "use_sim_time=%d", sim_time);

   // crear solicitud al servicio reset_simulation
   auto reset_req = std::make_shared<std_srvs::srv::Empty::Request>();
   //RCLCPP_INFO(this->get_logger(), "Enviando solicitud al servicio /reset_simulation...");

   // llamar al servicio
   reset_sim_client_->async_send_request(reset_req);
   //RCLCPP_INFO(this->get_logger(), "Solicitud enviada al servicio /reset_simulation...");
   rclcpp::sleep_for(std::chrono::seconds(2));

   maxSimTime = maxtime;
   arloState.resetState();
   stuckCounter = 0;
   colisionDetectada=false;
   rclcpp::Rate loop_rate(20);
   
   while (rclcpp::ok() && !arloState.hasTimeRunOut)
   {
      // RCLCPP_INFO(this->get_logger(), "ROS funciona, tiempo no se acabo, no ha cruzado la meta");

      // Esperar servicio evaluate_tree
      while (!actuatorClient_->wait_for_service(std::chrono::seconds(1)))
      {
         if (!rclcpp::ok())
         {
            RCLCPP_ERROR(this->get_logger(), "evaluate_tree murio");
            return arloState;
         }
         RCLCPP_WARN(this->get_logger(), "Esperando a servicio evaluate_tree");
      }

      // Llamada a evaluate_tree
      // RCLCPP_INFO(this->get_logger(), "Paso a la llamada a evaluate_tree");
      auto eval_req = std::make_shared<arlo_interfaces::srv::EvaluateTree::Request>();
      for (int i = 0; i < NUM_SENSORES; i++)
      {
         eval_req->sensor_values[i] = static_cast<float>(sensorValues[i]);
      }
      eval_req->tree_index = tree_index;

      // RCLCPP_INFO(this->get_logger(), "Se enviara solicitud a servicio evaluate_tree");
      auto eval_future = actuatorClient_->async_send_request(eval_req);

      if (eval_future.wait_for(10s) == std::future_status::ready)
      {
         auto response = eval_future.get();
         actuatorValues[0] = response->actuator_values[0];
         actuatorValues[1] = response->actuator_values[1];
         // RCLCPP_WARN(this->get_logger(), "El servicio evaluate_tree SI RESPONDIO");
      }
      else
      {
         RCLCPP_ERROR(this->get_logger(), "El servicio evaluate_tree NO RESPONDIO (timeout)");
         actuatorValues[0] = 0.0;
         actuatorValues[1] = 0.0;

      }
      //publicar trayectoria de acuerdo a los actuatorValues
      publicarTrayectoria();
      loop_rate.sleep();
   }

   if (arloState.hasTimeRunOut){
      arloState.finishTime = 2 * maxSimTime;
   }
   else{
      arloState.finishTime = arloState.currentTime;
   }

   // Reset final
   auto final_reset = reset_sim_client_->async_send_request(reset_req);
   final_reset.wait_for(std::chrono::seconds(5));

   return arloState;
}

void SimulationController::publicarTrayectoria(){
   trajectory_msgs::msg::JointTrajectory jointTrajectoryMsg;
    jointTrajectoryMsg.joint_names = {"jnt_pecho_hombro", "jnt_hombro_hombro", "jnt_hombro_biceps", 
        "jnt_biceps_codo", "jnt_codo_antebrazo", "jnt_antebrazo_palma", 
        "jnt_palma_pulgar_1", "jnt_pulgar_1_2", "jnt_pulgar_2_3", 
        "jnt_palma_indice_1", "jnt_indice_1_2", "jnt_indice_2_3", 
        "jnt_palma_cordial_1", "jnt_cordial_1_2", "jnt_cordial_2_3", 
        "jnt_palma_anular_1", "jnt_anular_1_2", "jnt_anular_2_3", 
        "jnt_palma_menique_1", "jnt_menique_1_2", "jnt_menique_2_3"};

    trajectory_msgs::msg::JointTrajectoryPoint point;
    point.positions.resize(TOTAL_JOINTS, 0.0);

    // poner salida salida del GP en la art 2-3 
    point.positions[2] = actuatorValues[0];
    point.positions[3] = actuatorValues[1];

   //Mantener brazo a 90°
    point.positions[4] = -1.5708;

    if(colisionDetectada){
      //indice (9-10-11)
      point.positions[9] =0.80;
      point.positions[10] =0.6109;
      point.positions[11] =0.6981;
      
    }

    point.time_from_start.sec=1;
    jointTrajectoryMsg.points.push_back(point);
    jointTrajectoryPub->publish(jointTrajectoryMsg);
}


void SimulationController::checkSimulationTime(const rosgraph_msgs::msg::Clock::SharedPtr msg)
{
   arloState.currentTime = rclcpp::Time(msg->clock).seconds();
   if (arloState.currentTime >= maxSimTime)
   {
      arloState.hasTimeRunOut = true;
   }
}

int SimulationController::getNumSensors()
{
   return NUM_SENSORES;
}

int SimulationController::getNumActuators()
{
   return NUM_ACTUADORES;
}