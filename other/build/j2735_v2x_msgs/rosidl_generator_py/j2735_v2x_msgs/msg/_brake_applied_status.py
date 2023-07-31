# generated from rosidl_generator_py/resource/_idl.py.em
# with input from j2735_v2x_msgs:msg/BrakeAppliedStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BrakeAppliedStatus(type):
    """Metaclass of message 'BrakeAppliedStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNAVAILABLE': 0,
        'LEFT_FRONT': 1,
        'LEFT_REAR': 2,
        'RIGHT_FRONT': 3,
        'RIGHT_REAR': 4,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('j2735_v2x_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'j2735_v2x_msgs.msg.BrakeAppliedStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__brake_applied_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__brake_applied_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__brake_applied_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__brake_applied_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__brake_applied_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNAVAILABLE': cls.__constants['UNAVAILABLE'],
            'LEFT_FRONT': cls.__constants['LEFT_FRONT'],
            'LEFT_REAR': cls.__constants['LEFT_REAR'],
            'RIGHT_FRONT': cls.__constants['RIGHT_FRONT'],
            'RIGHT_REAR': cls.__constants['RIGHT_REAR'],
        }

    @property
    def UNAVAILABLE(self):
        """Message constant 'UNAVAILABLE'."""
        return Metaclass_BrakeAppliedStatus.__constants['UNAVAILABLE']

    @property
    def LEFT_FRONT(self):
        """Message constant 'LEFT_FRONT'."""
        return Metaclass_BrakeAppliedStatus.__constants['LEFT_FRONT']

    @property
    def LEFT_REAR(self):
        """Message constant 'LEFT_REAR'."""
        return Metaclass_BrakeAppliedStatus.__constants['LEFT_REAR']

    @property
    def RIGHT_FRONT(self):
        """Message constant 'RIGHT_FRONT'."""
        return Metaclass_BrakeAppliedStatus.__constants['RIGHT_FRONT']

    @property
    def RIGHT_REAR(self):
        """Message constant 'RIGHT_REAR'."""
        return Metaclass_BrakeAppliedStatus.__constants['RIGHT_REAR']


class BrakeAppliedStatus(metaclass=Metaclass_BrakeAppliedStatus):
    """
    Message class 'BrakeAppliedStatus'.

    Constants:
      UNAVAILABLE
      LEFT_FRONT
      LEFT_REAR
      RIGHT_FRONT
      RIGHT_REAR
    """

    __slots__ = [
        '_brake_applied_status',
    ]

    _fields_and_field_types = {
        'brake_applied_status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.brake_applied_status = kwargs.get('brake_applied_status', int())

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
        if self.brake_applied_status != other.brake_applied_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def brake_applied_status(self):
        """Message field 'brake_applied_status'."""
        return self._brake_applied_status

    @brake_applied_status.setter
    def brake_applied_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brake_applied_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brake_applied_status' field must be an unsigned integer in [0, 255]"
        self._brake_applied_status = value
