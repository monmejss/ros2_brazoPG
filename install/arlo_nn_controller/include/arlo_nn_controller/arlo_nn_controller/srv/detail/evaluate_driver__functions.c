// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from arlo_nn_controller:srv/EvaluateDriver.idl
// generated code does not contain a copyright notice
#include "arlo_nn_controller/srv/detail/evaluate_driver__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
arlo_nn_controller__srv__EvaluateDriver_Request__init(arlo_nn_controller__srv__EvaluateDriver_Request * msg)
{
  if (!msg) {
    return false;
  }
  // maxtime
  // tree_index
  return true;
}

void
arlo_nn_controller__srv__EvaluateDriver_Request__fini(arlo_nn_controller__srv__EvaluateDriver_Request * msg)
{
  if (!msg) {
    return;
  }
  // maxtime
  // tree_index
}

bool
arlo_nn_controller__srv__EvaluateDriver_Request__are_equal(const arlo_nn_controller__srv__EvaluateDriver_Request * lhs, const arlo_nn_controller__srv__EvaluateDriver_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // maxtime
  if (lhs->maxtime != rhs->maxtime) {
    return false;
  }
  // tree_index
  if (lhs->tree_index != rhs->tree_index) {
    return false;
  }
  return true;
}

bool
arlo_nn_controller__srv__EvaluateDriver_Request__copy(
  const arlo_nn_controller__srv__EvaluateDriver_Request * input,
  arlo_nn_controller__srv__EvaluateDriver_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // maxtime
  output->maxtime = input->maxtime;
  // tree_index
  output->tree_index = input->tree_index;
  return true;
}

