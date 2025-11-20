// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from arlo_interfaces:srv/ActuatorValuesService.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "arlo_interfaces/srv/detail/actuator_values_service__struct.h"
#include "arlo_interfaces/srv/detail/actuator_values_service__type_support.h"
#include "arlo_interfaces/srv/detail/actuator_values_service__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace arlo_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ActuatorValuesService_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ActuatorValuesService_Request_type_support_ids_t;

static const _ActuatorValuesService_Request_type_support_ids_t _ActuatorValuesService_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ActuatorValuesService_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ActuatorValuesService_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ActuatorValuesService_Request_type_support_symbol_names_t _ActuatorValuesService_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arlo_interfaces, srv, ActuatorValuesService_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arlo_interfaces, srv, ActuatorValuesService_Request)),
  }
};

typedef struct _ActuatorValuesService_Request_type_support_data_t
{
  void * data[2];
} _ActuatorValuesService_Request_type_support_data_t;

static _ActuatorValuesService_Request_type_support_data_t _ActuatorValuesService_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ActuatorValuesService_Request_message_typesupport_map = {
  2,
  "arlo_interfaces",
  &_ActuatorValuesService_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ActuatorValuesService_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ActuatorValuesService_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ActuatorValuesService_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ActuatorValuesService_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &arlo_interfaces__srv__ActuatorValuesService_Request__get_type_hash,
  &arlo_interfaces__srv__ActuatorValuesService_Request__get_type_description,
  &arlo_interfaces__srv__ActuatorValuesService_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace arlo_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, arlo_interfaces, srv, ActuatorValuesService_Request)() {
  return &::arlo_interfaces::srv::rosidl_typesupport_c::ActuatorValuesService_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "arlo_interfaces/srv/detail/actuator_values_service__struct.h"
// already included above
// #include "arlo_interfaces/srv/detail/actuator_values_service__type_support.h"
// already included above
// #include "arlo_interfaces/srv/detail/actuator_values_service__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace arlo_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ActuatorValuesService_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ActuatorValuesService_Response_type_support_ids_t;

static const _ActuatorValuesService_Response_type_support_ids_t _ActuatorValuesService_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ActuatorValuesService_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ActuatorValuesService_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ActuatorValuesService_Response_type_support_symbol_names_t _ActuatorValuesService_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arlo_interfaces, srv, ActuatorValuesService_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arlo_interfaces, srv, ActuatorValuesService_Response)),
  }
};

typedef struct _ActuatorValuesService_Response_type_support_data_t
{
  void * data[2];
} _ActuatorValuesService_Response_type_support_data_t;

static _ActuatorValuesService_Response_type_support_data_t _ActuatorValuesService_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ActuatorValuesService_Response_message_typesupport_map = {
  2,
  "arlo_interfaces",
  &_ActuatorValuesService_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ActuatorValuesService_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ActuatorValuesService_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ActuatorValuesService_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ActuatorValuesService_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &arlo_interfaces__srv__ActuatorValuesService_Response__get_type_hash,
  &arlo_interfaces__srv__ActuatorValuesService_Response__get_type_description,
  &arlo_interfaces__srv__ActuatorValuesService_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace arlo_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, arlo_interfaces, srv, ActuatorValuesService_Response)() {
  return &::arlo_interfaces::srv::rosidl_typesupport_c::ActuatorValuesService_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "arlo_interfaces/srv/detail/actuator_values_service__struct.h"
// already included above
// #include "arlo_interfaces/srv/detail/actuator_values_service__type_support.h"
// already included above
// #include "arlo_interfaces/srv/detail/actuator_values_service__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace arlo_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ActuatorValuesService_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ActuatorValuesService_Event_type_support_ids_t;

static const _ActuatorValuesService_Event_type_support_ids_t _ActuatorValuesService_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ActuatorValuesService_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ActuatorValuesService_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ActuatorValuesService_Event_type_support_symbol_names_t _ActuatorValuesService_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arlo_interfaces, srv, ActuatorValuesService_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arlo_interfaces, srv, ActuatorValuesService_Event)),
  }
};

typedef struct _ActuatorValuesService_Event_type_support_data_t
{
  void * data[2];
} _ActuatorValuesService_Event_type_support_data_t;

static _ActuatorValuesService_Event_type_support_data_t _ActuatorValuesService_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ActuatorValuesService_Event_message_typesupport_map = {
  2,
  "arlo_interfaces",
  &_ActuatorValuesService_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ActuatorValuesService_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ActuatorValuesService_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ActuatorValuesService_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ActuatorValuesService_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &arlo_interfaces__srv__ActuatorValuesService_Event__get_type_hash,
  &arlo_interfaces__srv__ActuatorValuesService_Event__get_type_description,
  &arlo_interfaces__srv__ActuatorValuesService_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace arlo_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, arlo_interfaces, srv, ActuatorValuesService_Event)() {
  return &::arlo_interfaces::srv::rosidl_typesupport_c::ActuatorValuesService_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "arlo_interfaces/srv/detail/actuator_values_service__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace arlo_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _ActuatorValuesService_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ActuatorValuesService_type_support_ids_t;

static const _ActuatorValuesService_type_support_ids_t _ActuatorValuesService_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ActuatorValuesService_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ActuatorValuesService_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ActuatorValuesService_type_support_symbol_names_t _ActuatorValuesService_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arlo_interfaces, srv, ActuatorValuesService)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arlo_interfaces, srv, ActuatorValuesService)),
  }
};

typedef struct _ActuatorValuesService_type_support_data_t
{
  void * data[2];
} _ActuatorValuesService_type_support_data_t;

static _ActuatorValuesService_type_support_data_t _ActuatorValuesService_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ActuatorValuesService_service_typesupport_map = {
  2,
  "arlo_interfaces",
  &_ActuatorValuesService_service_typesupport_ids.typesupport_identifier[0],
  &_ActuatorValuesService_service_typesupport_symbol_names.symbol_name[0],
  &_ActuatorValuesService_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ActuatorValuesService_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ActuatorValuesService_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ActuatorValuesService_Request_message_type_support_handle,
  &ActuatorValuesService_Response_message_type_support_handle,
  &ActuatorValuesService_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    arlo_interfaces,
    srv,
    ActuatorValuesService
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    arlo_interfaces,
    srv,
    ActuatorValuesService
  ),
  &arlo_interfaces__srv__ActuatorValuesService__get_type_hash,
  &arlo_interfaces__srv__ActuatorValuesService__get_type_description,
  &arlo_interfaces__srv__ActuatorValuesService__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace arlo_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, arlo_interfaces, srv, ActuatorValuesService)() {
  return &::arlo_interfaces::srv::rosidl_typesupport_c::ActuatorValuesService_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
