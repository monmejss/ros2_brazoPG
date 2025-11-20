// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arlo_interfaces:msg/Array.idl
// generated code does not contain a copyright notice

#ifndef ARLO_INTERFACES__MSG__DETAIL__ARRAY__STRUCT_H_
#define ARLO_INTERFACES__MSG__DETAIL__ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Array in the package arlo_interfaces.
typedef struct arlo_interfaces__msg__Array
{
  double sensor_values_array[32];
  double actuator_values_array[2];
} arlo_interfaces__msg__Array;

// Struct for a sequence of arlo_interfaces__msg__Array.
typedef struct arlo_interfaces__msg__Array__Sequence
{
  arlo_interfaces__msg__Array * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arlo_interfaces__msg__Array__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARLO_INTERFACES__MSG__DETAIL__ARRAY__STRUCT_H_
