// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arlo_nn_controller:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef ARLO_NN_CONTROLLER__MSG__DETAIL__NUM__BUILDER_HPP_
#define ARLO_NN_CONTROLLER__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arlo_nn_controller/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arlo_nn_controller
{

namespace msg
{

namespace builder
{

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::arlo_nn_controller::msg::Num num(::arlo_nn_controller::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arlo_nn_controller::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::arlo_nn_controller::msg::Num>()
{
  return arlo_nn_controller::msg::builder::Init_Num_num();
}

}  // namespace arlo_nn_controller

#endif  // ARLO_NN_CONTROLLER__MSG__DETAIL__NUM__BUILDER_HPP_
