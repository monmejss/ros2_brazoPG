// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from arlo_interfaces:msg/Array.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "arlo_interfaces/msg/detail/array__rosidl_typesupport_introspection_c.h"
#include "arlo_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "arlo_interfaces/msg/detail/array__functions.h"
#include "arlo_interfaces/msg/detail/array__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__Array_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  arlo_interfaces__msg__Array__init(message_memory);
}

void arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__Array_fini_function(void * message_memory)
{
  arlo_interfaces__msg__Array__fini(message_memory);
}

size_t arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__size_function__Array__sensor_values_array(
  const void * untyped_member)
{
  (void)untyped_member;
  return 32;
}

const void * arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__get_const_function__Array__sensor_values_array(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__get_function__Array__sensor_values_array(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__fetch_function__Array__sensor_values_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__get_const_function__Array__sensor_values_array(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__assign_function__Array__sensor_values_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__get_function__Array__sensor_values_array(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__size_function__Array__actuator_values_array(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__get_const_function__Array__actuator_values_array(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__get_function__Array__actuator_values_array(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__fetch_function__Array__actuator_values_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__get_const_function__Array__actuator_values_array(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__assign_function__Array__actuator_values_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__get_function__Array__actuator_values_array(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__Array_message_member_array[2] = {
  {
    "sensor_values_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    32,  // array size
    false,  // is upper bound
    offsetof(arlo_interfaces__msg__Array, sensor_values_array),  // bytes offset in struct
    NULL,  // default value
    arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__size_function__Array__sensor_values_array,  // size() function pointer
    arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__get_const_function__Array__sensor_values_array,  // get_const(index) function pointer
    arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__get_function__Array__sensor_values_array,  // get(index) function pointer
    arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__fetch_function__Array__sensor_values_array,  // fetch(index, &value) function pointer
    arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__assign_function__Array__sensor_values_array,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "actuator_values_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(arlo_interfaces__msg__Array, actuator_values_array),  // bytes offset in struct
    NULL,  // default value
    arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__size_function__Array__actuator_values_array,  // size() function pointer
    arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__get_const_function__Array__actuator_values_array,  // get_const(index) function pointer
    arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__get_function__Array__actuator_values_array,  // get(index) function pointer
    arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__fetch_function__Array__actuator_values_array,  // fetch(index, &value) function pointer
    arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__assign_function__Array__actuator_values_array,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__Array_message_members = {
  "arlo_interfaces__msg",  // message namespace
  "Array",  // message name
  2,  // number of fields
  sizeof(arlo_interfaces__msg__Array),
  arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__Array_message_member_array,  // message members
  arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__Array_init_function,  // function to initialize message memory (memory has to be allocated)
  arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__Array_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__Array_message_type_support_handle = {
  0,
  &arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__Array_message_members,
  get_message_typesupport_handle_function,
  &arlo_interfaces__msg__Array__get_type_hash,
  &arlo_interfaces__msg__Array__get_type_description,
  &arlo_interfaces__msg__Array__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arlo_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arlo_interfaces, msg, Array)() {
  if (!arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__Array_message_type_support_handle.typesupport_identifier) {
    arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__Array_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arlo_interfaces__msg__Array__rosidl_typesupport_introspection_c__Array_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