arlo_nn_controller__srv__EvaluateDriver_Request *
arlo_nn_controller__srv__EvaluateDriver_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arlo_nn_controller__srv__EvaluateDriver_Request * msg = (arlo_nn_controller__srv__EvaluateDriver_Request *)allocator.allocate(sizeof(arlo_nn_controller__srv__EvaluateDriver_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arlo_nn_controller__srv__EvaluateDriver_Request));
  bool success = arlo_nn_controller__srv__EvaluateDriver_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arlo_nn_controller__srv__EvaluateDriver_Request__destroy(arlo_nn_controller__srv__EvaluateDriver_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arlo_nn_controller__srv__EvaluateDriver_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arlo_nn_controller__srv__EvaluateDriver_Request__Sequence__init(arlo_nn_controller__srv__EvaluateDriver_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arlo_nn_controller__srv__EvaluateDriver_Request * data = NULL;

  if (size) {
    data = (arlo_nn_controller__srv__EvaluateDriver_Request *)allocator.zero_allocate(size, sizeof(arlo_nn_controller__srv__EvaluateDriver_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arlo_nn_controller__srv__EvaluateDriver_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arlo_nn_controller__srv__EvaluateDriver_Request__fini(&data[i - 1]);
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
arlo_nn_controller__srv__EvaluateDriver_Request__Sequence__fini(arlo_nn_controller__srv__EvaluateDriver_Request__Sequence * array)
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
      arlo_nn_controller__srv__EvaluateDriver_Request__fini(&array->data[i]);
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

arlo_nn_controller__srv__EvaluateDriver_Request__Sequence *
arlo_nn_controller__srv__EvaluateDriver_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arlo_nn_controller__srv__EvaluateDriver_Request__Sequence * array = (arlo_nn_controller__srv__EvaluateDriver_Request__Sequence *)allocator.allocate(sizeof(arlo_nn_controller__srv__EvaluateDriver_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arlo_nn_controller__srv__EvaluateDriver_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arlo_nn_controller__srv__EvaluateDriver_Request__Sequence__destroy(arlo_nn_controller__srv__EvaluateDriver_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arlo_nn_controller__srv__EvaluateDriver_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arlo_nn_controller__srv__EvaluateDriver_Request__Sequence__are_equal(const arlo_nn_controller__srv__EvaluateDriver_Request__Sequence * lhs, const arlo_nn_controller__srv__EvaluateDriver_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arlo_nn_controller__srv__EvaluateDriver_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arlo_nn_controller__srv__EvaluateDriver_Request__Sequence__copy(
  const arlo_nn_controller__srv__EvaluateDriver_Request__Sequence * input,
  arlo_nn_controller__srv__EvaluateDriver_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arlo_nn_controller__srv__EvaluateDriver_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arlo_nn_controller__srv__EvaluateDriver_Request * data =
      (arlo_nn_controller__srv__EvaluateDriver_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arlo_nn_controller__srv__EvaluateDriver_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arlo_nn_controller__srv__EvaluateDriver_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arlo_nn_controller__srv__EvaluateDriver_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
arlo_nn_controller__srv__EvaluateDriver_Response__init(arlo_nn_controller__srv__EvaluateDriver_Response * msg)
{
  if (!msg) {
    return false;
  }
  // time
  // dist2go
  // average_distance
  // box_distance
  // damage
  // energy
  return true;
}

void
arlo_nn_controller__srv__EvaluateDriver_Response__fini(arlo_nn_controller__srv__EvaluateDriver_Response * msg)
{
  if (!msg) {
    return;
  }
  // time
  // dist2go
  // average_distance
  // box_distance
  // damage
  // energy
}

bool
arlo_nn_controller__srv__EvaluateDriver_Response__are_equal(const arlo_nn_controller__srv__EvaluateDriver_Response * lhs, const arlo_nn_controller__srv__EvaluateDriver_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  // dist2go
  if (lhs->dist2go != rhs->dist2go) {
    return false;
  }
  // average_distance
  if (lhs->average_distance != rhs->average_distance) {
    return false;
  }
  // box_distance
  if (lhs->box_distance != rhs->box_distance) {
    return false;
  }
  // damage
  if (lhs->damage != rhs->damage) {
    return false;
  }
  // energy
  if (lhs->energy != rhs->energy) {
    return false;
  }
  return true;
}

bool
arlo_nn_controller__srv__EvaluateDriver_Response__copy(
  const arlo_nn_controller__srv__EvaluateDriver_Response * input,
  arlo_nn_controller__srv__EvaluateDriver_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // time
  output->time = input->time;
  // dist2go
  output->dist2go = input->dist2go;
  // average_distance
  output->average_distance = input->average_distance;
  // box_distance
  output->box_distance = input->box_distance;
  // damage
  output->damage = input->damage;
  // energy
  output->energy = input->energy;
  return true;
}

arlo_nn_controller__srv__EvaluateDriver_Response *
arlo_nn_controller__srv__EvaluateDriver_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arlo_nn_controller__srv__EvaluateDriver_Response * msg = (arlo_nn_controller__srv__EvaluateDriver_Response *)allocator.allocate(sizeof(arlo_nn_controller__srv__EvaluateDriver_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arlo_nn_controller__srv__EvaluateDriver_Response));
  bool success = arlo_nn_controller__srv__EvaluateDriver_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arlo_nn_controller__srv__EvaluateDriver_Response__destroy(arlo_nn_controller__srv__EvaluateDriver_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arlo_nn_controller__srv__EvaluateDriver_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arlo_nn_controller__srv__EvaluateDriver_Response__Sequence__init(arlo_nn_controller__srv__EvaluateDriver_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arlo_nn_controller__srv__EvaluateDriver_Response * data = NULL;

  if (size) {
    data = (arlo_nn_controller__srv__EvaluateDriver_Response *)allocator.zero_allocate(size, sizeof(arlo_nn_controller__srv__EvaluateDriver_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arlo_nn_controller__srv__EvaluateDriver_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arlo_nn_controller__srv__EvaluateDriver_Response__fini(&data[i - 1]);
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
arlo_nn_controller__srv__EvaluateDriver_Response__Sequence__fini(arlo_nn_controller__srv__EvaluateDriver_Response__Sequence * array)
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
      arlo_nn_controller__srv__EvaluateDriver_Response__fini(&array->data[i]);
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

arlo_nn_controller__srv__EvaluateDriver_Response__Sequence *
arlo_nn_controller__srv__EvaluateDriver_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arlo_nn_controller__srv__EvaluateDriver_Response__Sequence * array = (arlo_nn_controller__srv__EvaluateDriver_Response__Sequence *)allocator.allocate(sizeof(arlo_nn_controller__srv__EvaluateDriver_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arlo_nn_controller__srv__EvaluateDriver_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arlo_nn_controller__srv__EvaluateDriver_Response__Sequence__destroy(arlo_nn_controller__srv__EvaluateDriver_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arlo_nn_controller__srv__EvaluateDriver_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arlo_nn_controller__srv__EvaluateDriver_Response__Sequence__are_equal(const arlo_nn_controller__srv__EvaluateDriver_Response__Sequence * lhs, const arlo_nn_controller__srv__EvaluateDriver_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arlo_nn_controller__srv__EvaluateDriver_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arlo_nn_controller__srv__EvaluateDriver_Response__Sequence__copy(
  const arlo_nn_controller__srv__EvaluateDriver_Response__Sequence * input,
  arlo_nn_controller__srv__EvaluateDriver_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arlo_nn_controller__srv__EvaluateDriver_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arlo_nn_controller__srv__EvaluateDriver_Response * data =
      (arlo_nn_controller__srv__EvaluateDriver_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arlo_nn_controller__srv__EvaluateDriver_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arlo_nn_controller__srv__EvaluateDriver_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arlo_nn_controller__srv__EvaluateDriver_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "arlo_nn_controller/srv/detail/evaluate_driver__functions.h"

bool
arlo_nn_controller__srv__EvaluateDriver_Event__init(arlo_nn_controller__srv__EvaluateDriver_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    arlo_nn_controller__srv__EvaluateDriver_Event__fini(msg);
    return false;
  }
  // request
  if (!arlo_nn_controller__srv__EvaluateDriver_Request__Sequence__init(&msg->request, 0)) {
    arlo_nn_controller__srv__EvaluateDriver_Event__fini(msg);
    return false;
  }
  // response
  if (!arlo_nn_controller__srv__EvaluateDriver_Response__Sequence__init(&msg->response, 0)) {
    arlo_nn_controller__srv__EvaluateDriver_Event__fini(msg);
    return false;
  }
  return true;
}

void
arlo_nn_controller__srv__EvaluateDriver_Event__fini(arlo_nn_controller__srv__EvaluateDriver_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  arlo_nn_controller__srv__EvaluateDriver_Request__Sequence__fini(&msg->request);
  // response
  arlo_nn_controller__srv__EvaluateDriver_Response__Sequence__fini(&msg->response);
}

bool
arlo_nn_controller__srv__EvaluateDriver_Event__are_equal(const arlo_nn_controller__srv__EvaluateDriver_Event * lhs, const arlo_nn_controller__srv__EvaluateDriver_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!arlo_nn_controller__srv__EvaluateDriver_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!arlo_nn_controller__srv__EvaluateDriver_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
arlo_nn_controller__srv__EvaluateDriver_Event__copy(
  const arlo_nn_controller__srv__EvaluateDriver_Event * input,
  arlo_nn_controller__srv__EvaluateDriver_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!arlo_nn_controller__srv__EvaluateDriver_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!arlo_nn_controller__srv__EvaluateDriver_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

arlo_nn_controller__srv__EvaluateDriver_Event *
arlo_nn_controller__srv__EvaluateDriver_Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arlo_nn_controller__srv__EvaluateDriver_Event * msg = (arlo_nn_controller__srv__EvaluateDriver_Event *)allocator.allocate(sizeof(arlo_nn_controller__srv__EvaluateDriver_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arlo_nn_controller__srv__EvaluateDriver_Event));
  bool success = arlo_nn_controller__srv__EvaluateDriver_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arlo_nn_controller__srv__EvaluateDriver_Event__destroy(arlo_nn_controller__srv__EvaluateDriver_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arlo_nn_controller__srv__EvaluateDriver_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arlo_nn_controller__srv__EvaluateDriver_Event__Sequence__init(arlo_nn_controller__srv__EvaluateDriver_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arlo_nn_controller__srv__EvaluateDriver_Event * data = NULL;

  if (size) {
    data = (arlo_nn_controller__srv__EvaluateDriver_Event *)allocator.zero_allocate(size, sizeof(arlo_nn_controller__srv__EvaluateDriver_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arlo_nn_controller__srv__EvaluateDriver_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arlo_nn_controller__srv__EvaluateDriver_Event__fini(&data[i - 1]);
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
arlo_nn_controller__srv__EvaluateDriver_Event__Sequence__fini(arlo_nn_controller__srv__EvaluateDriver_Event__Sequence * array)
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
      arlo_nn_controller__srv__EvaluateDriver_Event__fini(&array->data[i]);
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

arlo_nn_controller__srv__EvaluateDriver_Event__Sequence *
arlo_nn_controller__srv__EvaluateDriver_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arlo_nn_controller__srv__EvaluateDriver_Event__Sequence * array = (arlo_nn_controller__srv__EvaluateDriver_Event__Sequence *)allocator.allocate(sizeof(arlo_nn_controller__srv__EvaluateDriver_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arlo_nn_controller__srv__EvaluateDriver_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arlo_nn_controller__srv__EvaluateDriver_Event__Sequence__destroy(arlo_nn_controller__srv__EvaluateDriver_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arlo_nn_controller__srv__EvaluateDriver_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arlo_nn_controller__srv__EvaluateDriver_Event__Sequence__are_equal(const arlo_nn_controller__srv__EvaluateDriver_Event__Sequence * lhs, const arlo_nn_controller__srv__EvaluateDriver_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arlo_nn_controller__srv__EvaluateDriver_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arlo_nn_controller__srv__EvaluateDriver_Event__Sequence__copy(
  const arlo_nn_controller__srv__EvaluateDriver_Event__Sequence * input,
  arlo_nn_controller__srv__EvaluateDriver_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arlo_nn_controller__srv__EvaluateDriver_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arlo_nn_controller__srv__EvaluateDriver_Event * data =
      (arlo_nn_controller__srv__EvaluateDriver_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arlo_nn_controller__srv__EvaluateDriver_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arlo_nn_controller__srv__EvaluateDriver_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arlo_nn_controller__srv__EvaluateDriver_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
