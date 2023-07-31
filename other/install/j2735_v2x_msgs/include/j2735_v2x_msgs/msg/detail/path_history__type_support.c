// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/PathHistory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/path_history__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/path_history__functions.h"
#include "j2735_v2x_msgs/msg/detail/path_history__struct.h"


// Include directives for member types
// Member `crumb_data`
#include "j2735_v2x_msgs/msg/path_history_point_list.h"
// Member `crumb_data`
#include "j2735_v2x_msgs/msg/detail/path_history_point_list__rosidl_typesupport_introspection_c.h"
// Member `initial_position`
#include "j2735_v2x_msgs/msg/full_position_vector.h"
// Member `initial_position`
#include "j2735_v2x_msgs/msg/detail/full_position_vector__rosidl_typesupport_introspection_c.h"
// Member `curr_gnss_status`
#include "j2735_v2x_msgs/msg/gnss_status.h"
// Member `curr_gnss_status`
#include "j2735_v2x_msgs/msg/detail/gnss_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PathHistory__rosidl_typesupport_introspection_c__PathHistory_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__PathHistory__init(message_memory);
}

void PathHistory__rosidl_typesupport_introspection_c__PathHistory_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__PathHistory__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PathHistory__rosidl_typesupport_introspection_c__PathHistory_message_member_array[4] = {
  {
    "presence_vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__PathHistory, presence_vector),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "crumb_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__PathHistory, crumb_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "initial_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__PathHistory, initial_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "curr_gnss_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__PathHistory, curr_gnss_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PathHistory__rosidl_typesupport_introspection_c__PathHistory_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "PathHistory",  // message name
  4,  // number of fields
  sizeof(j2735_v2x_msgs__msg__PathHistory),
  PathHistory__rosidl_typesupport_introspection_c__PathHistory_message_member_array,  // message members
  PathHistory__rosidl_typesupport_introspection_c__PathHistory_init_function,  // function to initialize message memory (memory has to be allocated)
  PathHistory__rosidl_typesupport_introspection_c__PathHistory_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PathHistory__rosidl_typesupport_introspection_c__PathHistory_message_type_support_handle = {
  0,
  &PathHistory__rosidl_typesupport_introspection_c__PathHistory_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, PathHistory)() {
  PathHistory__rosidl_typesupport_introspection_c__PathHistory_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, PathHistoryPointList)();
  PathHistory__rosidl_typesupport_introspection_c__PathHistory_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, FullPositionVector)();
  PathHistory__rosidl_typesupport_introspection_c__PathHistory_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, GNSSStatus)();
  if (!PathHistory__rosidl_typesupport_introspection_c__PathHistory_message_type_support_handle.typesupport_identifier) {
    PathHistory__rosidl_typesupport_introspection_c__PathHistory_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PathHistory__rosidl_typesupport_introspection_c__PathHistory_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
