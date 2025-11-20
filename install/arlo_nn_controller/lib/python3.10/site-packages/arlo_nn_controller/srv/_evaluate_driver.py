# generated from rosidl_generator_py/resource/_idl.py.em
# with input from arlo_nn_controller:srv/EvaluateDriver.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EvaluateDriver_Request(type):
    """Metaclass of message 'EvaluateDriver_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('arlo_nn_controller')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arlo_nn_controller.srv.EvaluateDriver_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__evaluate_driver__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__evaluate_driver__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__evaluate_driver__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__evaluate_driver__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__evaluate_driver__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EvaluateDriver_Request(metaclass=Metaclass_EvaluateDriver_Request):
    """Message class 'EvaluateDriver_Request'."""

    __slots__ = [
        '_maxtime',
        '_tree_index',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'maxtime': 'int64',
        'tree_index': 'int64',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.maxtime = kwargs.get('maxtime', int())
        self.tree_index = kwargs.get('tree_index', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.maxtime != other.maxtime:
            return False
        if self.tree_index != other.tree_index:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def maxtime(self):
        """Message field 'maxtime'."""
        return self._maxtime

    @maxtime.setter
    def maxtime(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'maxtime' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'maxtime' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._maxtime = value

    @builtins.property
    def tree_index(self):
        """Message field 'tree_index'."""
        return self._tree_index

    @tree_index.setter
    def tree_index(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'tree_index' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'tree_index' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._tree_index = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_EvaluateDriver_Response(type):
    """Metaclass of message 'EvaluateDriver_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('arlo_nn_controller')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arlo_nn_controller.srv.EvaluateDriver_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__evaluate_driver__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__evaluate_driver__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__evaluate_driver__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__evaluate_driver__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__evaluate_driver__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EvaluateDriver_Response(metaclass=Metaclass_EvaluateDriver_Response):
    """Message class 'EvaluateDriver_Response'."""

    __slots__ = [
        '_time',
        '_dist2go',
        '_average_distance',
        '_box_distance',
        '_damage',
        '_energy',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'time': 'double',
        'dist2go': 'double',
        'average_distance': 'double',
        'box_distance': 'double',
        'damage': 'double',
        'energy': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.time = kwargs.get('time', float())
        self.dist2go = kwargs.get('dist2go', float())
        self.average_distance = kwargs.get('average_distance', float())
        self.box_distance = kwargs.get('box_distance', float())
        self.damage = kwargs.get('damage', float())
        self.energy = kwargs.get('energy', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.time != other.time:
            return False
        if self.dist2go != other.dist2go:
            return False
        if self.average_distance != other.average_distance:
            return False
        if self.box_distance != other.box_distance:
            return False
        if self.damage != other.damage:
            return False
        if self.energy != other.energy:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def time(self):
        """Message field 'time'."""
        return self._time

    @time.setter
    def time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._time = value

    @builtins.property
    def dist2go(self):
        """Message field 'dist2go'."""
        return self._dist2go

    @dist2go.setter
    def dist2go(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'dist2go' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'dist2go' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._dist2go = value

    @builtins.property
    def average_distance(self):
        """Message field 'average_distance'."""
        return self._average_distance

    @average_distance.setter
    def average_distance(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'average_distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'average_distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._average_distance = value

    @builtins.property
    def box_distance(self):
        """Message field 'box_distance'."""
        return self._box_distance

    @box_distance.setter
    def box_distance(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'box_distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'box_distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._box_distance = value

    @builtins.property
    def damage(self):
        """Message field 'damage'."""
        return self._damage

    @damage.setter
    def damage(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'damage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'damage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._damage = value

    @builtins.property
    def energy(self):
        """Message field 'energy'."""
        return self._energy

    @energy.setter
    def energy(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'energy' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'energy' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._energy = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_EvaluateDriver_Event(type):
    """Metaclass of message 'EvaluateDriver_Event'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('arlo_nn_controller')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arlo_nn_controller.srv.EvaluateDriver_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__evaluate_driver__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__evaluate_driver__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__evaluate_driver__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__evaluate_driver__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__evaluate_driver__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EvaluateDriver_Event(metaclass=Metaclass_EvaluateDriver_Event):
    """Message class 'EvaluateDriver_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<arlo_nn_controller/EvaluateDriver_Request, 1>',
        'response': 'sequence<arlo_nn_controller/EvaluateDriver_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['arlo_nn_controller', 'srv'], 'EvaluateDriver_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['arlo_nn_controller', 'srv'], 'EvaluateDriver_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from arlo_nn_controller.srv import EvaluateDriver_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, EvaluateDriver_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'EvaluateDriver_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from arlo_nn_controller.srv import EvaluateDriver_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, EvaluateDriver_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'EvaluateDriver_Response'"
        self._response = value


class Metaclass_EvaluateDriver(type):
    """Metaclass of service 'EvaluateDriver'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('arlo_nn_controller')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'arlo_nn_controller.srv.EvaluateDriver')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__evaluate_driver

            from arlo_nn_controller.srv import _evaluate_driver
            if _evaluate_driver.Metaclass_EvaluateDriver_Request._TYPE_SUPPORT is None:
                _evaluate_driver.Metaclass_EvaluateDriver_Request.__import_type_support__()
            if _evaluate_driver.Metaclass_EvaluateDriver_Response._TYPE_SUPPORT is None:
                _evaluate_driver.Metaclass_EvaluateDriver_Response.__import_type_support__()
            if _evaluate_driver.Metaclass_EvaluateDriver_Event._TYPE_SUPPORT is None:
                _evaluate_driver.Metaclass_EvaluateDriver_Event.__import_type_support__()


class EvaluateDriver(metaclass=Metaclass_EvaluateDriver):
    from arlo_nn_controller.srv._evaluate_driver import EvaluateDriver_Request as Request
    from arlo_nn_controller.srv._evaluate_driver import EvaluateDriver_Response as Response
    from arlo_nn_controller.srv._evaluate_driver import EvaluateDriver_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
