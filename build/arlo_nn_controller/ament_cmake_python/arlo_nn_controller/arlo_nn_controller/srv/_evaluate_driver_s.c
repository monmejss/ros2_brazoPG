// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from arlo_nn_controller:srv/EvaluateDriver.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "arlo_nn_controller/srv/detail/evaluate_driver__struct.h"
#include "arlo_nn_controller/srv/detail/evaluate_driver__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool arlo_nn_controller__srv__evaluate_driver__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("arlo_nn_controller.srv._evaluate_driver.EvaluateDriver_Request", full_classname_dest, 62) == 0);
  }
  arlo_nn_controller__srv__EvaluateDriver_Request * ros_message = _ros_message;
  {  // maxtime
    PyObject * field = PyObject_GetAttrString(_pymsg, "maxtime");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->maxtime = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // tree_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "tree_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tree_index = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * arlo_nn_controller__srv__evaluate_driver__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EvaluateDriver_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("arlo_nn_controller.srv._evaluate_driver");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EvaluateDriver_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  arlo_nn_controller__srv__EvaluateDriver_Request * ros_message = (arlo_nn_controller__srv__EvaluateDriver_Request *)raw_ros_message;
  {  // maxtime
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->maxtime);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maxtime", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tree_index
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->tree_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tree_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "arlo_nn_controller/srv/detail/evaluate_driver__struct.h"
// already included above
// #include "arlo_nn_controller/srv/detail/evaluate_driver__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool arlo_nn_controller__srv__evaluate_driver__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("arlo_nn_controller.srv._evaluate_driver.EvaluateDriver_Response", full_classname_dest, 63) == 0);
  }
  arlo_nn_controller__srv__EvaluateDriver_Response * ros_message = _ros_message;
  {  // time
    PyObject * field = PyObject_GetAttrString(_pymsg, "time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dist2go
    PyObject * field = PyObject_GetAttrString(_pymsg, "dist2go");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dist2go = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // average_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "average_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->average_distance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // box_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "box_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->box_distance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // damage
    PyObject * field = PyObject_GetAttrString(_pymsg, "damage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->damage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // energy
    PyObject * field = PyObject_GetAttrString(_pymsg, "energy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->energy = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * arlo_nn_controller__srv__evaluate_driver__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EvaluateDriver_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("arlo_nn_controller.srv._evaluate_driver");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EvaluateDriver_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  arlo_nn_controller__srv__EvaluateDriver_Response * ros_message = (arlo_nn_controller__srv__EvaluateDriver_Response *)raw_ros_message;
  {  // time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dist2go
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dist2go);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dist2go", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // average_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->average_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "average_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // box_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->box_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "box_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // damage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->damage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "damage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // energy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->energy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "energy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "arlo_nn_controller/srv/detail/evaluate_driver__struct.h"
// already included above
// #include "arlo_nn_controller/srv/detail/evaluate_driver__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes


// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool service_msgs__msg__service_event_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * service_msgs__msg__service_event_info__convert_to_py(void * raw_ros_message);
bool arlo_nn_controller__srv__evaluate_driver__request__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * arlo_nn_controller__srv__evaluate_driver__request__convert_to_py(void * raw_ros_message);
bool arlo_nn_controller__srv__evaluate_driver__response__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * arlo_nn_controller__srv__evaluate_driver__response__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool arlo_nn_controller__srv__evaluate_driver__event__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("arlo_nn_controller.srv._evaluate_driver.EvaluateDriver_Event", full_classname_dest, 60) == 0);
  }
  arlo_nn_controller__srv__EvaluateDriver_Event * ros_message = _ros_message;
  {  // info
    PyObject * field = PyObject_GetAttrString(_pymsg, "info");
    if (!field) {
      return false;
    }
    if (!service_msgs__msg__service_event_info__convert_from_py(field, &ros_message->info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // request
    PyObject * field = PyObject_GetAttrString(_pymsg, "request");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'request'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!arlo_nn_controller__srv__EvaluateDriver_Request__Sequence__init(&(ros_message->request), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create arlo_nn_controller__srv__EvaluateDriver_Request__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    arlo_nn_controller__srv__EvaluateDriver_Request * dest = ros_message->request.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!arlo_nn_controller__srv__evaluate_driver__request__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // response
    PyObject * field = PyObject_GetAttrString(_pymsg, "response");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'response'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!arlo_nn_controller__srv__EvaluateDriver_Response__Sequence__init(&(ros_message->response), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create arlo_nn_controller__srv__EvaluateDriver_Response__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    arlo_nn_controller__srv__EvaluateDriver_Response * dest = ros_message->response.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!arlo_nn_controller__srv__evaluate_driver__response__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * arlo_nn_controller__srv__evaluate_driver__event__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EvaluateDriver_Event */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("arlo_nn_controller.srv._evaluate_driver");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EvaluateDriver_Event");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  arlo_nn_controller__srv__EvaluateDriver_Event * ros_message = (arlo_nn_controller__srv__EvaluateDriver_Event *)raw_ros_message;
  {  // info
    PyObject * field = NULL;
    field = service_msgs__msg__service_event_info__convert_to_py(&ros_message->info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // request
    PyObject * field = NULL;
    size_t size = ros_message->request.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    arlo_nn_controller__srv__EvaluateDriver_Request * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->request.data[i]);
      PyObject * pyitem = arlo_nn_controller__srv__evaluate_driver__request__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "request", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // response
    PyObject * field = NULL;
    size_t size = ros_message->response.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    arlo_nn_controller__srv__EvaluateDriver_Response * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->response.data[i]);
      PyObject * pyitem = arlo_nn_controller__srv__evaluate_driver__response__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "response", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
