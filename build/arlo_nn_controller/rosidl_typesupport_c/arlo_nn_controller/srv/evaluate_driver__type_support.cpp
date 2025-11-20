// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from arlo_nn_controller:srv/EvaluateDriver.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "arlo_nn_controller/srv/detail/evaluate_driver__struct.h"
#include "arlo_nn_controller/srv/detail/evaluate_driver__type_support.h"
#include "arlo_nn_controller/srv/detail/evaluate_driver__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace arlo_nn_controller
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _EvaluateDriver_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _EvaluateDriver_Request_type_support_ids_t;

static const _EvaluateDriver_Request_type_support_ids_t _EvaluateDriver_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _EvaluateDriver_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _EvaluateDriver_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _EvaluateDriver_Request_type_support_symbol_names_t _EvaluateDriver_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arlo_nn_controller, srv, EvaluateDriver_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arlo_nn_controller, srv, EvaluateDriver_Request)),
  }
};

typedef struct _EvaluateDriver_Request_type_support_data_t
{
  void * data[2];
} _EvaluateDriver_Request_type_support_data_t;

static _EvaluateDriver_Request_type_support_data_t _EvaluateDriver_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _EvaluateDriver_Request_message_typesupport_map = {
  2,
  "arlo_nn_controller",
  &_EvaluateDriver_Request_message_typesupport_ids.typesupport_identifier[0],
  &_EvaluateDriver_Request_message_typesupport_symbol_names.symbol_name[0],
  &_EvaluateDriver_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t EvaluateDriver_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_EvaluateDriver_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &arlo_nn_controller__srv__EvaluateDriver_Request__get_type_hash,
  &arlo_nn_controller__srv__EvaluateDriver_Request__get_type_description,
  &arlo_nn_controller__srv__EvaluateDriver_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace arlo_nn_controller

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, arlo_nn_controller, srv, EvaluateDriver_Request)() {
  return &::arlo_nn_controller::srv::rosidl_typesupport_c::EvaluateDriver_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "arlo_nn_controller/srv/detail/evaluate_driver__struct.h"
// already included above
// #include "arlo_nn_controller/srv/detail/evaluate_driver__type_support.h"
// already included above
// #include "arlo_nn_controller/srv/detail/evaluate_driver__functions.h"
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

namespace arlo_nn_controller
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _EvaluateDriver_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _EvaluateDriver_Response_type_support_ids_t;

static const _EvaluateDriver_Response_type_support_ids_t _EvaluateDriver_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _EvaluateDriver_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _EvaluateDriver_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _EvaluateDriver_Response_type_support_symbol_names_t _EvaluateDriver_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arlo_nn_controller, srv, EvaluateDriver_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arlo_nn_controller, srv, EvaluateDriver_Response)),
  }
};

typedef struct _EvaluateDriver_Response_type_support_data_t
{
  void * data[2];
} _EvaluateDriver_Response_type_support_data_t;

static _EvaluateDriver_Response_type_support_data_t _EvaluateDriver_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _EvaluateDriver_Response_message_typesupport_map = {
  2,
  "arlo_nn_controller",
  &_EvaluateDriver_Response_message_typesupport_ids.typesupport_identifier[0],
  &_EvaluateDriver_Response_message_typesupport_symbol_names.symbol_name[0],
  &_EvaluateDriver_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t EvaluateDriver_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_EvaluateDriver_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &arlo_nn_controller__srv__EvaluateDriver_Response__get_type_hash,
  &arlo_nn_controller__srv__EvaluateDriver_Response__get_type_description,
  &arlo_nn_controller__srv__EvaluateDriver_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace arlo_nn_controller

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, arlo_nn_controller, srv, EvaluateDriver_Response)() {
  return &::arlo_nn_controller::srv::rosidl_typesupport_c::EvaluateDriver_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "arlo_nn_controller/srv/detail/evaluate_driver__struct.h"
// already included above
// #include "arlo_nn_controller/srv/detail/evaluate_driver__type_support.h"
// already included above
// #include "arlo_nn_controller/srv/detail/evaluate_driver__functions.h"
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

namespace arlo_nn_controller
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _EvaluateDriver_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _EvaluateDriver_Event_type_support_ids_t;

static const _EvaluateDriver_Event_type_support_ids_t _EvaluateDriver_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _EvaluateDriver_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _EvaluateDriver_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _EvaluateDriver_Event_type_support_symbol_names_t _EvaluateDriver_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arlo_nn_controller, srv, EvaluateDriver_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arlo_nn_controller, srv, EvaluateDriver_Event)),
  }
};

typedef struct _EvaluateDriver_Event_type_support_data_t
{
  void * data[2];
} _EvaluateDriver_Event_type_support_data_t;

static _EvaluateDriver_Event_type_support_data_t _EvaluateDriver_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _EvaluateDriver_Event_message_typesupport_map = {
  2,
  "arlo_nn_controller",
  &_EvaluateDriver_Event_message_typesupport_ids.typesupport_identifier[0],
  &_EvaluateDriver_Event_message_typesupport_symbol_names.symbol_name[0],
  &_EvaluateDriver_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t EvaluateDriver_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_EvaluateDriver_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &arlo_nn_controller__srv__EvaluateDriver_Event__get_type_hash,
  &arlo_nn_controller__srv__EvaluateDriver_Event__get_type_description,
  &arlo_nn_controller__srv__EvaluateDriver_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace arlo_nn_controller

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, arlo_nn_controller, srv, EvaluateDriver_Event)() {
  return &::arlo_nn_controller::srv::rosidl_typesupport_c::EvaluateDriver_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "arlo_nn_controller/srv/detail/evaluate_driver__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace arlo_nn_controller
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _EvaluateDriver_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _EvaluateDriver_type_support_ids_t;

static const _EvaluateDriver_type_support_ids_t _EvaluateDriver_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _EvaluateDriver_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _EvaluateDriver_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _EvaluateDriver_type_support_symbol_names_t _EvaluateDriver_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arlo_nn_controller, srv, EvaluateDriver)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arlo_nn_controller, srv, EvaluateDriver)),
  }
};

typedef struct _EvaluateDriver_type_support_data_t
{
  void * data[2];
} _EvaluateDriver_type_support_data_t;

static _EvaluateDriver_type_support_data_t _EvaluateDriver_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _EvaluateDriver_service_typesupport_map = {
  2,
  "arlo_nn_controller",
  &_EvaluateDriver_service_typesupport_ids.typesupport_identifier[0],
  &_EvaluateDriver_service_typesupport_symbol_names.symbol_name[0],
  &_EvaluateDriver_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t EvaluateDriver_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_EvaluateDriver_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &EvaluateDriver_Request_message_type_support_handle,
  &EvaluateDriver_Response_message_type_support_handle,
  &EvaluateDriver_Event_message_type_support_handle,
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

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace arlo_nn_controller

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, arlo_nn_controller, srv, EvaluateDriver)() {
  return &::arlo_nn_controller::srv::rosidl_typesupport_c::EvaluateDriver_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
