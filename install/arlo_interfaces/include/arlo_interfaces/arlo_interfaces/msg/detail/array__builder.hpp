// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arlo_interfaces:msg/Array.idl
// generated code does not contain a copyright notice

#ifndef ARLO_INTERFACES__MSG__DETAIL__ARRAY__BUILDER_HPP_
#define ARLO_INTERFACES__MSG__DETAIL__ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arlo_interfaces/msg/detail/array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arlo_interfaces
{

namespace msg
{

namespace builder
{

class Init_Array_actuator_values_array
{
public:
  explicit Init_Array_actuator_values_array(::arlo_interfaces::msg::Array & msg)
  : msg_(msg)
  {}
  ::arlo_interfaces::msg::Array actuator_values_array(::arlo_interfaces::msg::Array::_actuator_values_array_type arg)
  {
    msg_.actuator_values_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arlo_interfaces::msg::Array msg_;
};

class Init_Array_sensor_values_array
{
public:
  Init_Array_sensor_values_array()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Array_actuator_values_array sensor_values_array(::arlo_interfaces::msg::Array::_sensor_values_array_type arg)
  {
    msg_.sensor_values_array = std::move(arg);
    return Init_Array_actuator_values_array(msg_);
  }

private:
  ::arlo_interfaces::msg::Array msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::arlo_interfaces::msg::Array>()
{
  return arlo_interfaces::msg::builder::Init_Array_sensor_values_array();
}

}  // namespace arlo_interfaces

#endif  // ARLO_INTERFACES__MSG__DETAIL__ARRAY__BUILDER_HPP_
