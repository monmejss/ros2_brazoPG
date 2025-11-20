// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from arlo_interfaces:msg/Array.idl
// generated code does not contain a copyright notice
#include "arlo_interfaces/msg/detail/array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
arlo_interfaces__msg__Array__init(arlo_interfaces__msg__Array * msg)
{
  if (!msg) {
    return false;
  }
  // sensor_values_array
  // actuator_values_array
  return true;
}

void
arlo_interfaces__msg__Array__fini(arlo_interfaces__msg__Array * msg)
{
  if (!msg) {
    return;
  }
  // sensor_values_array
  // actuator_values_array
}

bool
arlo_interfaces__msg__Array__are_equal(const arlo_interfaces__msg__Array * lhs, const arlo_interfaces__msg__Array * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sensor_values_array
  for (size_t i = 0; i < 32; ++i) {
    if (lhs->sensor_values_array[i] != rhs->sensor_values_array[i]) {
      return false;
    }
  }
  // actuator_values_array
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->actuator_values_array[i] != rhs->actuator_values_array[i]) {
      return false;
    }
  }
  return true;
}

bool
arlo_interfaces__msg__Array__copy(
  const arlo_interfaces__msg__Array * input,
  arlo_interfaces__msg__Array * output)
{
  if (!input || !output) {
    return false;
  }
  // sensor_values_array
  for (size_t i = 0; i < 32; ++i) {
    output->sensor_values_array[i] = input->sensor_values_array[i];
  }
  // actuator_values_array
  for (size_t i = 0; i < 2; ++i) {
    output->actuator_values_array[i] = input->actuator_values_array[i];
  }
  return true;
}

arlo_interfaces__msg__Array *
arlo_interfaces__msg__Array__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arlo_interfaces__msg__Array * msg = (arlo_interfaces__msg__Array *)allocator.allocate(sizeof(arlo_interfaces__msg__Array), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arlo_interfaces__msg__Array));
  bool success = arlo_interfaces__msg__Array__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arlo_interfaces__msg__Array__destroy(arlo_interfaces__msg__Array * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arlo_interfaces__msg__Array__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arlo_interfaces__msg__Array__Sequence__init(arlo_interfaces__msg__Array__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arlo_interfaces__msg__Array * data = NULL;

  if (size) {
    data = (arlo_interfaces__msg__Array *)allocator.zero_allocate(size, sizeof(arlo_interfaces__msg__Array), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arlo_interfaces__msg__Array__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arlo_interfaces__msg__Array__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
arlo_interfaces__msg__Array__Sequence__fini(arlo_interfaces__msg__Array__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      arlo_interfaces__msg__Array__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

arlo_interfaces__msg__Array__Sequence *
arlo_interfaces__msg__Array__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arlo_interfaces__msg__Array__Sequence * array = (arlo_interfaces__msg__Array__Sequence *)allocator.allocate(sizeof(arlo_interfaces__msg__Array__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arlo_interfaces__msg__Array__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arlo_interfaces__msg__Array__Sequence__destroy(arlo_interfaces__msg__Array__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arlo_interfaces__msg__Array__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arlo_interfaces__msg__Array__Sequence__are_equal(const arlo_interfaces__msg__Array__Sequence * lhs, const arlo_interfaces__msg__Array__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arlo_interfaces__msg__Array__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arlo_interfaces__msg__Array__Sequence__copy(
  const arlo_interfaces__msg__Array__Sequence * input,
  arlo_interfaces__msg__Array__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arlo_interfaces__msg__Array);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arlo_interfaces__msg__Array * data =
      (arlo_interfaces__msg__Array *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arlo_interfaces__msg__Array__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arlo_interfaces__msg__Array__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arlo_interfaces__msg__Array__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
