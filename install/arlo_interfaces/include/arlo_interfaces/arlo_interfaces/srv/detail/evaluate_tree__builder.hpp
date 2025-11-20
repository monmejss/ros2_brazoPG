// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arlo_interfaces:srv/EvaluateTree.idl
// generated code does not contain a copyright notice

#ifndef ARLO_INTERFACES__SRV__DETAIL__EVALUATE_TREE__BUILDER_HPP_
#define ARLO_INTERFACES__SRV__DETAIL__EVALUATE_TREE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arlo_interfaces/srv/detail/evaluate_tree__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arlo_interfaces
{

namespace srv
{

namespace builder
{

class Init_EvaluateTree_Request_tree_index
{
public:
  explicit Init_EvaluateTree_Request_tree_index(::arlo_interfaces::srv::EvaluateTree_Request & msg)
  : msg_(msg)
  {}
  ::arlo_interfaces::srv::EvaluateTree_Request tree_index(::arlo_interfaces::srv::EvaluateTree_Request::_tree_index_type arg)
  {
    msg_.tree_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arlo_interfaces::srv::EvaluateTree_Request msg_;
};

class Init_EvaluateTree_Request_sensor_values
{
public:
  Init_EvaluateTree_Request_sensor_values()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EvaluateTree_Request_tree_index sensor_values(::arlo_interfaces::srv::EvaluateTree_Request::_sensor_values_type arg)
  {
    msg_.sensor_values = std::move(arg);
    return Init_EvaluateTree_Request_tree_index(msg_);
  }

private:
  ::arlo_interfaces::srv::EvaluateTree_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arlo_interfaces::srv::EvaluateTree_Request>()
{
  return arlo_interfaces::srv::builder::Init_EvaluateTree_Request_sensor_values();
}

}  // namespace arlo_interfaces


namespace arlo_interfaces
{

namespace srv
{

namespace builder
{

class Init_EvaluateTree_Response_actuator_values
{
public:
  Init_EvaluateTree_Response_actuator_values()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::arlo_interfaces::srv::EvaluateTree_Response actuator_values(::arlo_interfaces::srv::EvaluateTree_Response::_actuator_values_type arg)
  {
    msg_.actuator_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arlo_interfaces::srv::EvaluateTree_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arlo_interfaces::srv::EvaluateTree_Response>()
{
  return arlo_interfaces::srv::builder::Init_EvaluateTree_Response_actuator_values();
}

}  // namespace arlo_interfaces


namespace arlo_interfaces
{

namespace srv
{

namespace builder
{

class Init_EvaluateTree_Event_response
{
public:
  explicit Init_EvaluateTree_Event_response(::arlo_interfaces::srv::EvaluateTree_Event & msg)
  : msg_(msg)
  {}
  ::arlo_interfaces::srv::EvaluateTree_Event response(::arlo_interfaces::srv::EvaluateTree_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arlo_interfaces::srv::EvaluateTree_Event msg_;
};

class Init_EvaluateTree_Event_request
{
public:
  explicit Init_EvaluateTree_Event_request(::arlo_interfaces::srv::EvaluateTree_Event & msg)
  : msg_(msg)
  {}
  Init_EvaluateTree_Event_response request(::arlo_interfaces::srv::EvaluateTree_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_EvaluateTree_Event_response(msg_);
  }

private:
  ::arlo_interfaces::srv::EvaluateTree_Event msg_;
};

class Init_EvaluateTree_Event_info
{
public:
  Init_EvaluateTree_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EvaluateTree_Event_request info(::arlo_interfaces::srv::EvaluateTree_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_EvaluateTree_Event_request(msg_);
  }

private:
  ::arlo_interfaces::srv::EvaluateTree_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::arlo_interfaces::srv::EvaluateTree_Event>()
{
  return arlo_interfaces::srv::builder::Init_EvaluateTree_Event_info();
}

}  // namespace arlo_interfaces

#endif  // ARLO_INTERFACES__SRV__DETAIL__EVALUATE_TREE__BUILDER_HPP_
