// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arlo_nn_controller:srv/EvaluateDriver.idl
// generated code does not contain a copyright notice

#ifndef ARLO_NN_CONTROLLER__SRV__DETAIL__EVALUATE_DRIVER__TRAITS_HPP_
#define ARLO_NN_CONTROLLER__SRV__DETAIL__EVALUATE_DRIVER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arlo_nn_controller/srv/detail/evaluate_driver__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace arlo_nn_controller
{

namespace srv
{

inline void to_flow_style_yaml(
  const EvaluateDriver_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: maxtime
  {
    out << "maxtime: ";
    rosidl_generator_traits::value_to_yaml(msg.maxtime, out);
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
  const EvaluateDriver_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: maxtime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maxtime: ";
    rosidl_generator_traits::value_to_yaml(msg.maxtime, out);
    out << "\n";
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

inline std::string to_yaml(const EvaluateDriver_Request & msg, bool use_flow_style = false)
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

}  // namespace arlo_nn_controller

namespace rosidl_generator_traits
{

[[deprecated("use arlo_nn_controller::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arlo_nn_controller::srv::EvaluateDriver_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  arlo_nn_controller::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arlo_nn_controller::srv::to_yaml() instead")]]
inline std::string to_yaml(const arlo_nn_controller::srv::EvaluateDriver_Request & msg)
{
  return arlo_nn_controller::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arlo_nn_controller::srv::EvaluateDriver_Request>()
{
  return "arlo_nn_controller::srv::EvaluateDriver_Request";
}

template<>
inline const char * name<arlo_nn_controller::srv::EvaluateDriver_Request>()
{
  return "arlo_nn_controller/srv/EvaluateDriver_Request";
}

template<>
struct has_fixed_size<arlo_nn_controller::srv::EvaluateDriver_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<arlo_nn_controller::srv::EvaluateDriver_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<arlo_nn_controller::srv::EvaluateDriver_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace arlo_nn_controller
{

namespace srv
{

inline void to_flow_style_yaml(
  const EvaluateDriver_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << ", ";
  }

  // member: dist2go
  {
    out << "dist2go: ";
    rosidl_generator_traits::value_to_yaml(msg.dist2go, out);
    out << ", ";
  }

  // member: average_distance
  {
    out << "average_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.average_distance, out);
    out << ", ";
  }

  // member: box_distance
  {
    out << "box_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.box_distance, out);
    out << ", ";
  }

  // member: damage
  {
    out << "damage: ";
    rosidl_generator_traits::value_to_yaml(msg.damage, out);
    out << ", ";
  }

  // member: energy
  {
    out << "energy: ";
    rosidl_generator_traits::value_to_yaml(msg.energy, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EvaluateDriver_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }

  // member: dist2go
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dist2go: ";
    rosidl_generator_traits::value_to_yaml(msg.dist2go, out);
    out << "\n";
  }

  // member: average_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "average_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.average_distance, out);
    out << "\n";
  }

  // member: box_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "box_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.box_distance, out);
    out << "\n";
  }

  // member: damage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "damage: ";
    rosidl_generator_traits::value_to_yaml(msg.damage, out);
    out << "\n";
  }

  // member: energy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "energy: ";
    rosidl_generator_traits::value_to_yaml(msg.energy, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EvaluateDriver_Response & msg, bool use_flow_style = false)
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

}  // namespace arlo_nn_controller

namespace rosidl_generator_traits
{

[[deprecated("use arlo_nn_controller::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arlo_nn_controller::srv::EvaluateDriver_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  arlo_nn_controller::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arlo_nn_controller::srv::to_yaml() instead")]]
inline std::string to_yaml(const arlo_nn_controller::srv::EvaluateDriver_Response & msg)
{
  return arlo_nn_controller::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arlo_nn_controller::srv::EvaluateDriver_Response>()
{
  return "arlo_nn_controller::srv::EvaluateDriver_Response";
}

template<>
inline const char * name<arlo_nn_controller::srv::EvaluateDriver_Response>()
{
  return "arlo_nn_controller/srv/EvaluateDriver_Response";
}

template<>
struct has_fixed_size<arlo_nn_controller::srv::EvaluateDriver_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<arlo_nn_controller::srv::EvaluateDriver_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<arlo_nn_controller::srv::EvaluateDriver_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace arlo_nn_controller
{

namespace srv
{

inline void to_flow_style_yaml(
  const EvaluateDriver_Event & msg,
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
  const EvaluateDriver_Event & msg,
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

inline std::string to_yaml(const EvaluateDriver_Event & msg, bool use_flow_style = false)
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

}  // namespace arlo_nn_controller

namespace rosidl_generator_traits
{

[[deprecated("use arlo_nn_controller::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arlo_nn_controller::srv::EvaluateDriver_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  arlo_nn_controller::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arlo_nn_controller::srv::to_yaml() instead")]]
inline std::string to_yaml(const arlo_nn_controller::srv::EvaluateDriver_Event & msg)
{
  return arlo_nn_controller::srv::to_yaml(msg);
}

template<>
inline const char * data_type<arlo_nn_controller::srv::EvaluateDriver_Event>()
{
  return "arlo_nn_controller::srv::EvaluateDriver_Event";
}

template<>
inline const char * name<arlo_nn_controller::srv::EvaluateDriver_Event>()
{
  return "arlo_nn_controller/srv/EvaluateDriver_Event";
}

template<>
struct has_fixed_size<arlo_nn_controller::srv::EvaluateDriver_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<arlo_nn_controller::srv::EvaluateDriver_Event>
  : std::integral_constant<bool, has_bounded_size<arlo_nn_controller::srv::EvaluateDriver_Request>::value && has_bounded_size<arlo_nn_controller::srv::EvaluateDriver_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<arlo_nn_controller::srv::EvaluateDriver_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<arlo_nn_controller::srv::EvaluateDriver>()
{
  return "arlo_nn_controller::srv::EvaluateDriver";
}

template<>
inline const char * name<arlo_nn_controller::srv::EvaluateDriver>()
{
  return "arlo_nn_controller/srv/EvaluateDriver";
}

template<>
struct has_fixed_size<arlo_nn_controller::srv::EvaluateDriver>
  : std::integral_constant<
    bool,
    has_fixed_size<arlo_nn_controller::srv::EvaluateDriver_Request>::value &&
    has_fixed_size<arlo_nn_controller::srv::EvaluateDriver_Response>::value
  >
{
};

template<>
struct has_bounded_size<arlo_nn_controller::srv::EvaluateDriver>
  : std::integral_constant<
    bool,
    has_bounded_size<arlo_nn_controller::srv::EvaluateDriver_Request>::value &&
    has_bounded_size<arlo_nn_controller::srv::EvaluateDriver_Response>::value
  >
{
};

template<>
struct is_service<arlo_nn_controller::srv::EvaluateDriver>
  : std::true_type
{
};

template<>
struct is_service_request<arlo_nn_controller::srv::EvaluateDriver_Request>
  : std::true_type
{
};

template<>
struct is_service_response<arlo_nn_controller::srv::EvaluateDriver_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARLO_NN_CONTROLLER__SRV__DETAIL__EVALUATE_DRIVER__TRAITS_HPP_
