// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from arlo_nn_controller:msg/Num.idl
// generated code does not contain a copyright notice

#include "arlo_nn_controller/msg/detail/num__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_arlo_nn_controller
const rosidl_type_hash_t *
arlo_nn_controller__msg__Num__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x33, 0x03, 0x7a, 0x27, 0x39, 0x04, 0x0a, 0xa1,
      0xff, 0x15, 0x14, 0x1c, 0x6d, 0xc2, 0x44, 0x6c,
      0xe6, 0xae, 0xdf, 0x74, 0x1f, 0x75, 0x26, 0x66,
      0x59, 0x7e, 0x0e, 0x1f, 0x73, 0xe0, 0x3b, 0x7e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char arlo_nn_controller__msg__Num__TYPE_NAME[] = "arlo_nn_controller/msg/Num";

// Define type names, field names, and default values
static char arlo_nn_controller__msg__Num__FIELD_NAME__num[] = "num";

static rosidl_runtime_c__type_description__Field arlo_nn_controller__msg__Num__FIELDS[] = {
  {
    {arlo_nn_controller__msg__Num__FIELD_NAME__num, 3, 3},
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
arlo_nn_controller__msg__Num__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arlo_nn_controller__msg__Num__TYPE_NAME, 26, 26},
      {arlo_nn_controller__msg__Num__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 num";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
arlo_nn_controller__msg__Num__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arlo_nn_controller__msg__Num__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 10, 10},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arlo_nn_controller__msg__Num__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arlo_nn_controller__msg__Num__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
