// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from arlo_interfaces:srv/EvaluateTree.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "arlo_interfaces/srv/detail/evaluate_tree__struct.h"
#include "arlo_interfaces/srv/detail/evaluate_tree__type_support.h"
#include "arlo_interfaces/srv/detail/evaluate_tree__functions.h"
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

typedef struct _EvaluateTree_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _EvaluateTree_Request_type_support_ids_t;

static const _EvaluateTree_Request_type_support_ids_t _EvaluateTree_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _EvaluateTree_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _EvaluateTree_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _EvaluateTree_Request_type_support_symbol_names_t _EvaluateTree_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arlo_interfaces, srv, EvaluateTree_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arlo_interfaces, srv, EvaluateTree_Request)),
  }
};

typedef struct _EvaluateTree_Request_type_support_data_t
{
  void * data[2];
} _EvaluateTree_Request_type_support_data_t;

static _EvaluateTree_Request_type_support_data_t _EvaluateTree_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _EvaluateTree_Request_message_typesupport_map = {
  2,
  "arlo_interfaces",
  &_EvaluateTree_Request_message_typesupport_ids.typesupport_identifier[0],
  &_EvaluateTree_Request_message_typesupport_symbol_names.symbol_name[0],
  &_EvaluateTree_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t EvaluateTree_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_EvaluateTree_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &arlo_interfaces__srv__EvaluateTree_Request__get_type_hash,
  &arlo_interfaces__srv__EvaluateTree_Request__get_type_description,
  &arlo_interfaces__srv__EvaluateTree_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace arlo_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, arlo_interfaces, srv, EvaluateTree_Request)() {
  return &::arlo_interfaces::srv::rosidl_typesupport_c::EvaluateTree_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "arlo_interfaces/srv/detail/evaluate_tree__struct.h"
// already included above
// #include "arlo_interfaces/srv/detail/evaluate_tree__type_support.h"
// already included above
// #include "arlo_interfaces/srv/detail/evaluate_tree__functions.h"
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

typedef struct _EvaluateTree_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _EvaluateTree_Response_type_support_ids_t;

static const _EvaluateTree_Response_type_support_ids_t _EvaluateTree_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _EvaluateTree_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _EvaluateTree_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _EvaluateTree_Response_type_support_symbol_names_t _EvaluateTree_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arlo_interfaces, srv, EvaluateTree_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arlo_interfaces, srv, EvaluateTree_Response)),
  }
};

typedef struct _EvaluateTree_Response_type_support_data_t
{
  void * data[2];
} _EvaluateTree_Response_type_support_data_t;

static _EvaluateTree_Response_type_support_data_t _EvaluateTree_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _EvaluateTree_Response_message_typesupport_map = {
  2,
  "arlo_interfaces",
  &_EvaluateTree_Response_message_typesupport_ids.typesupport_identifier[0],
  &_EvaluateTree_Response_message_typesupport_symbol_names.symbol_name[0],
  &_EvaluateTree_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t EvaluateTree_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_EvaluateTree_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &arlo_interfaces__srv__EvaluateTree_Response__get_type_hash,
  &arlo_interfaces__srv__EvaluateTree_Response__get_type_description,
  &arlo_interfaces__srv__EvaluateTree_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace arlo_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, arlo_interfaces, srv, EvaluateTree_Response)() {
  return &::arlo_interfaces::srv::rosidl_typesupport_c::EvaluateTree_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "arlo_interfaces/srv/detail/evaluate_tree__struct.h"
// already included above
// #include "arlo_interfaces/srv/detail/evaluate_tree__type_support.h"
// already included above
// #include "arlo_interfaces/srv/detail/evaluate_tree__functions.h"
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

typedef struct _EvaluateTree_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _EvaluateTree_Event_type_support_ids_t;

static const _EvaluateTree_Event_type_support_ids_t _EvaluateTree_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _EvaluateTree_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _EvaluateTree_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _EvaluateTree_Event_type_support_symbol_names_t _EvaluateTree_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arlo_interfaces, srv, EvaluateTree_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arlo_interfaces, srv, EvaluateTree_Event)),
  }
};

typedef struct _EvaluateTree_Event_type_support_data_t
{
  void * data[2];
} _EvaluateTree_Event_type_support_data_t;

static _EvaluateTree_Event_type_support_data_t _EvaluateTree_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _EvaluateTree_Event_message_typesupport_map = {
  2,
  "arlo_interfaces",
  &_EvaluateTree_Event_message_typesupport_ids.typesupport_identifier[0],
  &_EvaluateTree_Event_message_typesupport_symbol_names.symbol_name[0],
  &_EvaluateTree_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t EvaluateTree_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_EvaluateTree_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &arlo_interfaces__srv__EvaluateTree_Event__get_type_hash,
  &arlo_interfaces__srv__EvaluateTree_Event__get_type_description,
  &arlo_interfaces__srv__EvaluateTree_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace arlo_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, arlo_interfaces, srv, EvaluateTree_Event)() {
  return &::arlo_interfaces::srv::rosidl_typesupport_c::EvaluateTree_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "arlo_interfaces/srv/detail/evaluate_tree__type_support.h"
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
typedef struct _EvaluateTree_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _EvaluateTree_type_support_ids_t;

static const _EvaluateTree_type_support_ids_t _EvaluateTree_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _EvaluateTree_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _EvaluateTree_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _EvaluateTree_type_support_symbol_names_t _EvaluateTree_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arlo_interfaces, srv, EvaluateTree)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arlo_interfaces, srv, EvaluateTree)),
  }
};

typedef struct _EvaluateTree_type_support_data_t
{
  void * data[2];
} _EvaluateTree_type_support_data_t;

static _EvaluateTree_type_support_data_t _EvaluateTree_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _EvaluateTree_service_typesupport_map = {
  2,
  "arlo_interfaces",
  &_EvaluateTree_service_typesupport_ids.typesupport_identifier[0],
  &_EvaluateTree_service_typesupport_symbol_names.symbol_name[0],
  &_EvaluateTree_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t EvaluateTree_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_EvaluateTree_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &EvaluateTree_Request_message_type_support_handle,
  &EvaluateTree_Response_message_type_support_handle,
  &EvaluateTree_Event_message_type_support_handle,
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

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace arlo_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, arlo_interfaces, srv, EvaluateTree)() {
  return &::arlo_interfaces::srv::rosidl_typesupport_c::EvaluateTree_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
