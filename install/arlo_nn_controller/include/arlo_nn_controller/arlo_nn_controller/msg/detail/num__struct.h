// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arlo_nn_controller:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef ARLO_NN_CONTROLLER__MSG__DETAIL__NUM__STRUCT_H_
#define ARLO_NN_CONTROLLER__MSG__DETAIL__NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Num in the package arlo_nn_controller.
typedef struct arlo_nn_controller__msg__Num
{
  int64_t num;
} arlo_nn_controller__msg__Num;

// Struct for a sequence of arlo_nn_controller__msg__Num.
typedef struct arlo_nn_controller__msg__Num__Sequence
{
  arlo_nn_controller__msg__Num * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arlo_nn_controller__msg__Num__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARLO_NN_CONTROLLER__MSG__DETAIL__NUM__STRUCT_H_
