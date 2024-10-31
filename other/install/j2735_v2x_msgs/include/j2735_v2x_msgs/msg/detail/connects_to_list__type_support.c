// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/ConnectsToList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/connects_to_list__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/connects_to_list__functions.h"
#include "j2735_v2x_msgs/msg/detail/connects_to_list__struct.h"


// Include directives for member types
// Member `connect_to_list`
#include "j2735_v2x_msgs/msg/connection.h"
// Member `connect_to_list`
#include "j2735_v2x_msgs/msg/detail/connection__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ConnectsToList__rosidl_typesupport_introspection_c__ConnectsToList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__ConnectsToList__init(message_memory);
}

void ConnectsToList__rosidl_typesupport_introspection_c__ConnectsToList_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__ConnectsToList__fini(message_memory);
}

size_t ConnectsToList__rosidl_typesupport_introspection_c__size_function__Connection__connect_to_list(
  const void * untyped_member)
{
  const j2735_v2x_msgs__msg__Connection__Sequence * member =
    (const j2735_v2x_msgs__msg__Connection__Sequence *)(untyped_member);
  return member->size;
}

const void * ConnectsToList__rosidl_typesupport_introspection_c__get_const_function__Connection__connect_to_list(
  const void * untyped_member, size_t index)
{
  const j2735_v2x_msgs__msg__Connection__Sequence * member =
    (const j2735_v2x_msgs__msg__Connection__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ConnectsToList__rosidl_typesupport_introspection_c__get_function__Connection__connect_to_list(
  void * untyped_member, size_t index)
{
  j2735_v2x_msgs__msg__Connection__Sequence * member =
    (j2735_v2x_msgs__msg__Connection__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ConnectsToList__rosidl_typesupport_introspection_c__resize_function__Connection__connect_to_list(
  void * untyped_member, size_t size)
{
  j2735_v2x_msgs__msg__Connection__Sequence * member =
    (j2735_v2x_msgs__msg__Connection__Sequence *)(untyped_member);
  j2735_v2x_msgs__msg__Connection__Sequence__fini(member);
  return j2735_v2x_msgs__msg__Connection__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ConnectsToList__rosidl_typesupport_introspection_c__ConnectsToList_message_member_array[1] = {
  {
    "connect_to_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__ConnectsToList, connect_to_list),  // bytes offset in struct
    NULL,  // default value
    ConnectsToList__rosidl_typesupport_introspection_c__size_function__Connection__connect_to_list,  // size() function pointer
    ConnectsToList__rosidl_typesupport_introspection_c__get_const_function__Connection__connect_to_list,  // get_const(index) function pointer
    ConnectsToList__rosidl_typesupport_introspection_c__get_function__Connection__connect_to_list,  // get(index) function pointer
    ConnectsToList__rosidl_typesupport_introspection_c__resize_function__Connection__connect_to_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ConnectsToList__rosidl_typesupport_introspection_c__ConnectsToList_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "ConnectsToList",  // message name
  1,  // number of fields
  sizeof(j2735_v2x_msgs__msg__ConnectsToList),
  ConnectsToList__rosidl_typesupport_introspection_c__ConnectsToList_message_member_array,  // message members
  ConnectsToList__rosidl_typesupport_introspection_c__ConnectsToList_init_function,  // function to initialize message memory (memory has to be allocated)
  ConnectsToList__rosidl_typesupport_introspection_c__ConnectsToList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ConnectsToList__rosidl_typesupport_introspection_c__ConnectsToList_message_type_support_handle = {
  0,
  &ConnectsToList__rosidl_typesupport_introspection_c__ConnectsToList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, ConnectsToList)() {
  ConnectsToList__rosidl_typesupport_introspection_c__ConnectsToList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, Connection)();
  if (!ConnectsToList__rosidl_typesupport_introspection_c__ConnectsToList_message_type_support_handle.typesupport_identifier) {
    ConnectsToList__rosidl_typesupport_introspection_c__ConnectsToList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ConnectsToList__rosidl_typesupport_introspection_c__ConnectsToList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
