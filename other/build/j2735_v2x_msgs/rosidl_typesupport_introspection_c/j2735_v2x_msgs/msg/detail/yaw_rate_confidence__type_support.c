// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/YawRateConfidence.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/yaw_rate_confidence__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/yaw_rate_confidence__functions.h"
#include "j2735_v2x_msgs/msg/detail/yaw_rate_confidence__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void YawRateConfidence__rosidl_typesupport_introspection_c__YawRateConfidence_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__YawRateConfidence__init(message_memory);
}

void YawRateConfidence__rosidl_typesupport_introspection_c__YawRateConfidence_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__YawRateConfidence__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember YawRateConfidence__rosidl_typesupport_introspection_c__YawRateConfidence_message_member_array[1] = {
  {
    "yaw_rate_confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__YawRateConfidence, yaw_rate_confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers YawRateConfidence__rosidl_typesupport_introspection_c__YawRateConfidence_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "YawRateConfidence",  // message name
  1,  // number of fields
  sizeof(j2735_v2x_msgs__msg__YawRateConfidence),
  YawRateConfidence__rosidl_typesupport_introspection_c__YawRateConfidence_message_member_array,  // message members
  YawRateConfidence__rosidl_typesupport_introspection_c__YawRateConfidence_init_function,  // function to initialize message memory (memory has to be allocated)
  YawRateConfidence__rosidl_typesupport_introspection_c__YawRateConfidence_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t YawRateConfidence__rosidl_typesupport_introspection_c__YawRateConfidence_message_type_support_handle = {
  0,
  &YawRateConfidence__rosidl_typesupport_introspection_c__YawRateConfidence_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, YawRateConfidence)() {
  if (!YawRateConfidence__rosidl_typesupport_introspection_c__YawRateConfidence_message_type_support_handle.typesupport_identifier) {
    YawRateConfidence__rosidl_typesupport_introspection_c__YawRateConfidence_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &YawRateConfidence__rosidl_typesupport_introspection_c__YawRateConfidence_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
