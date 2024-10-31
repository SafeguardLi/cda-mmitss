// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/LaneList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/lane_list__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/lane_list__functions.h"
#include "j2735_v2x_msgs/msg/detail/lane_list__struct.h"


// Include directives for member types
// Member `lane_list`
#include "j2735_v2x_msgs/msg/generic_lane.h"
// Member `lane_list`
#include "j2735_v2x_msgs/msg/detail/generic_lane__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LaneList__rosidl_typesupport_introspection_c__LaneList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__LaneList__init(message_memory);
}

void LaneList__rosidl_typesupport_introspection_c__LaneList_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__LaneList__fini(message_memory);
}

size_t LaneList__rosidl_typesupport_introspection_c__size_function__GenericLane__lane_list(
  const void * untyped_member)
{
  const j2735_v2x_msgs__msg__GenericLane__Sequence * member =
    (const j2735_v2x_msgs__msg__GenericLane__Sequence *)(untyped_member);
  return member->size;
}

const void * LaneList__rosidl_typesupport_introspection_c__get_const_function__GenericLane__lane_list(
  const void * untyped_member, size_t index)
{
  const j2735_v2x_msgs__msg__GenericLane__Sequence * member =
    (const j2735_v2x_msgs__msg__GenericLane__Sequence *)(untyped_member);
  return &member->data[index];
}

void * LaneList__rosidl_typesupport_introspection_c__get_function__GenericLane__lane_list(
  void * untyped_member, size_t index)
{
  j2735_v2x_msgs__msg__GenericLane__Sequence * member =
    (j2735_v2x_msgs__msg__GenericLane__Sequence *)(untyped_member);
  return &member->data[index];
}

bool LaneList__rosidl_typesupport_introspection_c__resize_function__GenericLane__lane_list(
  void * untyped_member, size_t size)
{
  j2735_v2x_msgs__msg__GenericLane__Sequence * member =
    (j2735_v2x_msgs__msg__GenericLane__Sequence *)(untyped_member);
  j2735_v2x_msgs__msg__GenericLane__Sequence__fini(member);
  return j2735_v2x_msgs__msg__GenericLane__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember LaneList__rosidl_typesupport_introspection_c__LaneList_message_member_array[1] = {
  {
    "lane_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__LaneList, lane_list),  // bytes offset in struct
    NULL,  // default value
    LaneList__rosidl_typesupport_introspection_c__size_function__GenericLane__lane_list,  // size() function pointer
    LaneList__rosidl_typesupport_introspection_c__get_const_function__GenericLane__lane_list,  // get_const(index) function pointer
    LaneList__rosidl_typesupport_introspection_c__get_function__GenericLane__lane_list,  // get(index) function pointer
    LaneList__rosidl_typesupport_introspection_c__resize_function__GenericLane__lane_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LaneList__rosidl_typesupport_introspection_c__LaneList_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "LaneList",  // message name
  1,  // number of fields
  sizeof(j2735_v2x_msgs__msg__LaneList),
  LaneList__rosidl_typesupport_introspection_c__LaneList_message_member_array,  // message members
  LaneList__rosidl_typesupport_introspection_c__LaneList_init_function,  // function to initialize message memory (memory has to be allocated)
  LaneList__rosidl_typesupport_introspection_c__LaneList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LaneList__rosidl_typesupport_introspection_c__LaneList_message_type_support_handle = {
  0,
  &LaneList__rosidl_typesupport_introspection_c__LaneList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, LaneList)() {
  LaneList__rosidl_typesupport_introspection_c__LaneList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, GenericLane)();
  if (!LaneList__rosidl_typesupport_introspection_c__LaneList_message_type_support_handle.typesupport_identifier) {
    LaneList__rosidl_typesupport_introspection_c__LaneList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LaneList__rosidl_typesupport_introspection_c__LaneList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
