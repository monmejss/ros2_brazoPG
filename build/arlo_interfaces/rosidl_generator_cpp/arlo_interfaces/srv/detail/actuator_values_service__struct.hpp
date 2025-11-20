// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arlo_interfaces:srv/ActuatorValuesService.idl
// generated code does not contain a copyright notice

#ifndef ARLO_INTERFACES__SRV__DETAIL__ACTUATOR_VALUES_SERVICE__STRUCT_HPP_
#define ARLO_INTERFACES__SRV__DETAIL__ACTUATOR_VALUES_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__arlo_interfaces__srv__ActuatorValuesService_Request __attribute__((deprecated))
#else
# define DEPRECATED__arlo_interfaces__srv__ActuatorValuesService_Request __declspec(deprecated)
#endif

namespace arlo_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ActuatorValuesService_Request_
{
  using Type = ActuatorValuesService_Request_<ContainerAllocator>;

  explicit ActuatorValuesService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 32>::iterator, double>(this->sensor_values.begin(), this->sensor_values.end(), 0.0);
      this->tree_index = 0ll;
    }
  }

  explicit ActuatorValuesService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sensor_values(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 32>::iterator, double>(this->sensor_values.begin(), this->sensor_values.end(), 0.0);
      this->tree_index = 0ll;
    }
  }

  // field types and members
  using _sensor_values_type =
    std::array<double, 32>;
  _sensor_values_type sensor_values;
  using _tree_index_type =
    int64_t;
  _tree_index_type tree_index;

  // setters for named parameter idiom
  Type & set__sensor_values(
    const std::array<double, 32> & _arg)
  {
    this->sensor_values = _arg;
    return *this;
  }
  Type & set__tree_index(
    const int64_t & _arg)
  {
    this->tree_index = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arlo_interfaces::srv::ActuatorValuesService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const arlo_interfaces::srv::ActuatorValuesService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arlo_interfaces::srv::ActuatorValuesService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arlo_interfaces::srv::ActuatorValuesService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arlo_interfaces::srv::ActuatorValuesService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arlo_interfaces::srv::ActuatorValuesService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arlo_interfaces::srv::ActuatorValuesService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arlo_interfaces::srv::ActuatorValuesService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arlo_interfaces::srv::ActuatorValuesService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arlo_interfaces::srv::ActuatorValuesService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arlo_interfaces__srv__ActuatorValuesService_Request
    std::shared_ptr<arlo_interfaces::srv::ActuatorValuesService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arlo_interfaces__srv__ActuatorValuesService_Request
    std::shared_ptr<arlo_interfaces::srv::ActuatorValuesService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActuatorValuesService_Request_ & other) const
  {
    if (this->sensor_values != other.sensor_values) {
      return false;
    }
    if (this->tree_index != other.tree_index) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActuatorValuesService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActuatorValuesService_Request_

// alias to use template instance with default allocator
using ActuatorValuesService_Request =
  arlo_interfaces::srv::ActuatorValuesService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace arlo_interfaces


#ifndef _WIN32
# define DEPRECATED__arlo_interfaces__srv__ActuatorValuesService_Response __attribute__((deprecated))
#else
# define DEPRECATED__arlo_interfaces__srv__ActuatorValuesService_Response __declspec(deprecated)
#endif

namespace arlo_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ActuatorValuesService_Response_
{
  using Type = ActuatorValuesService_Response_<ContainerAllocator>;

  explicit ActuatorValuesService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 2>::iterator, double>(this->actuator_values.begin(), this->actuator_values.end(), 0.0);
    }
  }

  explicit ActuatorValuesService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : actuator_values(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 2>::iterator, double>(this->actuator_values.begin(), this->actuator_values.end(), 0.0);
    }
  }

  // field types and members
  using _actuator_values_type =
    std::array<double, 2>;
  _actuator_values_type actuator_values;

  // setters for named parameter idiom
  Type & set__actuator_values(
    const std::array<double, 2> & _arg)
  {
    this->actuator_values = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arlo_interfaces::srv::ActuatorValuesService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const arlo_interfaces::srv::ActuatorValuesService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arlo_interfaces::srv::ActuatorValuesService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arlo_interfaces::srv::ActuatorValuesService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arlo_interfaces::srv::ActuatorValuesService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arlo_interfaces::srv::ActuatorValuesService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arlo_interfaces::srv::ActuatorValuesService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arlo_interfaces::srv::ActuatorValuesService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arlo_interfaces::srv::ActuatorValuesService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arlo_interfaces::srv::ActuatorValuesService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arlo_interfaces__srv__ActuatorValuesService_Response
    std::shared_ptr<arlo_interfaces::srv::ActuatorValuesService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arlo_interfaces__srv__ActuatorValuesService_Response
    std::shared_ptr<arlo_interfaces::srv::ActuatorValuesService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActuatorValuesService_Response_ & other) const
  {
    if (this->actuator_values != other.actuator_values) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActuatorValuesService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActuatorValuesService_Response_

// alias to use template instance with default allocator
using ActuatorValuesService_Response =
  arlo_interfaces::srv::ActuatorValuesService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace arlo_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arlo_interfaces__srv__ActuatorValuesService_Event __attribute__((deprecated))
#else
# define DEPRECATED__arlo_interfaces__srv__ActuatorValuesService_Event __declspec(deprecated)
#endif

namespace arlo_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ActuatorValuesService_Event_
{
  using Type = ActuatorValuesService_Event_<ContainerAllocator>;

  explicit ActuatorValuesService_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ActuatorValuesService_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<arlo_interfaces::srv::ActuatorValuesService_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arlo_interfaces::srv::ActuatorValuesService_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<arlo_interfaces::srv::ActuatorValuesService_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arlo_interfaces::srv::ActuatorValuesService_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<arlo_interfaces::srv::ActuatorValuesService_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arlo_interfaces::srv::ActuatorValuesService_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<arlo_interfaces::srv::ActuatorValuesService_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arlo_interfaces::srv::ActuatorValuesService_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arlo_interfaces::srv::ActuatorValuesService_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const arlo_interfaces::srv::ActuatorValuesService_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arlo_interfaces::srv::ActuatorValuesService_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arlo_interfaces::srv::ActuatorValuesService_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arlo_interfaces::srv::ActuatorValuesService_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arlo_interfaces::srv::ActuatorValuesService_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arlo_interfaces::srv::ActuatorValuesService_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arlo_interfaces::srv::ActuatorValuesService_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arlo_interfaces::srv::ActuatorValuesService_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arlo_interfaces::srv::ActuatorValuesService_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arlo_interfaces__srv__ActuatorValuesService_Event
    std::shared_ptr<arlo_interfaces::srv::ActuatorValuesService_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arlo_interfaces__srv__ActuatorValuesService_Event
    std::shared_ptr<arlo_interfaces::srv::ActuatorValuesService_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActuatorValuesService_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActuatorValuesService_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActuatorValuesService_Event_

// alias to use template instance with default allocator
using ActuatorValuesService_Event =
  arlo_interfaces::srv::ActuatorValuesService_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace arlo_interfaces

namespace arlo_interfaces
{

namespace srv
{

struct ActuatorValuesService
{
  using Request = arlo_interfaces::srv::ActuatorValuesService_Request;
  using Response = arlo_interfaces::srv::ActuatorValuesService_Response;
  using Event = arlo_interfaces::srv::ActuatorValuesService_Event;
};

}  // namespace srv

}  // namespace arlo_interfaces

#endif  // ARLO_INTERFACES__SRV__DETAIL__ACTUATOR_VALUES_SERVICE__STRUCT_HPP_
