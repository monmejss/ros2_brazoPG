// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from arlo_interfaces:msg/Array.idl
// generated code does not contain a copyright notice
#include "arlo_interfaces/msg/detail/array__rosidl_typesupport_fastrtps_cpp.hpp"
#include "arlo_interfaces/msg/detail/array__functions.h"
#include "arlo_interfaces/msg/detail/array__struct.hpp"

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

namespace arlo_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arlo_interfaces
cdr_serialize(
  const arlo_interfaces::msg::Array & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: sensor_values_array
  {
    cdr << ros_message.sensor_values_array;
  }
  // Member: actuator_values_array
  {
    cdr << ros_message.actuator_values_array;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arlo_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  arlo_interfaces::msg::Array & ros_message)
{
  // Member: sensor_values_array
  {
    cdr >> ros_message.sensor_values_array;
  }

  // Member: actuator_values_array
  {
    cdr >> ros_message.actuator_values_array;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arlo_interfaces
get_serialized_size(
  const arlo_interfaces::msg::Array & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: sensor_values_array
  {
    size_t array_size = 32;
    size_t item_size = sizeof(ros_message.sensor_values_array[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: actuator_values_array
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.actuator_values_array[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arlo_interfaces
max_serialized_size_Array(
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


  // Member: sensor_values_array
  {
    size_t array_size = 32;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: actuator_values_array
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = arlo_interfaces::msg::Array;
    is_plain =
      (
      offsetof(DataType, actuator_values_array) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Array__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const arlo_interfaces::msg::Array *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Array__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<arlo_interfaces::msg::Array *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Array__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const arlo_interfaces::msg::Array *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Array__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Array(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Array__callbacks = {
  "arlo_interfaces::msg",
  "Array",
  _Array__cdr_serialize,
  _Array__cdr_deserialize,
  _Array__get_serialized_size,
  _Array__max_serialized_size
};

static rosidl_message_type_support_t _Array__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Array__callbacks,
  get_message_typesupport_handle_function,
  &arlo_interfaces__msg__Array__get_type_hash,
  &arlo_interfaces__msg__Array__get_type_description,
  &arlo_interfaces__msg__Array__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace arlo_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_arlo_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<arlo_interfaces::msg::Array>()
{
  return &arlo_interfaces::msg::typesupport_fastrtps_cpp::_Array__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, arlo_interfaces, msg, Array)() {
  return &arlo_interfaces::msg::typesupport_fastrtps_cpp::_Array__handle;
}

#ifdef __cplusplus
}
#endif
