// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from arlo_nn_controller:srv/EvaluateDriver.idl
// generated code does not contain a copyright notice

#include "arlo_nn_controller/srv/detail/evaluate_driver__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_arlo_nn_controller
const rosidl_type_hash_t *
arlo_nn_controller__srv__EvaluateDriver__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa3, 0x4f, 0x64, 0x31, 0x33, 0x6b, 0x1b, 0x38,
      0xe3, 0x42, 0x8d, 0xf8, 0x05, 0x35, 0x3d, 0x18,
      0x5a, 0x04, 0x59, 0x80, 0xbb, 0x8d, 0xec, 0x5d,
      0x70, 0x02, 0x85, 0x43, 0xf4, 0x80, 0xe2, 0x39,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_arlo_nn_controller
const rosidl_type_hash_t *
arlo_nn_controller__srv__EvaluateDriver_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x90, 0x92, 0x7b, 0x97, 0x8f, 0xf9, 0x08, 0xb7,
      0x44, 0xc5, 0xbf, 0xc5, 0xa5, 0x0e, 0xa7, 0xa3,
      0x0b, 0xd1, 0xc1, 0x70, 0x00, 0xa4, 0x97, 0xd6,
      0x66, 0x4f, 0xf1, 0xcd, 0x3a, 0x40, 0xde, 0xbd,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_arlo_nn_controller
const rosidl_type_hash_t *
arlo_nn_controller__srv__EvaluateDriver_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x20, 0x20, 0x43, 0xad, 0x8d, 0xe1, 0x7c, 0x27,
      0xa8, 0x79, 0x2f, 0x83, 0xe4, 0x20, 0x48, 0xa0,
      0x6b, 0x95, 0x6a, 0xa1, 0x75, 0x70, 0xb4, 0xdc,
      0xe1, 0x68, 0x9d, 0x15, 0x2b, 0x75, 0x73, 0xd5,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_arlo_nn_controller
const rosidl_type_hash_t *
arlo_nn_controller__srv__EvaluateDriver_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x55, 0x4a, 0xda, 0x93, 0xd0, 0x31, 0x11, 0x36,
      0x79, 0x73, 0xf5, 0xde, 0x9a, 0x2e, 0x91, 0x56,
      0x32, 0xd6, 0xee, 0xee, 0x48, 0x81, 0x57, 0x8b,
      0x88, 0x6b, 0x9e, 0x88, 0x91, 0x32, 0xff, 0x3e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char arlo_nn_controller__srv__EvaluateDriver__TYPE_NAME[] = "arlo_nn_controller/srv/EvaluateDriver";
