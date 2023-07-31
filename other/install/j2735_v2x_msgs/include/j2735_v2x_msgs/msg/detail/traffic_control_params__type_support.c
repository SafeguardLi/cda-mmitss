// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/TrafficControlParams.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/traffic_control_params__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_params__functions.h"
#include "j2735_v2x_msgs/msg/detail/traffic_control_params__struct.h"


// Include directives for member types
// Member `vclasses`
#include "j2735_v2x_msgs/msg/traffic_control_veh_class.h"
// Member `vclasses`
#include "j2735_v2x_msgs/msg/detail/traffic_control_veh_class__rosidl_typesupport_introspection_c.h"
// Member `schedule`
#include "j2735_v2x_msgs/msg/traffic_control_schedule.h"
// Member `schedule`
#include "j2735_v2x_msgs/msg/detail/traffic_control_schedule__rosidl_typesupport_introspection_c.h"
// Member `detail`
#include "j2735_v2x_msgs/msg/traffic_control_detail.h"
// Member `detail`
#include "j2735_v2x_msgs/msg/detail/traffic_control_detail__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TrafficControlParams__rosidl_typesupport_introspection_c__TrafficControlParams_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__TrafficControlParams__init(message_memory);
}

void TrafficControlParams__rosidl_typesupport_introspection_c__TrafficControlParams_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__TrafficControlParams__fini(message_memory);
}

size_t TrafficControlParams__rosidl_typesupport_introspection_c__size_function__TrafficControlVehClass__vclasses(
  const void * untyped_member)
{
  const j2735_v2x_msgs__msg__TrafficControlVehClass__Sequence * member =
    (const j2735_v2x_msgs__msg__TrafficControlVehClass__Sequence *)(untyped_member);
  return member->size;
}

const void * TrafficControlParams__rosidl_typesupport_introspection_c__get_const_function__TrafficControlVehClass__vclasses(
  const void * untyped_member, size_t index)
{
  const j2735_v2x_msgs__msg__TrafficControlVehClass__Sequence * member =
    (const j2735_v2x_msgs__msg__TrafficControlVehClass__Sequence *)(untyped_member);
  return &member->data[index];
}

void * TrafficControlParams__rosidl_typesupport_introspection_c__get_function__TrafficControlVehClass__vclasses(
  void * untyped_member, size_t index)
{
  j2735_v2x_msgs__msg__TrafficControlVehClass__Sequence * member =
    (j2735_v2x_msgs__msg__TrafficControlVehClass__Sequence *)(untyped_member);
  return &member->data[index];
}

bool TrafficControlParams__rosidl_typesupport_introspection_c__resize_function__TrafficControlVehClass__vclasses(
  void * untyped_member, size_t size)
{
  j2735_v2x_msgs__msg__TrafficControlVehClass__Sequence * member =
    (j2735_v2x_msgs__msg__TrafficControlVehClass__Sequence *)(untyped_member);
  j2735_v2x_msgs__msg__TrafficControlVehClass__Sequence__fini(member);
  return j2735_v2x_msgs__msg__TrafficControlVehClass__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember TrafficControlParams__rosidl_typesupport_introspection_c__TrafficControlParams_message_member_array[4] = {
  {
    "vclasses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrafficControlParams, vclasses),  // bytes offset in struct
    NULL,  // default value
    TrafficControlParams__rosidl_typesupport_introspection_c__size_function__TrafficControlVehClass__vclasses,  // size() function pointer
    TrafficControlParams__rosidl_typesupport_introspection_c__get_const_function__TrafficControlVehClass__vclasses,  // get_const(index) function pointer
    TrafficControlParams__rosidl_typesupport_introspection_c__get_function__TrafficControlVehClass__vclasses,  // get(index) function pointer
    TrafficControlParams__rosidl_typesupport_introspection_c__resize_function__TrafficControlVehClass__vclasses  // resize(index) function pointer
  },
  {
    "schedule",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrafficControlParams, schedule),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "regulatory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrafficControlParams, regulatory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "detail",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__TrafficControlParams, detail),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrafficControlParams__rosidl_typesupport_introspection_c__TrafficControlParams_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "TrafficControlParams",  // message name
  4,  // number of fields
  sizeof(j2735_v2x_msgs__msg__TrafficControlParams),
  TrafficControlParams__rosidl_typesupport_introspection_c__TrafficControlParams_message_member_array,  // message members
  TrafficControlParams__rosidl_typesupport_introspection_c__TrafficControlParams_init_function,  // function to initialize message memory (memory has to be allocated)
  TrafficControlParams__rosidl_typesupport_introspection_c__TrafficControlParams_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrafficControlParams__rosidl_typesupport_introspection_c__TrafficControlParams_message_type_support_handle = {
  0,
  &TrafficControlParams__rosidl_typesupport_introspection_c__TrafficControlParams_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, TrafficControlParams)() {
  TrafficControlParams__rosidl_typesupport_introspection_c__TrafficControlParams_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, TrafficControlVehClass)();
  TrafficControlParams__rosidl_typesupport_introspection_c__TrafficControlParams_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, TrafficControlSchedule)();
  TrafficControlParams__rosidl_typesupport_introspection_c__TrafficControlParams_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, TrafficControlDetail)();
  if (!TrafficControlParams__rosidl_typesupport_introspection_c__TrafficControlParams_message_type_support_handle.typesupport_identifier) {
    TrafficControlParams__rosidl_typesupport_introspection_c__TrafficControlParams_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrafficControlParams__rosidl_typesupport_introspection_c__TrafficControlParams_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
