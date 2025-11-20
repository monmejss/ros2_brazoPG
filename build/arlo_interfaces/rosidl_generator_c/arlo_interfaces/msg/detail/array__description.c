// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from arlo_interfaces:msg/Array.idl
// generated code does not contain a copyright notice

#include "arlo_interfaces/msg/detail/array__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_arlo_interfaces
const rosidl_type_hash_t *
arlo_interfaces__msg__Array__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x26, 0xe4, 0xc8, 0xeb, 0x82, 0xc9, 0x66, 0x4c,
      0xa0, 0x77, 0x09, 0xee, 0x70, 0xe7, 0x9e, 0xbb,
      0xac, 0x8c, 0x89, 0x78, 0x3a, 0x04, 0xe1, 0xb8,
      0xe3, 0x40, 0x19, 0x80, 0x7c, 0x94, 0x36, 0xcb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char arlo_interfaces__msg__Array__TYPE_NAME[] = "arlo_interfaces/msg/Array";

// Define type names, field names, and default values
static char arlo_interfaces__msg__Array__FIELD_NAME__sensor_values_array[] = "sensor_values_array";
static char arlo_interfaces__msg__Array__FIELD_NAME__actuator_values_array[] = "actuator_values_array";

static rosidl_runtime_c__type_description__Field arlo_interfaces__msg__Array__FIELDS[] = {
  {
    {arlo_interfaces__msg__Array__FIELD_NAME__sensor_values_array, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      32,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arlo_interfaces__msg__Array__FIELD_NAME__actuator_values_array, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      2,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
arlo_interfaces__msg__Array__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arlo_interfaces__msg__Array__TYPE_NAME, 25, 25},
      {arlo_interfaces__msg__Array__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64[32] sensor_values_array\n"
  "float64[2]  actuator_values_array";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
arlo_interfaces__msg__Array__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arlo_interfaces__msg__Array__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 66, 66},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arlo_interfaces__msg__Array__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arlo_interfaces__msg__Array__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