static char arlo_nn_controller__srv__EvaluateDriver_Event__TYPE_NAME[] = "arlo_nn_controller/srv/EvaluateDriver_Event";
static char arlo_nn_controller__srv__EvaluateDriver_Request__TYPE_NAME[] = "arlo_nn_controller/srv/EvaluateDriver_Request";
static char arlo_nn_controller__srv__EvaluateDriver_Response__TYPE_NAME[] = "arlo_nn_controller/srv/EvaluateDriver_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char arlo_nn_controller__srv__EvaluateDriver__FIELD_NAME__request_message[] = "request_message";
static char arlo_nn_controller__srv__EvaluateDriver__FIELD_NAME__response_message[] = "response_message";
static char arlo_nn_controller__srv__EvaluateDriver__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field arlo_nn_controller__srv__EvaluateDriver__FIELDS[] = {
  {
    {arlo_nn_controller__srv__EvaluateDriver__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {arlo_nn_controller__srv__EvaluateDriver_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {arlo_nn_controller__srv__EvaluateDriver__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {arlo_nn_controller__srv__EvaluateDriver_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {arlo_nn_controller__srv__EvaluateDriver__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {arlo_nn_controller__srv__EvaluateDriver_Event__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription arlo_nn_controller__srv__EvaluateDriver__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {arlo_nn_controller__srv__EvaluateDriver_Event__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {arlo_nn_controller__srv__EvaluateDriver_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {arlo_nn_controller__srv__EvaluateDriver_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
arlo_nn_controller__srv__EvaluateDriver__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arlo_nn_controller__srv__EvaluateDriver__TYPE_NAME, 37, 37},
      {arlo_nn_controller__srv__EvaluateDriver__FIELDS, 3, 3},
    },
    {arlo_nn_controller__srv__EvaluateDriver__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = arlo_nn_controller__srv__EvaluateDriver_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = arlo_nn_controller__srv__EvaluateDriver_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = arlo_nn_controller__srv__EvaluateDriver_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char arlo_nn_controller__srv__EvaluateDriver_Request__FIELD_NAME__maxtime[] = "maxtime";
static char arlo_nn_controller__srv__EvaluateDriver_Request__FIELD_NAME__tree_index[] = "tree_index";

static rosidl_runtime_c__type_description__Field arlo_nn_controller__srv__EvaluateDriver_Request__FIELDS[] = {
  {
    {arlo_nn_controller__srv__EvaluateDriver_Request__FIELD_NAME__maxtime, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arlo_nn_controller__srv__EvaluateDriver_Request__FIELD_NAME__tree_index, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
arlo_nn_controller__srv__EvaluateDriver_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arlo_nn_controller__srv__EvaluateDriver_Request__TYPE_NAME, 45, 45},
      {arlo_nn_controller__srv__EvaluateDriver_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char arlo_nn_controller__srv__EvaluateDriver_Response__FIELD_NAME__time[] = "time";
static char arlo_nn_controller__srv__EvaluateDriver_Response__FIELD_NAME__dist2go[] = "dist2go";
static char arlo_nn_controller__srv__EvaluateDriver_Response__FIELD_NAME__average_distance[] = "average_distance";
static char arlo_nn_controller__srv__EvaluateDriver_Response__FIELD_NAME__box_distance[] = "box_distance";
static char arlo_nn_controller__srv__EvaluateDriver_Response__FIELD_NAME__damage[] = "damage";
static char arlo_nn_controller__srv__EvaluateDriver_Response__FIELD_NAME__energy[] = "energy";

static rosidl_runtime_c__type_description__Field arlo_nn_controller__srv__EvaluateDriver_Response__FIELDS[] = {
  {
    {arlo_nn_controller__srv__EvaluateDriver_Response__FIELD_NAME__time, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arlo_nn_controller__srv__EvaluateDriver_Response__FIELD_NAME__dist2go, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arlo_nn_controller__srv__EvaluateDriver_Response__FIELD_NAME__average_distance, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arlo_nn_controller__srv__EvaluateDriver_Response__FIELD_NAME__box_distance, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arlo_nn_controller__srv__EvaluateDriver_Response__FIELD_NAME__damage, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arlo_nn_controller__srv__EvaluateDriver_Response__FIELD_NAME__energy, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
arlo_nn_controller__srv__EvaluateDriver_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arlo_nn_controller__srv__EvaluateDriver_Response__TYPE_NAME, 46, 46},
      {arlo_nn_controller__srv__EvaluateDriver_Response__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char arlo_nn_controller__srv__EvaluateDriver_Event__FIELD_NAME__info[] = "info";
static char arlo_nn_controller__srv__EvaluateDriver_Event__FIELD_NAME__request[] = "request";
static char arlo_nn_controller__srv__EvaluateDriver_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field arlo_nn_controller__srv__EvaluateDriver_Event__FIELDS[] = {
  {
    {arlo_nn_controller__srv__EvaluateDriver_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {arlo_nn_controller__srv__EvaluateDriver_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {arlo_nn_controller__srv__EvaluateDriver_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {arlo_nn_controller__srv__EvaluateDriver_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {arlo_nn_controller__srv__EvaluateDriver_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription arlo_nn_controller__srv__EvaluateDriver_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {arlo_nn_controller__srv__EvaluateDriver_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {arlo_nn_controller__srv__EvaluateDriver_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
arlo_nn_controller__srv__EvaluateDriver_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arlo_nn_controller__srv__EvaluateDriver_Event__TYPE_NAME, 43, 43},
      {arlo_nn_controller__srv__EvaluateDriver_Event__FIELDS, 3, 3},
    },
    {arlo_nn_controller__srv__EvaluateDriver_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = arlo_nn_controller__srv__EvaluateDriver_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = arlo_nn_controller__srv__EvaluateDriver_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 maxtime\n"
  "int64 tree_index\n"
  "---\n"
  "float64 time\n"
  "float64 dist2go\n"
  "float64 average_distance\n"
  "float64 box_distance\n"
  "float64 damage\n"
  "float64 energy";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
arlo_nn_controller__srv__EvaluateDriver__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arlo_nn_controller__srv__EvaluateDriver__TYPE_NAME, 37, 37},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 139, 139},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
arlo_nn_controller__srv__EvaluateDriver_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arlo_nn_controller__srv__EvaluateDriver_Request__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
arlo_nn_controller__srv__EvaluateDriver_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arlo_nn_controller__srv__EvaluateDriver_Response__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
arlo_nn_controller__srv__EvaluateDriver_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arlo_nn_controller__srv__EvaluateDriver_Event__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arlo_nn_controller__srv__EvaluateDriver__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arlo_nn_controller__srv__EvaluateDriver__get_individual_type_description_source(NULL),
    sources[1] = *arlo_nn_controller__srv__EvaluateDriver_Event__get_individual_type_description_source(NULL);
    sources[2] = *arlo_nn_controller__srv__EvaluateDriver_Request__get_individual_type_description_source(NULL);
    sources[3] = *arlo_nn_controller__srv__EvaluateDriver_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arlo_nn_controller__srv__EvaluateDriver_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arlo_nn_controller__srv__EvaluateDriver_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arlo_nn_controller__srv__EvaluateDriver_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arlo_nn_controller__srv__EvaluateDriver_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arlo_nn_controller__srv__EvaluateDriver_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arlo_nn_controller__srv__EvaluateDriver_Event__get_individual_type_description_source(NULL),
    sources[1] = *arlo_nn_controller__srv__EvaluateDriver_Request__get_individual_type_description_source(NULL);
    sources[2] = *arlo_nn_controller__srv__EvaluateDriver_Response__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
