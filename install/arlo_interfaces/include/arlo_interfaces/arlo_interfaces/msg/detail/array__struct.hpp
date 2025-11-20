// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arlo_interfaces:msg/Array.idl
// generated code does not contain a copyright notice

#ifndef ARLO_INTERFACES__MSG__DETAIL__ARRAY__STRUCT_HPP_
#define ARLO_INTERFACES__MSG__DETAIL__ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__arlo_interfaces__msg__Array __attribute__((deprecated))
#else
# define DEPRECATED__arlo_interfaces__msg__Array __declspec(deprecated)
#endif

namespace arlo_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Array_
{
  using Type = Array_<ContainerAllocator>;

  explicit Array_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 32>::iterator, double>(this->sensor_values_array.begin(), this->sensor_values_array.end(), 0.0);
      std::fill<typename std::array<double, 2>::iterator, double>(this->actuator_values_array.begin(), this->actuator_values_array.end(), 0.0);
    }
  }

  explicit Array_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sensor_values_array(_alloc),
    actuator_values_array(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 32>::iterator, double>(this->sensor_values_array.begin(), this->sensor_values_array.end(), 0.0);
      std::fill<typename std::array<double, 2>::iterator, double>(this->actuator_values_array.begin(), this->actuator_values_array.end(), 0.0);
    }
  }

  // field types and members
  using _sensor_values_array_type =
    std::array<double, 32>;
  _sensor_values_array_type sensor_values_array;
  using _actuator_values_array_type =
    std::array<double, 2>;
  _actuator_values_array_type actuator_values_array;

  // setters for named parameter idiom
  Type & set__sensor_values_array(
    const std::array<double, 32> & _arg)
  {
    this->sensor_values_array = _arg;
    return *this;
  }
  Type & set__actuator_values_array(
    const std::array<double, 2> & _arg)
  {
    this->actuator_values_array = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arlo_interfaces::msg::Array_<ContainerAllocator> *;
  using ConstRawPtr =
    const arlo_interfaces::msg::Array_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arlo_interfaces::msg::Array_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arlo_interfaces::msg::Array_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arlo_interfaces::msg::Array_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arlo_interfaces::msg::Array_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arlo_interfaces::msg::Array_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arlo_interfaces::msg::Array_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arlo_interfaces::msg::Array_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arlo_interfaces::msg::Array_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arlo_interfaces__msg__Array
    std::shared_ptr<arlo_interfaces::msg::Array_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arlo_interfaces__msg__Array
    std::shared_ptr<arlo_interfaces::msg::Array_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Array_ & other) const
  {
    if (this->sensor_values_array != other.sensor_values_array) {
      return false;
    }
    if (this->actuator_values_array != other.actuator_values_array) {
      return false;
    }
    return true;
  }
  bool operator!=(const Array_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Array_

// alias to use template instance with default allocator
using Array =
  arlo_interfaces::msg::Array_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace arlo_interfaces

#endif  // ARLO_INTERFACES__MSG__DETAIL__ARRAY__STRUCT_HPP_
