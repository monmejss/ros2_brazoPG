// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from arlo_nn_controller:srv/EvaluateDriver.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "arlo_nn_controller/srv/detail/evaluate_driver__rosidl_typesupport_introspection_c.h"
#include "arlo_nn_controller/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "arlo_nn_controller/srv/detail/evaluate_driver__functions.h"
#include "arlo_nn_controller/srv/detail/evaluate_driver__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void arlo_nn_controller__srv__EvaluateDriver_Request__rosidl_typesupport_introspection_c__EvaluateDriver_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  arlo_nn_controller__srv__EvaluateDriver_Request__init(message_memory);
}

void arlo_nn_controller__srv__EvaluateDriver_Request__rosidl_typesupport_introspection_c__EvaluateDriver_Request_fini_function(void * message_memory)
{
  arlo_nn_controller__srv__EvaluateDriver_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember arlo_nn_controller__srv__EvaluateDriver_Request__rosidl_typesupport_introspection_c__EvaluateDriver_Request_message_member_array[2] = {
  {
    "maxtime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arlo_nn_controller__srv__EvaluateDriver_Request, maxtime),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tree_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arlo_nn_controller__srv__EvaluateDriver_Request, tree_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arlo_nn_controller__srv__EvaluateDriver_Request__rosidl_typesupport_introspection_c__EvaluateDriver_Request_message_members = {
  "arlo_nn_controller__srv",  // message namespace
  "EvaluateDriver_Request",  // message name
  2,  // number of fields
  sizeof(arlo_nn_controller__srv__EvaluateDriver_Request),
  arlo_nn_controller__srv__EvaluateDriver_Request__rosidl_typesupport_introspection_c__EvaluateDriver_Request_message_member_array,  // message members
  arlo_nn_controller__srv__EvaluateDriver_Request__rosidl_typesupport_introspection_c__EvaluateDriver_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  arlo_nn_controller__srv__EvaluateDriver_Request__rosidl_typesupport_introspection_c__EvaluateDriver_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arlo_nn_controller__srv__EvaluateDriver_Request__rosidl_typesupport_introspection_c__EvaluateDriver_Request_message_type_support_handle = {
  0,
  &arlo_nn_controller__srv__EvaluateDriver_Request__rosidl_typesupport_introspection_c__EvaluateDriver_Request_message_members,
  get_message_typesupport_handle_function,
  &arlo_nn_controller__srv__EvaluateDriver_Request__get_type_hash,
  &arlo_nn_controller__srv__EvaluateDriver_Request__get_type_description,
  &arlo_nn_controller__srv__EvaluateDriver_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arlo_nn_controller
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arlo_nn_controller, srv, EvaluateDriver_Request)() {
  if (!arlo_nn_controller__srv__EvaluateDriver_Request__rosidl_typesupport_introspection_c__EvaluateDriver_Request_message_type_support_handle.typesupport_identifier) {
    arlo_nn_controller__srv__EvaluateDriver_Request__rosidl_typesupport_introspection_c__EvaluateDriver_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arlo_nn_controller__srv__EvaluateDriver_Request__rosidl_typesupport_introspection_c__EvaluateDriver_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "arlo_nn_controller/srv/detail/evaluate_driver__rosidl_typesupport_introspection_c.h"
// already included above
// #include "arlo_nn_controller/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "arlo_nn_controller/srv/detail/evaluate_driver__functions.h"
// already included above
// #include "arlo_nn_controller/srv/detail/evaluate_driver__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void arlo_nn_controller__srv__EvaluateDriver_Response__rosidl_typesupport_introspection_c__EvaluateDriver_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  arlo_nn_controller__srv__EvaluateDriver_Response__init(message_memory);
}

void arlo_nn_controller__srv__EvaluateDriver_Response__rosidl_typesupport_introspection_c__EvaluateDriver_Response_fini_function(void * message_memory)
{
  arlo_nn_controller__srv__EvaluateDriver_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember arlo_nn_controller__srv__EvaluateDriver_Response__rosidl_typesupport_introspection_c__EvaluateDriver_Response_message_member_array[6] = {
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arlo_nn_controller__srv__EvaluateDriver_Response, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dist2go",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arlo_nn_controller__srv__EvaluateDriver_Response, dist2go),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "average_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arlo_nn_controller__srv__EvaluateDriver_Response, average_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "box_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arlo_nn_controller__srv__EvaluateDriver_Response, box_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "damage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arlo_nn_controller__srv__EvaluateDriver_Response, damage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "energy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arlo_nn_controller__srv__EvaluateDriver_Response, energy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arlo_nn_controller__srv__EvaluateDriver_Response__rosidl_typesupport_introspection_c__EvaluateDriver_Response_message_members = {
  "arlo_nn_controller__srv",  // message namespace
  "EvaluateDriver_Response",  // message name
  6,  // number of fields
  sizeof(arlo_nn_controller__srv__EvaluateDriver_Response),
  arlo_nn_controller__srv__EvaluateDriver_Response__rosidl_typesupport_introspection_c__EvaluateDriver_Response_message_member_array,  // message members
  arlo_nn_controller__srv__EvaluateDriver_Response__rosidl_typesupport_introspection_c__EvaluateDriver_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  arlo_nn_controller__srv__EvaluateDriver_Response__rosidl_typesupport_introspection_c__EvaluateDriver_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arlo_nn_controller__srv__EvaluateDriver_Response__rosidl_typesupport_introspection_c__EvaluateDriver_Response_message_type_support_handle = {
  0,
  &arlo_nn_controller__srv__EvaluateDriver_Response__rosidl_typesupport_introspection_c__EvaluateDriver_Response_message_members,
  get_message_typesupport_handle_function,
  &arlo_nn_controller__srv__EvaluateDriver_Response__get_type_hash,
  &arlo_nn_controller__srv__EvaluateDriver_Response__get_type_description,
  &arlo_nn_controller__srv__EvaluateDriver_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arlo_nn_controller
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arlo_nn_controller, srv, EvaluateDriver_Response)() {
  if (!arlo_nn_controller__srv__EvaluateDriver_Response__rosidl_typesupport_introspection_c__EvaluateDriver_Response_message_type_support_handle.typesupport_identifier) {
    arlo_nn_controller__srv__EvaluateDriver_Response__rosidl_typesupport_introspection_c__EvaluateDriver_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arlo_nn_controller__srv__EvaluateDriver_Response__rosidl_typesupport_introspection_c__EvaluateDriver_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "arlo_nn_controller/srv/detail/evaluate_driver__rosidl_typesupport_introspection_c.h"
// already included above
// #include "arlo_nn_controller/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "arlo_nn_controller/srv/detail/evaluate_driver__functions.h"
// already included above
// #include "arlo_nn_controller/srv/detail/evaluate_driver__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "arlo_nn_controller/srv/evaluate_driver.h"
// Member `request`
// Member `response`
// already included above
// #include "arlo_nn_controller/srv/detail/evaluate_driver__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__EvaluateDriver_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  arlo_nn_controller__srv__EvaluateDriver_Event__init(message_memory);
}

void arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__EvaluateDriver_Event_fini_function(void * message_memory)
{
  arlo_nn_controller__srv__EvaluateDriver_Event__fini(message_memory);
}

size_t arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__size_function__EvaluateDriver_Event__request(
  const void * untyped_member)
{
  const arlo_nn_controller__srv__EvaluateDriver_Request__Sequence * member =
    (const arlo_nn_controller__srv__EvaluateDriver_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__get_const_function__EvaluateDriver_Event__request(
  const void * untyped_member, size_t index)
{
  const arlo_nn_controller__srv__EvaluateDriver_Request__Sequence * member =
    (const arlo_nn_controller__srv__EvaluateDriver_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__get_function__EvaluateDriver_Event__request(
  void * untyped_member, size_t index)
{
  arlo_nn_controller__srv__EvaluateDriver_Request__Sequence * member =
    (arlo_nn_controller__srv__EvaluateDriver_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__fetch_function__EvaluateDriver_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const arlo_nn_controller__srv__EvaluateDriver_Request * item =
    ((const arlo_nn_controller__srv__EvaluateDriver_Request *)
    arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__get_const_function__EvaluateDriver_Event__request(untyped_member, index));
  arlo_nn_controller__srv__EvaluateDriver_Request * value =
    (arlo_nn_controller__srv__EvaluateDriver_Request *)(untyped_value);
  *value = *item;
}

void arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__assign_function__EvaluateDriver_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  arlo_nn_controller__srv__EvaluateDriver_Request * item =
    ((arlo_nn_controller__srv__EvaluateDriver_Request *)
    arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__get_function__EvaluateDriver_Event__request(untyped_member, index));
  const arlo_nn_controller__srv__EvaluateDriver_Request * value =
    (const arlo_nn_controller__srv__EvaluateDriver_Request *)(untyped_value);
  *item = *value;
}

bool arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__resize_function__EvaluateDriver_Event__request(
  void * untyped_member, size_t size)
{
  arlo_nn_controller__srv__EvaluateDriver_Request__Sequence * member =
    (arlo_nn_controller__srv__EvaluateDriver_Request__Sequence *)(untyped_member);
  arlo_nn_controller__srv__EvaluateDriver_Request__Sequence__fini(member);
  return arlo_nn_controller__srv__EvaluateDriver_Request__Sequence__init(member, size);
}

size_t arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__size_function__EvaluateDriver_Event__response(
  const void * untyped_member)
{
  const arlo_nn_controller__srv__EvaluateDriver_Response__Sequence * member =
    (const arlo_nn_controller__srv__EvaluateDriver_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__get_const_function__EvaluateDriver_Event__response(
  const void * untyped_member, size_t index)
{
  const arlo_nn_controller__srv__EvaluateDriver_Response__Sequence * member =
    (const arlo_nn_controller__srv__EvaluateDriver_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__get_function__EvaluateDriver_Event__response(
  void * untyped_member, size_t index)
{
  arlo_nn_controller__srv__EvaluateDriver_Response__Sequence * member =
    (arlo_nn_controller__srv__EvaluateDriver_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__fetch_function__EvaluateDriver_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const arlo_nn_controller__srv__EvaluateDriver_Response * item =
    ((const arlo_nn_controller__srv__EvaluateDriver_Response *)
    arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__get_const_function__EvaluateDriver_Event__response(untyped_member, index));
  arlo_nn_controller__srv__EvaluateDriver_Response * value =
    (arlo_nn_controller__srv__EvaluateDriver_Response *)(untyped_value);
  *value = *item;
}

void arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__assign_function__EvaluateDriver_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  arlo_nn_controller__srv__EvaluateDriver_Response * item =
    ((arlo_nn_controller__srv__EvaluateDriver_Response *)
    arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__get_function__EvaluateDriver_Event__response(untyped_member, index));
  const arlo_nn_controller__srv__EvaluateDriver_Response * value =
    (const arlo_nn_controller__srv__EvaluateDriver_Response *)(untyped_value);
  *item = *value;
}

bool arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__resize_function__EvaluateDriver_Event__response(
  void * untyped_member, size_t size)
{
  arlo_nn_controller__srv__EvaluateDriver_Response__Sequence * member =
    (arlo_nn_controller__srv__EvaluateDriver_Response__Sequence *)(untyped_member);
  arlo_nn_controller__srv__EvaluateDriver_Response__Sequence__fini(member);
  return arlo_nn_controller__srv__EvaluateDriver_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__EvaluateDriver_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arlo_nn_controller__srv__EvaluateDriver_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(arlo_nn_controller__srv__EvaluateDriver_Event, request),  // bytes offset in struct
    NULL,  // default value
    arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__size_function__EvaluateDriver_Event__request,  // size() function pointer
    arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__get_const_function__EvaluateDriver_Event__request,  // get_const(index) function pointer
    arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__get_function__EvaluateDriver_Event__request,  // get(index) function pointer
    arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__fetch_function__EvaluateDriver_Event__request,  // fetch(index, &value) function pointer
    arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__assign_function__EvaluateDriver_Event__request,  // assign(index, value) function pointer
    arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__resize_function__EvaluateDriver_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(arlo_nn_controller__srv__EvaluateDriver_Event, response),  // bytes offset in struct
    NULL,  // default value
    arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__size_function__EvaluateDriver_Event__response,  // size() function pointer
    arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__get_const_function__EvaluateDriver_Event__response,  // get_const(index) function pointer
    arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__get_function__EvaluateDriver_Event__response,  // get(index) function pointer
    arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__fetch_function__EvaluateDriver_Event__response,  // fetch(index, &value) function pointer
    arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__assign_function__EvaluateDriver_Event__response,  // assign(index, value) function pointer
    arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__resize_function__EvaluateDriver_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__EvaluateDriver_Event_message_members = {
  "arlo_nn_controller__srv",  // message namespace
  "EvaluateDriver_Event",  // message name
  3,  // number of fields
  sizeof(arlo_nn_controller__srv__EvaluateDriver_Event),
  arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__EvaluateDriver_Event_message_member_array,  // message members
  arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__EvaluateDriver_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__EvaluateDriver_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__EvaluateDriver_Event_message_type_support_handle = {
  0,
  &arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__EvaluateDriver_Event_message_members,
  get_message_typesupport_handle_function,
  &arlo_nn_controller__srv__EvaluateDriver_Event__get_type_hash,
  &arlo_nn_controller__srv__EvaluateDriver_Event__get_type_description,
  &arlo_nn_controller__srv__EvaluateDriver_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arlo_nn_controller
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arlo_nn_controller, srv, EvaluateDriver_Event)() {
  arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__EvaluateDriver_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__EvaluateDriver_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arlo_nn_controller, srv, EvaluateDriver_Request)();
  arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__EvaluateDriver_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arlo_nn_controller, srv, EvaluateDriver_Response)();
  if (!arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__EvaluateDriver_Event_message_type_support_handle.typesupport_identifier) {
    arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__EvaluateDriver_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__EvaluateDriver_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "arlo_nn_controller/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "arlo_nn_controller/srv/detail/evaluate_driver__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers arlo_nn_controller__srv__detail__evaluate_driver__rosidl_typesupport_introspection_c__EvaluateDriver_service_members = {
  "arlo_nn_controller__srv",  // service namespace
  "EvaluateDriver",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // arlo_nn_controller__srv__detail__evaluate_driver__rosidl_typesupport_introspection_c__EvaluateDriver_Request_message_type_support_handle,
  NULL,  // response message
  // arlo_nn_controller__srv__detail__evaluate_driver__rosidl_typesupport_introspection_c__EvaluateDriver_Response_message_type_support_handle
  NULL  // event_message
  // arlo_nn_controller__srv__detail__evaluate_driver__rosidl_typesupport_introspection_c__EvaluateDriver_Response_message_type_support_handle
};


static rosidl_service_type_support_t arlo_nn_controller__srv__detail__evaluate_driver__rosidl_typesupport_introspection_c__EvaluateDriver_service_type_support_handle = {
  0,
  &arlo_nn_controller__srv__detail__evaluate_driver__rosidl_typesupport_introspection_c__EvaluateDriver_service_members,
  get_service_typesupport_handle_function,
  &arlo_nn_controller__srv__EvaluateDriver_Request__rosidl_typesupport_introspection_c__EvaluateDriver_Request_message_type_support_handle,
  &arlo_nn_controller__srv__EvaluateDriver_Response__rosidl_typesupport_introspection_c__EvaluateDriver_Response_message_type_support_handle,
  &arlo_nn_controller__srv__EvaluateDriver_Event__rosidl_typesupport_introspection_c__EvaluateDriver_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    arlo_nn_controller,
    srv,
    EvaluateDriver
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    arlo_nn_controller,
    srv,
    EvaluateDriver
  ),
  &arlo_nn_controller__srv__EvaluateDriver__get_type_hash,
  &arlo_nn_controller__srv__EvaluateDriver__get_type_description,
  &arlo_nn_controller__srv__EvaluateDriver__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arlo_nn_controller, srv, EvaluateDriver_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arlo_nn_controller, srv, EvaluateDriver_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arlo_nn_controller, srv, EvaluateDriver_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arlo_nn_controller
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arlo_nn_controller, srv, EvaluateDriver)() {
  if (!arlo_nn_controller__srv__detail__evaluate_driver__rosidl_typesupport_introspection_c__EvaluateDriver_service_type_support_handle.typesupport_identifier) {
    arlo_nn_controller__srv__detail__evaluate_driver__rosidl_typesupport_introspection_c__EvaluateDriver_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)arlo_nn_controller__srv__detail__evaluate_driver__rosidl_typesupport_introspection_c__EvaluateDriver_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arlo_nn_controller, srv, EvaluateDriver_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arlo_nn_controller, srv, EvaluateDriver_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arlo_nn_controller, srv, EvaluateDriver_Event)()->data;
  }

  return &arlo_nn_controller__srv__detail__evaluate_driver__rosidl_typesupport_introspection_c__EvaluateDriver_service_type_support_handle;
}
