// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from arlo_interfaces:srv/EvaluateTree.idl
// generated code does not contain a copyright notice
#include "arlo_interfaces/srv/detail/evaluate_tree__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "arlo_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "arlo_interfaces/srv/detail/evaluate_tree__struct.h"
#include "arlo_interfaces/srv/detail/evaluate_tree__functions.h"
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


using _EvaluateTree_Request__ros_msg_type = arlo_interfaces__srv__EvaluateTree_Request;

static bool _EvaluateTree_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EvaluateTree_Request__ros_msg_type * ros_message = static_cast<const _EvaluateTree_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: sensor_values
  {
    size_t size = 32;
    auto array_ptr = ros_message->sensor_values;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: tree_index
  {
    cdr << ros_message->tree_index;
  }

  return true;
}

static bool _EvaluateTree_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EvaluateTree_Request__ros_msg_type * ros_message = static_cast<_EvaluateTree_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: sensor_values
  {
    size_t size = 32;
    auto array_ptr = ros_message->sensor_values;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: tree_index
  {
    cdr >> ros_message->tree_index;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arlo_interfaces
size_t get_serialized_size_arlo_interfaces__srv__EvaluateTree_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EvaluateTree_Request__ros_msg_type * ros_message = static_cast<const _EvaluateTree_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sensor_values
  {
    size_t array_size = 32;
    auto array_ptr = ros_message->sensor_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tree_index
  {
    size_t item_size = sizeof(ros_message->tree_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EvaluateTree_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_arlo_interfaces__srv__EvaluateTree_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arlo_interfaces
size_t max_serialized_size_arlo_interfaces__srv__EvaluateTree_Request(
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

  // member: sensor_values
  {
    size_t array_size = 32;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: tree_index
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
    using DataType = arlo_interfaces__srv__EvaluateTree_Request;
    is_plain =
      (
      offsetof(DataType, tree_index) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EvaluateTree_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_arlo_interfaces__srv__EvaluateTree_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EvaluateTree_Request = {
  "arlo_interfaces::srv",
  "EvaluateTree_Request",
  _EvaluateTree_Request__cdr_serialize,
  _EvaluateTree_Request__cdr_deserialize,
  _EvaluateTree_Request__get_serialized_size,
  _EvaluateTree_Request__max_serialized_size
};

static rosidl_message_type_support_t _EvaluateTree_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EvaluateTree_Request,
  get_message_typesupport_handle_function,
  &arlo_interfaces__srv__EvaluateTree_Request__get_type_hash,
  &arlo_interfaces__srv__EvaluateTree_Request__get_type_description,
  &arlo_interfaces__srv__EvaluateTree_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arlo_interfaces, srv, EvaluateTree_Request)() {
  return &_EvaluateTree_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "arlo_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "arlo_interfaces/srv/detail/evaluate_tree__struct.h"
// already included above
// #include "arlo_interfaces/srv/detail/evaluate_tree__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


using _EvaluateTree_Response__ros_msg_type = arlo_interfaces__srv__EvaluateTree_Response;

static bool _EvaluateTree_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EvaluateTree_Response__ros_msg_type * ros_message = static_cast<const _EvaluateTree_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: actuator_values
  {
    size_t size = 2;
    auto array_ptr = ros_message->actuator_values;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _EvaluateTree_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EvaluateTree_Response__ros_msg_type * ros_message = static_cast<_EvaluateTree_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: actuator_values
  {
    size_t size = 2;
    auto array_ptr = ros_message->actuator_values;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arlo_interfaces
size_t get_serialized_size_arlo_interfaces__srv__EvaluateTree_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EvaluateTree_Response__ros_msg_type * ros_message = static_cast<const _EvaluateTree_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name actuator_values
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->actuator_values;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EvaluateTree_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_arlo_interfaces__srv__EvaluateTree_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arlo_interfaces
size_t max_serialized_size_arlo_interfaces__srv__EvaluateTree_Response(
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

  // member: actuator_values
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
    using DataType = arlo_interfaces__srv__EvaluateTree_Response;
    is_plain =
      (
      offsetof(DataType, actuator_values) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EvaluateTree_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_arlo_interfaces__srv__EvaluateTree_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EvaluateTree_Response = {
  "arlo_interfaces::srv",
  "EvaluateTree_Response",
  _EvaluateTree_Response__cdr_serialize,
  _EvaluateTree_Response__cdr_deserialize,
  _EvaluateTree_Response__get_serialized_size,
  _EvaluateTree_Response__max_serialized_size
};

static rosidl_message_type_support_t _EvaluateTree_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EvaluateTree_Response,
  get_message_typesupport_handle_function,
  &arlo_interfaces__srv__EvaluateTree_Response__get_type_hash,
  &arlo_interfaces__srv__EvaluateTree_Response__get_type_description,
  &arlo_interfaces__srv__EvaluateTree_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arlo_interfaces, srv, EvaluateTree_Response)() {
  return &_EvaluateTree_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "arlo_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "arlo_interfaces/srv/detail/evaluate_tree__struct.h"
// already included above
// #include "arlo_interfaces/srv/detail/evaluate_tree__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions
size_t get_serialized_size_arlo_interfaces__srv__EvaluateTree_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_arlo_interfaces__srv__EvaluateTree_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arlo_interfaces, srv, EvaluateTree_Request)();
size_t get_serialized_size_arlo_interfaces__srv__EvaluateTree_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_arlo_interfaces__srv__EvaluateTree_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arlo_interfaces, srv, EvaluateTree_Response)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arlo_interfaces
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arlo_interfaces
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arlo_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();


using _EvaluateTree_Event__ros_msg_type = arlo_interfaces__srv__EvaluateTree_Event;

static bool _EvaluateTree_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EvaluateTree_Event__ros_msg_type * ros_message = static_cast<const _EvaluateTree_Event__ros_msg_type *>(untyped_ros_message);
  // Field name: info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->info, cdr))
    {
      return false;
    }
  }

  // Field name: request
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, arlo_interfaces, srv, EvaluateTree_Request
      )()->data);
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: response
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, arlo_interfaces, srv, EvaluateTree_Response
      )()->data);
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _EvaluateTree_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EvaluateTree_Event__ros_msg_type * ros_message = static_cast<_EvaluateTree_Event__ros_msg_type *>(untyped_ros_message);
  // Field name: info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->info))
    {
      return false;
    }
  }

  // Field name: request
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, arlo_interfaces, srv, EvaluateTree_Request
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->request.data) {
      arlo_interfaces__srv__EvaluateTree_Request__Sequence__fini(&ros_message->request);
    }
    if (!arlo_interfaces__srv__EvaluateTree_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: response
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, arlo_interfaces, srv, EvaluateTree_Response
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->response.data) {
      arlo_interfaces__srv__EvaluateTree_Response__Sequence__fini(&ros_message->response);
    }
    if (!arlo_interfaces__srv__EvaluateTree_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arlo_interfaces
size_t get_serialized_size_arlo_interfaces__srv__EvaluateTree_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EvaluateTree_Event__ros_msg_type * ros_message = static_cast<const _EvaluateTree_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name info

  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);
  // field.name request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_arlo_interfaces__srv__EvaluateTree_Request(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_arlo_interfaces__srv__EvaluateTree_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EvaluateTree_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_arlo_interfaces__srv__EvaluateTree_Event(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arlo_interfaces
size_t max_serialized_size_arlo_interfaces__srv__EvaluateTree_Event(
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

  // member: info
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_arlo_interfaces__srv__EvaluateTree_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_arlo_interfaces__srv__EvaluateTree_Response(
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
    using DataType = arlo_interfaces__srv__EvaluateTree_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EvaluateTree_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_arlo_interfaces__srv__EvaluateTree_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EvaluateTree_Event = {
  "arlo_interfaces::srv",
  "EvaluateTree_Event",
  _EvaluateTree_Event__cdr_serialize,
  _EvaluateTree_Event__cdr_deserialize,
  _EvaluateTree_Event__get_serialized_size,
  _EvaluateTree_Event__max_serialized_size
};

static rosidl_message_type_support_t _EvaluateTree_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EvaluateTree_Event,
  get_message_typesupport_handle_function,
  &arlo_interfaces__srv__EvaluateTree_Event__get_type_hash,
  &arlo_interfaces__srv__EvaluateTree_Event__get_type_description,
  &arlo_interfaces__srv__EvaluateTree_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arlo_interfaces, srv, EvaluateTree_Event)() {
  return &_EvaluateTree_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "arlo_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "arlo_interfaces/srv/evaluate_tree.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t EvaluateTree__callbacks = {
  "arlo_interfaces::srv",
  "EvaluateTree",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arlo_interfaces, srv, EvaluateTree_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arlo_interfaces, srv, EvaluateTree_Response)(),
};

static rosidl_service_type_support_t EvaluateTree__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &EvaluateTree__callbacks,
  get_service_typesupport_handle_function,
  &_EvaluateTree_Request__type_support,
  &_EvaluateTree_Response__type_support,
  &_EvaluateTree_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    arlo_interfaces,
    srv,
    EvaluateTree
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    arlo_interfaces,
    srv,
    EvaluateTree
  ),
  &arlo_interfaces__srv__EvaluateTree__get_type_hash,
  &arlo_interfaces__srv__EvaluateTree__get_type_description,
  &arlo_interfaces__srv__EvaluateTree__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arlo_interfaces, srv, EvaluateTree)() {
  return &EvaluateTree__handle;
}

#if defined(__cplusplus)
}
#endif
