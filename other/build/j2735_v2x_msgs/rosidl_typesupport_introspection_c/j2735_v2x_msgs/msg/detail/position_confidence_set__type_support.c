// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/PositionConfidenceSet.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/position_confidence_set__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/position_confidence_set__functions.h"
#include "j2735_v2x_msgs/msg/detail/position_confidence_set__struct.h"


// Include directives for member types
// Member `pos`
#include "j2735_v2x_msgs/msg/position_confidence.h"
// Member `pos`
#include "j2735_v2x_msgs/msg/detail/position_confidence__rosidl_typesupport_introspection_c.h"
// Member `elevation`
#include "j2735_v2x_msgs/msg/elevation_confidence.h"
// Member `elevation`
#include "j2735_v2x_msgs/msg/detail/elevation_confidence__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PositionConfidenceSet__rosidl_typesupport_introspection_c__PositionConfidenceSet_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__PositionConfidenceSet__init(message_memory);
}

void PositionConfidenceSet__rosidl_typesupport_introspection_c__PositionConfidenceSet_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__PositionConfidenceSet__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PositionConfidenceSet__rosidl_typesupport_introspection_c__PositionConfidenceSet_message_member_array[2] = {
  {
    "pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__PositionConfidenceSet, pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "elevation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__PositionConfidenceSet, elevation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PositionConfidenceSet__rosidl_typesupport_introspection_c__PositionConfidenceSet_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "PositionConfidenceSet",  // message name
  2,  // number of fields
  sizeof(j2735_v2x_msgs__msg__PositionConfidenceSet),
  PositionConfidenceSet__rosidl_typesupport_introspection_c__PositionConfidenceSet_message_member_array,  // message members
  PositionConfidenceSet__rosidl_typesupport_introspection_c__PositionConfidenceSet_init_function,  // function to initialize message memory (memory has to be allocated)
  PositionConfidenceSet__rosidl_typesupport_introspection_c__PositionConfidenceSet_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PositionConfidenceSet__rosidl_typesupport_introspection_c__PositionConfidenceSet_message_type_support_handle = {
  0,
  &PositionConfidenceSet__rosidl_typesupport_introspection_c__PositionConfidenceSet_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, PositionConfidenceSet)() {
  PositionConfidenceSet__rosidl_typesupport_introspection_c__PositionConfidenceSet_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, PositionConfidence)();
  PositionConfidenceSet__rosidl_typesupport_introspection_c__PositionConfidenceSet_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, ElevationConfidence)();
  if (!PositionConfidenceSet__rosidl_typesupport_introspection_c__PositionConfidenceSet_message_type_support_handle.typesupport_identifier) {
    PositionConfidenceSet__rosidl_typesupport_introspection_c__PositionConfidenceSet_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PositionConfidenceSet__rosidl_typesupport_introspection_c__PositionConfidenceSet_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
