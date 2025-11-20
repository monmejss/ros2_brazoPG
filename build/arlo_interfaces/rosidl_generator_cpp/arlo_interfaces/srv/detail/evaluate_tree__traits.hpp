// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arlo_interfaces:srv/EvaluateTree.idl
// generated code does not contain a copyright notice

#ifndef ARLO_INTERFACES__SRV__DETAIL__EVALUATE_TREE__TRAITS_HPP_
#define ARLO_INTERFACES__SRV__DETAIL__EVALUATE_TREE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arlo_interfaces/srv/detail/evaluate_tree__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace arlo_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const EvaluateTree_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: sensor_values
  {
    if (msg.sensor_values.size() == 0) {
      out << "sensor_values: []";
    } else {
      out << "sensor_values: [";
      size_t pending_items = msg.sensor_values.size();
      for (auto item : msg.sensor_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tree_index
  {
    out << "tree_index: ";
    rosidl_generator_traits::value_to_yaml(msg.tree_index, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EvaluateTree_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sensor_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sensor_values.size() == 0) {
      out << "sensor_values: []\n";
    } else {
      out << "sensor_values:\n";
      for (auto item : msg.sensor_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tree_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tree_index: ";
    rosidl_generator_traits::value_to_yaml(msg.tree_index, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EvaluateTree_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace arlo_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use arlo_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arlo_interfaces::srv::EvaluateTree_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  arlo_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arlo_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const arlo_interfaces::srv::EvaluateTree_Request & msg)
{
  return arlo_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arlo_interfaces::srv::EvaluateTree_Request>()
{
  return "arlo_interfaces::srv::EvaluateTree_Request";
}

template<>
inline const char * name<arlo_interfaces::srv::EvaluateTree_Request>()
{
  return "arlo_interfaces/srv/EvaluateTree_Request";
}

template<>
struct has_fixed_size<arlo_interfaces::srv::EvaluateTree_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<arlo_interfaces::srv::EvaluateTree_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<arlo_interfaces::srv::EvaluateTree_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace arlo_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const EvaluateTree_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: actuator_values
  {
    if (msg.actuator_values.size() == 0) {
      out << "actuator_values: []";
    } else {
      out << "actuator_values: [";
      size_t pending_items = msg.actuator_values.size();
      for (auto item : msg.actuator_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EvaluateTree_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: actuator_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.actuator_values.size() == 0) {
      out << "actuator_values: []\n";
    } else {
      out << "actuator_values:\n";
      for (auto item : msg.actuator_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EvaluateTree_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace arlo_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use arlo_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arlo_interfaces::srv::EvaluateTree_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  arlo_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arlo_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const arlo_interfaces::srv::EvaluateTree_Response & msg)
{
  return arlo_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arlo_interfaces::srv::EvaluateTree_Response>()
{
  return "arlo_interfaces::srv::EvaluateTree_Response";
}

template<>
inline const char * name<arlo_interfaces::srv::EvaluateTree_Response>()
{
  return "arlo_interfaces/srv/EvaluateTree_Response";
}

template<>
struct has_fixed_size<arlo_interfaces::srv::EvaluateTree_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<arlo_interfaces::srv::EvaluateTree_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<arlo_interfaces::srv::EvaluateTree_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace arlo_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const EvaluateTree_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EvaluateTree_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EvaluateTree_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace arlo_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use arlo_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arlo_interfaces::srv::EvaluateTree_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  arlo_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arlo_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const arlo_interfaces::srv::EvaluateTree_Event & msg)
{
  return arlo_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arlo_interfaces::srv::EvaluateTree_Event>()
{
  return "arlo_interfaces::srv::EvaluateTree_Event";
}

template<>
inline const char * name<arlo_interfaces::srv::EvaluateTree_Event>()
{
  return "arlo_interfaces/srv/EvaluateTree_Event";
}

template<>
struct has_fixed_size<arlo_interfaces::srv::EvaluateTree_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<arlo_interfaces::srv::EvaluateTree_Event>
  : std::integral_constant<bool, has_bounded_size<arlo_interfaces::srv::EvaluateTree_Request>::value && has_bounded_size<arlo_interfaces::srv::EvaluateTree_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<arlo_interfaces::srv::EvaluateTree_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<arlo_interfaces::srv::EvaluateTree>()
{
  return "arlo_interfaces::srv::EvaluateTree";
}

template<>
inline const char * name<arlo_interfaces::srv::EvaluateTree>()
{
  return "arlo_interfaces/srv/EvaluateTree";
}

template<>
struct has_fixed_size<arlo_interfaces::srv::EvaluateTree>
  : std::integral_constant<
    bool,
    has_fixed_size<arlo_interfaces::srv::EvaluateTree_Request>::value &&
    has_fixed_size<arlo_interfaces::srv::EvaluateTree_Response>::value
  >
{
};

template<>
struct has_bounded_size<arlo_interfaces::srv::EvaluateTree>
  : std::integral_constant<
    bool,
    has_bounded_size<arlo_interfaces::srv::EvaluateTree_Request>::value &&
    has_bounded_size<arlo_interfaces::srv::EvaluateTree_Response>::value
  >
{
};

template<>
struct is_service<arlo_interfaces::srv::EvaluateTree>
  : std::true_type
{
};

template<>
struct is_service_request<arlo_interfaces::srv::EvaluateTree_Request>
  : std::true_type
{
};

template<>
struct is_service_response<arlo_interfaces::srv::EvaluateTree_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARLO_INTERFACES__SRV__DETAIL__EVALUATE_TREE__TRAITS_HPP_
