# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cg_interfaces:srv/GetMap.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetMap_Request(type):
    """Metaclass of message 'GetMap_Request'."""

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
            module = import_type_support('cg_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cg_interfaces.srv.GetMap_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_map__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_map__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_map__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_map__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_map__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetMap_Request(metaclass=Metaclass_GetMap_Request):
    """Message class 'GetMap_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# Member 'occupancy_grid_shape'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetMap_Response(type):
    """Metaclass of message 'GetMap_Response'."""

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
            module = import_type_support('cg_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cg_interfaces.srv.GetMap_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_map__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_map__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_map__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_map__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_map__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetMap_Response(metaclass=Metaclass_GetMap_Response):
    """Message class 'GetMap_Response'."""

    __slots__ = [
        '_occupancy_grid_flattened',
        '_occupancy_grid_shape',
    ]

    _fields_and_field_types = {
        'occupancy_grid_flattened': 'sequence<string>',
        'occupancy_grid_shape': 'sequence<uint8, 2>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BasicType('uint8'), 2),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.occupancy_grid_flattened = kwargs.get('occupancy_grid_flattened', [])
        self.occupancy_grid_shape = array.array('B', kwargs.get('occupancy_grid_shape', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.occupancy_grid_flattened != other.occupancy_grid_flattened:
            return False
        if self.occupancy_grid_shape != other.occupancy_grid_shape:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def occupancy_grid_flattened(self):
        """Message field 'occupancy_grid_flattened'."""
        return self._occupancy_grid_flattened

    @occupancy_grid_flattened.setter
    def occupancy_grid_flattened(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'occupancy_grid_flattened' field must be a set or sequence and each value of type 'str'"
        self._occupancy_grid_flattened = value

    @builtins.property
    def occupancy_grid_shape(self):
        """Message field 'occupancy_grid_shape'."""
        return self._occupancy_grid_shape

    @occupancy_grid_shape.setter
    def occupancy_grid_shape(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'occupancy_grid_shape' array.array() must have the type code of 'B'"
            assert len(value) <= 2, \
                "The 'occupancy_grid_shape' array.array() must have a size <= 2"
            self._occupancy_grid_shape = value
            return
        if __debug__:
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
                 len(value) <= 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'occupancy_grid_shape' field must be a set or sequence with length <= 2 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._occupancy_grid_shape = array.array('B', value)


class Metaclass_GetMap(type):
    """Metaclass of service 'GetMap'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cg_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cg_interfaces.srv.GetMap')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_map

            from cg_interfaces.srv import _get_map
            if _get_map.Metaclass_GetMap_Request._TYPE_SUPPORT is None:
                _get_map.Metaclass_GetMap_Request.__import_type_support__()
            if _get_map.Metaclass_GetMap_Response._TYPE_SUPPORT is None:
                _get_map.Metaclass_GetMap_Response.__import_type_support__()


class GetMap(metaclass=Metaclass_GetMap):
    from cg_interfaces.srv._get_map import GetMap_Request as Request
    from cg_interfaces.srv._get_map import GetMap_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
