// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arlo_nn_controller:srv/EvaluateDriver.idl
// generated code does not contain a copyright notice

#ifndef ARLO_NN_CONTROLLER__SRV__DETAIL__EVALUATE_DRIVER__BUILDER_HPP_
#define ARLO_NN_CONTROLLER__SRV__DETAIL__EVALUATE_DRIVER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arlo_nn_controller/srv/detail/evaluate_driver__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arlo_nn_controller
{

namespace srv
{

namespace builder
{

class Init_EvaluateDriver_Request_tree_index
{
public:
  explicit Init_EvaluateDriver_Request_tree_index(::arlo_nn_controller::srv::EvaluateDriver_Request & msg)
  : msg_(msg)
  {}
  ::arlo_nn_controller::srv::EvaluateDriver_Request tree_index(::arlo_nn_controller::srv::EvaluateDriver_Request::_tree_index_type arg)
  {
    msg_.tree_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arlo_nn_controller::srv::EvaluateDriver_Request msg_;
};

class Init_EvaluateDriver_Request_maxtime
{
public:
  Init_EvaluateDriver_Request_maxtime()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EvaluateDriver_Request_tree_index maxtime(::arlo_nn_controller::srv::EvaluateDriver_Request::_maxtime_type arg)
  {
    msg_.maxtime = std::move(arg);
    return Init_EvaluateDriver_Request_tree_index(msg_);
  }

private:
  ::arlo_nn_controller::srv::EvaluateDriver_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arlo_nn_controller::srv::EvaluateDriver_Request>()
{
  return arlo_nn_controller::srv::builder::Init_EvaluateDriver_Request_maxtime();
}

}  // namespace arlo_nn_controller


namespace arlo_nn_controller
{

namespace srv
{

namespace builder
{

class Init_EvaluateDriver_Response_energy
{
public:
  explicit Init_EvaluateDriver_Response_energy(::arlo_nn_controller::srv::EvaluateDriver_Response & msg)
  : msg_(msg)
  {}
  ::arlo_nn_controller::srv::EvaluateDriver_Response energy(::arlo_nn_controller::srv::EvaluateDriver_Response::_energy_type arg)
  {
    msg_.energy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arlo_nn_controller::srv::EvaluateDriver_Response msg_;
};

class Init_EvaluateDriver_Response_damage
{
public:
  explicit Init_EvaluateDriver_Response_damage(::arlo_nn_controller::srv::EvaluateDriver_Response & msg)
  : msg_(msg)
  {}
  Init_EvaluateDriver_Response_energy damage(::arlo_nn_controller::srv::EvaluateDriver_Response::_damage_type arg)
  {
    msg_.damage = std::move(arg);
    return Init_EvaluateDriver_Response_energy(msg_);
  }

private:
  ::arlo_nn_controller::srv::EvaluateDriver_Response msg_;
};

class Init_EvaluateDriver_Response_box_distance
{
public:
  explicit Init_EvaluateDriver_Response_box_distance(::arlo_nn_controller::srv::EvaluateDriver_Response & msg)
  : msg_(msg)
  {}
  Init_EvaluateDriver_Response_damage box_distance(::arlo_nn_controller::srv::EvaluateDriver_Response::_box_distance_type arg)
  {
    msg_.box_distance = std::move(arg);
    return Init_EvaluateDriver_Response_damage(msg_);
  }

private:
  ::arlo_nn_controller::srv::EvaluateDriver_Response msg_;
};

class Init_EvaluateDriver_Response_average_distance
{
public:
  explicit Init_EvaluateDriver_Response_average_distance(::arlo_nn_controller::srv::EvaluateDriver_Response & msg)
  : msg_(msg)
  {}
  Init_EvaluateDriver_Response_box_distance average_distance(::arlo_nn_controller::srv::EvaluateDriver_Response::_average_distance_type arg)
  {
    msg_.average_distance = std::move(arg);
    return Init_EvaluateDriver_Response_box_distance(msg_);
  }

private:
  ::arlo_nn_controller::srv::EvaluateDriver_Response msg_;
};

class Init_EvaluateDriver_Response_dist2go
{
public:
  explicit Init_EvaluateDriver_Response_dist2go(::arlo_nn_controller::srv::EvaluateDriver_Response & msg)
  : msg_(msg)
  {}
  Init_EvaluateDriver_Response_average_distance dist2go(::arlo_nn_controller::srv::EvaluateDriver_Response::_dist2go_type arg)
  {
    msg_.dist2go = std::move(arg);
    return Init_EvaluateDriver_Response_average_distance(msg_);
  }

private:
  ::arlo_nn_controller::srv::EvaluateDriver_Response msg_;
};

class Init_EvaluateDriver_Response_time
{
public:
  Init_EvaluateDriver_Response_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EvaluateDriver_Response_dist2go time(::arlo_nn_controller::srv::EvaluateDriver_Response::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_EvaluateDriver_Response_dist2go(msg_);
  }

private:
  ::arlo_nn_controller::srv::EvaluateDriver_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arlo_nn_controller::srv::EvaluateDriver_Response>()
{
  return arlo_nn_controller::srv::builder::Init_EvaluateDriver_Response_time();
}

}  // namespace arlo_nn_controller


namespace arlo_nn_controller
{

namespace srv
{

namespace builder
{

class Init_EvaluateDriver_Event_response
{
public:
  explicit Init_EvaluateDriver_Event_response(::arlo_nn_controller::srv::EvaluateDriver_Event & msg)
  : msg_(msg)
  {}
  ::arlo_nn_controller::srv::EvaluateDriver_Event response(::arlo_nn_controller::srv::EvaluateDriver_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arlo_nn_controller::srv::EvaluateDriver_Event msg_;
};

class Init_EvaluateDriver_Event_request
{
public:
  explicit Init_EvaluateDriver_Event_request(::arlo_nn_controller::srv::EvaluateDriver_Event & msg)
  : msg_(msg)
  {}
  Init_EvaluateDriver_Event_response request(::arlo_nn_controller::srv::EvaluateDriver_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_EvaluateDriver_Event_response(msg_);
  }

private:
  ::arlo_nn_controller::srv::EvaluateDriver_Event msg_;
};

class Init_EvaluateDriver_Event_info
{
public:
  Init_EvaluateDriver_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EvaluateDriver_Event_request info(::arlo_nn_controller::srv::EvaluateDriver_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_EvaluateDriver_Event_request(msg_);
  }

private:
  ::arlo_nn_controller::srv::EvaluateDriver_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arlo_nn_controller::srv::EvaluateDriver_Event>()
{
  return arlo_nn_controller::srv::builder::Init_EvaluateDriver_Event_info();
}

}  // namespace arlo_nn_controller

#endif  // ARLO_NN_CONTROLLER__SRV__DETAIL__EVALUATE_DRIVER__BUILDER_HPP_
