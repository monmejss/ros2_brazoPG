// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arlo_nn_controller:srv/EvaluateDriver.idl
// generated code does not contain a copyright notice

#ifndef ARLO_NN_CONTROLLER__SRV__DETAIL__EVALUATE_DRIVER__STRUCT_H_
#define ARLO_NN_CONTROLLER__SRV__DETAIL__EVALUATE_DRIVER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/EvaluateDriver in the package arlo_nn_controller.
typedef struct arlo_nn_controller__srv__EvaluateDriver_Request
{
  int64_t maxtime;
  int64_t tree_index;
} arlo_nn_controller__srv__EvaluateDriver_Request;

// Struct for a sequence of arlo_nn_controller__srv__EvaluateDriver_Request.
typedef struct arlo_nn_controller__srv__EvaluateDriver_Request__Sequence
{
  arlo_nn_controller__srv__EvaluateDriver_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arlo_nn_controller__srv__EvaluateDriver_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/EvaluateDriver in the package arlo_nn_controller.
typedef struct arlo_nn_controller__srv__EvaluateDriver_Response
{
  double time;
  double dist2go;
  double average_distance;
  double box_distance;
  double damage;
  double energy;
} arlo_nn_controller__srv__EvaluateDriver_Response;

// Struct for a sequence of arlo_nn_controller__srv__EvaluateDriver_Response.
typedef struct arlo_nn_controller__srv__EvaluateDriver_Response__Sequence
{
  arlo_nn_controller__srv__EvaluateDriver_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arlo_nn_controller__srv__EvaluateDriver_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  arlo_nn_controller__srv__EvaluateDriver_Event__request__MAX_SIZE = 1
};
// response
enum
{
  arlo_nn_controller__srv__EvaluateDriver_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/EvaluateDriver in the package arlo_nn_controller.
typedef struct arlo_nn_controller__srv__EvaluateDriver_Event
{
  service_msgs__msg__ServiceEventInfo info;
  arlo_nn_controller__srv__EvaluateDriver_Request__Sequence request;
  arlo_nn_controller__srv__EvaluateDriver_Response__Sequence response;
} arlo_nn_controller__srv__EvaluateDriver_Event;

// Struct for a sequence of arlo_nn_controller__srv__EvaluateDriver_Event.
typedef struct arlo_nn_controller__srv__EvaluateDriver_Event__Sequence
{
  arlo_nn_controller__srv__EvaluateDriver_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arlo_nn_controller__srv__EvaluateDriver_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARLO_NN_CONTROLLER__SRV__DETAIL__EVALUATE_DRIVER__STRUCT_H_
