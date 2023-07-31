// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_v2x_msgs:msg/WiperSet.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_v2x_msgs/msg/detail/wiper_set__rosidl_typesupport_introspection_c.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_v2x_msgs/msg/detail/wiper_set__functions.h"
#include "carma_v2x_msgs/msg/detail/wiper_set__struct.h"


// Include directives for member types
// Member `status_front`
// Member `status_rear`
#include "j2735_v2x_msgs/msg/wiper_status.h"
// Member `status_front`
// Member `status_rear`
#include "j2735_v2x_msgs/msg/detail/wiper_status__rosidl_typesupport_introspection_c.h"
// Member `rate_front`
// Member `rate_rear`
#include "carma_v2x_msgs/msg/wiper_rate.h"
// Member `rate_front`
// Member `rate_rear`
#include "carma_v2x_msgs/msg/detail/wiper_rate__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void WiperSet__rosidl_typesupport_introspection_c__WiperSet_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_v2x_msgs__msg__WiperSet__init(message_memory);
}

void WiperSet__rosidl_typesupport_introspection_c__WiperSet_fini_function(void * message_memory)
{
  carma_v2x_msgs__msg__WiperSet__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember WiperSet__rosidl_typesupport_introspection_c__WiperSet_message_member_array[5] = {
  {
    "presence_vector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__WiperSet, presence_vector),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_front",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__WiperSet, status_front),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rate_front",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__WiperSet, rate_front),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_rear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__WiperSet, status_rear),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rate_rear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__WiperSet, rate_rear),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WiperSet__rosidl_typesupport_introspection_c__WiperSet_message_members = {
  "carma_v2x_msgs__msg",  // message namespace
  "WiperSet",  // message name
  5,  // number of fields
  sizeof(carma_v2x_msgs__msg__WiperSet),
  WiperSet__rosidl_typesupport_introspection_c__WiperSet_message_member_array,  // message members
  WiperSet__rosidl_typesupport_introspection_c__WiperSet_init_function,  // function to initialize message memory (memory has to be allocated)
  WiperSet__rosidl_typesupport_introspection_c__WiperSet_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WiperSet__rosidl_typesupport_introspection_c__WiperSet_message_type_support_handle = {
  0,
  &WiperSet__rosidl_typesupport_introspection_c__WiperSet_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, WiperSet)() {
  WiperSet__rosidl_typesupport_introspection_c__WiperSet_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, WiperStatus)();
  WiperSet__rosidl_typesupport_introspection_c__WiperSet_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, WiperRate)();
  WiperSet__rosidl_typesupport_introspection_c__WiperSet_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, WiperStatus)();
  WiperSet__rosidl_typesupport_introspection_c__WiperSet_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, WiperRate)();
  if (!WiperSet__rosidl_typesupport_introspection_c__WiperSet_message_type_support_handle.typesupport_identifier) {
    WiperSet__rosidl_typesupport_introspection_c__WiperSet_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WiperSet__rosidl_typesupport_introspection_c__WiperSet_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
