// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from arlo_interfaces:msg/Array.idl
// generated code does not contain a copyright notice
#include "arlo_interfaces/msg/detail/array__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "arlo_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "arlo_interfaces/msg/detail/array__struct.h"
#include "arlo_interfaces/msg/detail/array__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Array__ros_msg_type = arlo_interfaces__msg__Array;

static bool _Array__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Array__ros_msg_type * ros_message = static_cast<const _Array__ros_msg_type *>(untyped_ros_message);
  // Field name: sensor_values_array
  {
    size_t size = 32;
    auto array_ptr = ros_message->sensor_values_array;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: actuator_values_array
  {
    size_t size = 2;
    auto array_ptr = ros_message->actuator_values_array;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Array__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Array__ros_msg_type * ros_message = static_cast<_Array__ros_msg_type *>(untyped_ros_message);
  // Field name: sensor_values_array
  {
    size_t size = 32;
    auto array_ptr = ros_message->sensor_values_array;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: actuator_values_array
  {
    size_t size = 2;
    auto array_ptr = ros_message->actuator_values_array;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arlo_interfaces
size_t get_serialized_size_arlo_interfaces__msg__Array(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Array__ros_msg_type * ros_message = static_cast<const _Array__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sensor_values_array
  {
    size_t array_size = 32;
    auto array_ptr = ros_message->sensor_values_array;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name actuator_values_array
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->actuator_values_array;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Array__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_arlo_interfaces__msg__Array(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arlo_interfaces
size_t max_serialized_size_arlo_interfaces__msg__Array(
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

  // member: sensor_values_array
  {
    size_t array_size = 32;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: actuator_values_array
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
    using DataType = arlo_interfaces__msg__Array;
    is_plain =
      (
      offsetof(DataType, actuator_values_array) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Array__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_arlo_interfaces__msg__Array(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Array = {
  "arlo_interfaces::msg",
  "Array",
  _Array__cdr_serialize,
  _Array__cdr_deserialize,
  _Array__get_serialized_size,
  _Array__max_serialized_size
};

static rosidl_message_type_support_t _Array__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Array,
  get_message_typesupport_handle_function,
  &arlo_interfaces__msg__Array__get_type_hash,
  &arlo_interfaces__msg__Array__get_type_description,
  &arlo_interfaces__msg__Array__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arlo_interfaces, msg, Array)() {
  return &_Array__type_support;
}

#if defined(__cplusplus)
}
#endif
