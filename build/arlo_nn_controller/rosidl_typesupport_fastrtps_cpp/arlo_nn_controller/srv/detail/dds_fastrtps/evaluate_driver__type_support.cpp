// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from arlo_nn_controller:srv/EvaluateDriver.idl
// generated code does not contain a copyright notice
#include "arlo_nn_controller/srv/detail/evaluate_driver__rosidl_typesupport_fastrtps_cpp.hpp"
#include "arlo_nn_controller/srv/detail/evaluate_driver__functions.h"
#include "arlo_nn_controller/srv/detail/evaluate_driver__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace arlo_nn_controller
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arlo_nn_controller
cdr_serialize(
  const arlo_nn_controller::srv::EvaluateDriver_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: maxtime
  cdr << ros_message.maxtime;
  // Member: tree_index
  cdr << ros_message.tree_index;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arlo_nn_controller
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  arlo_nn_controller::srv::EvaluateDriver_Request & ros_message)
{
  // Member: maxtime
  cdr >> ros_message.maxtime;

  // Member: tree_index
  cdr >> ros_message.tree_index;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arlo_nn_controller
get_serialized_size(
  const arlo_nn_controller::srv::EvaluateDriver_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: maxtime
  {
    size_t item_size = sizeof(ros_message.maxtime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tree_index
  {
    size_t item_size = sizeof(ros_message.tree_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arlo_nn_controller
max_serialized_size_EvaluateDriver_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: maxtime
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: tree_index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = arlo_nn_controller::srv::EvaluateDriver_Request;
    is_plain =
      (
      offsetof(DataType, tree_index) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _EvaluateDriver_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const arlo_nn_controller::srv::EvaluateDriver_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EvaluateDriver_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<arlo_nn_controller::srv::EvaluateDriver_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EvaluateDriver_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const arlo_nn_controller::srv::EvaluateDriver_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EvaluateDriver_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_EvaluateDriver_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _EvaluateDriver_Request__callbacks = {
  "arlo_nn_controller::srv",
  "EvaluateDriver_Request",
  _EvaluateDriver_Request__cdr_serialize,
  _EvaluateDriver_Request__cdr_deserialize,
  _EvaluateDriver_Request__get_serialized_size,
  _EvaluateDriver_Request__max_serialized_size
};

static rosidl_message_type_support_t _EvaluateDriver_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EvaluateDriver_Request__callbacks,
  get_message_typesupport_handle_function,
  &arlo_nn_controller__srv__EvaluateDriver_Request__get_type_hash,
  &arlo_nn_controller__srv__EvaluateDriver_Request__get_type_description,
  &arlo_nn_controller__srv__EvaluateDriver_Request__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace arlo_nn_controller

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_arlo_nn_controller
const rosidl_message_type_support_t *
get_message_type_support_handle<arlo_nn_controller::srv::EvaluateDriver_Request>()
{
  return &arlo_nn_controller::srv::typesupport_fastrtps_cpp::_EvaluateDriver_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, arlo_nn_controller, srv, EvaluateDriver_Request)() {
  return &arlo_nn_controller::srv::typesupport_fastrtps_cpp::_EvaluateDriver_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace arlo_nn_controller
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arlo_nn_controller
cdr_serialize(
  const arlo_nn_controller::srv::EvaluateDriver_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: time
  cdr << ros_message.time;
  // Member: dist2go
  cdr << ros_message.dist2go;
  // Member: average_distance
  cdr << ros_message.average_distance;
  // Member: box_distance
  cdr << ros_message.box_distance;
  // Member: damage
  cdr << ros_message.damage;
  // Member: energy
  cdr << ros_message.energy;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arlo_nn_controller
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  arlo_nn_controller::srv::EvaluateDriver_Response & ros_message)
{
  // Member: time
  cdr >> ros_message.time;

  // Member: dist2go
  cdr >> ros_message.dist2go;

  // Member: average_distance
  cdr >> ros_message.average_distance;

  // Member: box_distance
  cdr >> ros_message.box_distance;

  // Member: damage
  cdr >> ros_message.damage;

  // Member: energy
  cdr >> ros_message.energy;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arlo_nn_controller
get_serialized_size(
  const arlo_nn_controller::srv::EvaluateDriver_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: time
  {
    size_t item_size = sizeof(ros_message.time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dist2go
  {
    size_t item_size = sizeof(ros_message.dist2go);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: average_distance
  {
    size_t item_size = sizeof(ros_message.average_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: box_distance
  {
    size_t item_size = sizeof(ros_message.box_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: damage
  {
    size_t item_size = sizeof(ros_message.damage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: energy
  {
    size_t item_size = sizeof(ros_message.energy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arlo_nn_controller
max_serialized_size_EvaluateDriver_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dist2go
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: average_distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: box_distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: damage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: energy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = arlo_nn_controller::srv::EvaluateDriver_Response;
    is_plain =
      (
      offsetof(DataType, energy) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _EvaluateDriver_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const arlo_nn_controller::srv::EvaluateDriver_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EvaluateDriver_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<arlo_nn_controller::srv::EvaluateDriver_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EvaluateDriver_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const arlo_nn_controller::srv::EvaluateDriver_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EvaluateDriver_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_EvaluateDriver_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _EvaluateDriver_Response__callbacks = {
  "arlo_nn_controller::srv",
  "EvaluateDriver_Response",
  _EvaluateDriver_Response__cdr_serialize,
  _EvaluateDriver_Response__cdr_deserialize,
  _EvaluateDriver_Response__get_serialized_size,
  _EvaluateDriver_Response__max_serialized_size
};

static rosidl_message_type_support_t _EvaluateDriver_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EvaluateDriver_Response__callbacks,
  get_message_typesupport_handle_function,
  &arlo_nn_controller__srv__EvaluateDriver_Response__get_type_hash,
  &arlo_nn_controller__srv__EvaluateDriver_Response__get_type_description,
  &arlo_nn_controller__srv__EvaluateDriver_Response__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace arlo_nn_controller

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_arlo_nn_controller
const rosidl_message_type_support_t *
get_message_type_support_handle<arlo_nn_controller::srv::EvaluateDriver_Response>()
{
  return &arlo_nn_controller::srv::typesupport_fastrtps_cpp::_EvaluateDriver_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, arlo_nn_controller, srv, EvaluateDriver_Response)() {
  return &arlo_nn_controller::srv::typesupport_fastrtps_cpp::_EvaluateDriver_Response__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace service_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const service_msgs::msg::ServiceEventInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  service_msgs::msg::ServiceEventInfo &);
size_t get_serialized_size(
  const service_msgs::msg::ServiceEventInfo &,
  size_t current_alignment);
size_t
max_serialized_size_ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace service_msgs

// functions for arlo_nn_controller::srv::EvaluateDriver_Request already declared above

// functions for arlo_nn_controller::srv::EvaluateDriver_Response already declared above


namespace arlo_nn_controller
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arlo_nn_controller
cdr_serialize(
  const arlo_nn_controller::srv::EvaluateDriver_Event & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: info
  service_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.info,
    cdr);
  // Member: request
  {
    size_t size = ros_message.request.size();
    if (size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      arlo_nn_controller::srv::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.request[i],
        cdr);
    }
  }
  // Member: response
  {
    size_t size = ros_message.response.size();
    if (size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      arlo_nn_controller::srv::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.response[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arlo_nn_controller
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  arlo_nn_controller::srv::EvaluateDriver_Event & ros_message)
{
  // Member: info
  service_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.info);

  // Member: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.request.resize(size);
    for (size_t i = 0; i < size; i++) {
      arlo_nn_controller::srv::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.request[i]);
    }
  }

  // Member: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.response.resize(size);
    for (size_t i = 0; i < size; i++) {
      arlo_nn_controller::srv::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.response[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arlo_nn_controller
get_serialized_size(
  const arlo_nn_controller::srv::EvaluateDriver_Event & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: info

  current_alignment +=
    service_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.info, current_alignment);
  // Member: request
  {
    size_t array_size = ros_message.request.size();
    if (array_size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        arlo_nn_controller::srv::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.request[index], current_alignment);
    }
  }
  // Member: response
  {
    size_t array_size = ros_message.response.size();
    if (array_size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        arlo_nn_controller::srv::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.response[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arlo_nn_controller
max_serialized_size_EvaluateDriver_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: info
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        service_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        arlo_nn_controller::srv::typesupport_fastrtps_cpp::max_serialized_size_EvaluateDriver_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        arlo_nn_controller::srv::typesupport_fastrtps_cpp::max_serialized_size_EvaluateDriver_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = arlo_nn_controller::srv::EvaluateDriver_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _EvaluateDriver_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const arlo_nn_controller::srv::EvaluateDriver_Event *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EvaluateDriver_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<arlo_nn_controller::srv::EvaluateDriver_Event *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EvaluateDriver_Event__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const arlo_nn_controller::srv::EvaluateDriver_Event *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EvaluateDriver_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_EvaluateDriver_Event(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _EvaluateDriver_Event__callbacks = {
  "arlo_nn_controller::srv",
  "EvaluateDriver_Event",
  _EvaluateDriver_Event__cdr_serialize,
  _EvaluateDriver_Event__cdr_deserialize,
  _EvaluateDriver_Event__get_serialized_size,
  _EvaluateDriver_Event__max_serialized_size
};

static rosidl_message_type_support_t _EvaluateDriver_Event__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EvaluateDriver_Event__callbacks,
  get_message_typesupport_handle_function,
  &arlo_nn_controller__srv__EvaluateDriver_Event__get_type_hash,
  &arlo_nn_controller__srv__EvaluateDriver_Event__get_type_description,
  &arlo_nn_controller__srv__EvaluateDriver_Event__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace arlo_nn_controller

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_arlo_nn_controller
const rosidl_message_type_support_t *
get_message_type_support_handle<arlo_nn_controller::srv::EvaluateDriver_Event>()
{
  return &arlo_nn_controller::srv::typesupport_fastrtps_cpp::_EvaluateDriver_Event__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, arlo_nn_controller, srv, EvaluateDriver_Event)() {
  return &arlo_nn_controller::srv::typesupport_fastrtps_cpp::_EvaluateDriver_Event__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace arlo_nn_controller
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _EvaluateDriver__callbacks = {
  "arlo_nn_controller::srv",
  "EvaluateDriver",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, arlo_nn_controller, srv, EvaluateDriver_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, arlo_nn_controller, srv, EvaluateDriver_Response)(),
};

#ifdef __cplusplus
extern "C"
{
#endif

static const rosidl_service_type_support_t _EvaluateDriver__handle{
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EvaluateDriver__callbacks,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_fastrtps_cpp::get_message_type_support_handle<arlo_nn_controller::srv::EvaluateDriver_Request>(),
  ::rosidl_typesupport_fastrtps_cpp::get_message_type_support_handle<arlo_nn_controller::srv::EvaluateDriver_Response>(),
  ::rosidl_typesupport_fastrtps_cpp::get_message_type_support_handle<arlo_nn_controller::srv::EvaluateDriver_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<arlo_nn_controller::srv::EvaluateDriver>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<arlo_nn_controller::srv::EvaluateDriver>,
  &arlo_nn_controller__srv__EvaluateDriver__get_type_hash,
  &arlo_nn_controller__srv__EvaluateDriver__get_type_description,
  &arlo_nn_controller__srv__EvaluateDriver__get_type_description_sources,
};

#ifdef __cplusplus
}
#endif

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace arlo_nn_controller

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_arlo_nn_controller
const rosidl_service_type_support_t *
get_service_type_support_handle<arlo_nn_controller::srv::EvaluateDriver>()
{
  return &arlo_nn_controller::srv::typesupport_fastrtps_cpp::_EvaluateDriver__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, arlo_nn_controller, srv, EvaluateDriver)() {
  return &arlo_nn_controller::srv::typesupport_fastrtps_cpp::_EvaluateDriver__handle;
}

#ifdef __cplusplus
}
#endif
