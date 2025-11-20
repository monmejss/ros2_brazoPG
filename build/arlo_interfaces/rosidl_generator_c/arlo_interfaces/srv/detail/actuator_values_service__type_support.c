// generated from rosidl_generator_c/resource/idl__type_support.c.em
// with input from arlo_interfaces:srv/ActuatorValuesService.idl
// generated code does not contain a copyright notice

#include <string.h>

#include "arlo_interfaces/srv/detail/actuator_values_service__type_support.h"
#include "rosidl_typesupport_interface/macros.h"
#include "arlo_interfaces/srv/detail/actuator_values_service__functions.h"
#include "arlo_interfaces/srv/detail/actuator_values_service__struct.h"

#ifdef __cplusplus
extern "C"
{
#endif


void *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  arlo_interfaces,
  srv,
  ActuatorValuesService
)(
  const rosidl_service_introspection_info_t * info,
  rcutils_allocator_t * allocator,
  const void * request_message,
  const void * response_message)
{
  if (!allocator || !info) {
    return NULL;
  }
  arlo_interfaces__srv__ActuatorValuesService_Event * event_msg = (arlo_interfaces__srv__ActuatorValuesService_Event *)(allocator->allocate(sizeof(arlo_interfaces__srv__ActuatorValuesService_Event), allocator->state));
  if (!arlo_interfaces__srv__ActuatorValuesService_Event__init(event_msg)) {
    allocator->deallocate(event_msg, allocator->state);
    return NULL;
  }

  event_msg->info.event_type = info->event_type;
  event_msg->info.sequence_number = info->sequence_number;
  event_msg->info.stamp.sec = info->stamp_sec;
  event_msg->info.stamp.nanosec = info->stamp_nanosec;
  memcpy(event_msg->info.client_gid, info->client_gid, 16);
  if (request_message) {
    arlo_interfaces__srv__ActuatorValuesService_Request__Sequence__init(
      &event_msg->request,
      1);
    if (!arlo_interfaces__srv__ActuatorValuesService_Request__copy((const arlo_interfaces__srv__ActuatorValuesService_Request *)(request_message), event_msg->request.data)) {
      allocator->deallocate(event_msg, allocator->state);
      return NULL;
    }
  }
  if (response_message) {
    arlo_interfaces__srv__ActuatorValuesService_Response__Sequence__init(
      &event_msg->response,
      1);
    if (!arlo_interfaces__srv__ActuatorValuesService_Response__copy((const arlo_interfaces__srv__ActuatorValuesService_Response *)(response_message), event_msg->response.data)) {
      allocator->deallocate(event_msg, allocator->state);
      return NULL;
    }
  }
  return event_msg;
}

// Forward declare the get type support functions for this type.
bool
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_c,
  arlo_interfaces,
  srv,
  ActuatorValuesService
)(
  void * event_msg,
  rcutils_allocator_t * allocator)
{
  if (!allocator) {
    return false;
  }
  if (NULL == event_msg) {
    return false;
  }
  arlo_interfaces__srv__ActuatorValuesService_Event * _event_msg = (arlo_interfaces__srv__ActuatorValuesService_Event *)(event_msg);

  arlo_interfaces__srv__ActuatorValuesService_Event__fini((arlo_interfaces__srv__ActuatorValuesService_Event *)(_event_msg));
  if (_event_msg->request.data) {
    allocator->deallocate(_event_msg->request.data, allocator->state);
  }
  if (_event_msg->response.data) {
    allocator->deallocate(_event_msg->response.data, allocator->state);
  }
  allocator->deallocate(_event_msg, allocator->state);
  return true;
}

#ifdef __cplusplus
}
#endif
