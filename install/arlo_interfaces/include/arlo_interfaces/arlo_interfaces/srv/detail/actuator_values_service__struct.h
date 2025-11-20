// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arlo_interfaces:srv/ActuatorValuesService.idl
// generated code does not contain a copyright notice

#ifndef ARLO_INTERFACES__SRV__DETAIL__ACTUATOR_VALUES_SERVICE__STRUCT_H_
#define ARLO_INTERFACES__SRV__DETAIL__ACTUATOR_VALUES_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ActuatorValuesService in the package arlo_interfaces.
typedef struct arlo_interfaces__srv__ActuatorValuesService_Request
{
  double sensor_values[32];
  int64_t tree_index;
} arlo_interfaces__srv__ActuatorValuesService_Request;

// Struct for a sequence of arlo_interfaces__srv__ActuatorValuesService_Request.
typedef struct arlo_interfaces__srv__ActuatorValuesService_Request__Sequence
{
  arlo_interfaces__srv__ActuatorValuesService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arlo_interfaces__srv__ActuatorValuesService_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/ActuatorValuesService in the package arlo_interfaces.
typedef struct arlo_interfaces__srv__ActuatorValuesService_Response
{
  double actuator_values[2];
} arlo_interfaces__srv__ActuatorValuesService_Response;

// Struct for a sequence of arlo_interfaces__srv__ActuatorValuesService_Response.
typedef struct arlo_interfaces__srv__ActuatorValuesService_Response__Sequence
{
  arlo_interfaces__srv__ActuatorValuesService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arlo_interfaces__srv__ActuatorValuesService_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  arlo_interfaces__srv__ActuatorValuesService_Event__request__MAX_SIZE = 1
};
// response
enum
{
  arlo_interfaces__srv__ActuatorValuesService_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ActuatorValuesService in the package arlo_interfaces.
typedef struct arlo_interfaces__srv__ActuatorValuesService_Event
{
  service_msgs__msg__ServiceEventInfo info;
  arlo_interfaces__srv__ActuatorValuesService_Request__Sequence request;
  arlo_interfaces__srv__ActuatorValuesService_Response__Sequence response;
} arlo_interfaces__srv__ActuatorValuesService_Event;

// Struct for a sequence of arlo_interfaces__srv__ActuatorValuesService_Event.
typedef struct arlo_interfaces__srv__ActuatorValuesService_Event__Sequence
{
  arlo_interfaces__srv__ActuatorValuesService_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arlo_interfaces__srv__ActuatorValuesService_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARLO_INTERFACES__SRV__DETAIL__ACTUATOR_VALUES_SERVICE__STRUCT_H_
