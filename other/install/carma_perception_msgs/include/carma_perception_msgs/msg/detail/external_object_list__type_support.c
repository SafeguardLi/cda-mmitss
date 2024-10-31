// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_perception_msgs:msg/ExternalObjectList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_perception_msgs/msg/detail/external_object_list__rosidl_typesupport_introspection_c.h"
#include "carma_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_perception_msgs/msg/detail/external_object_list__functions.h"
#include "carma_perception_msgs/msg/detail/external_object_list__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `objects`
#include "carma_perception_msgs/msg/external_object.h"
// Member `objects`
#include "carma_perception_msgs/msg/detail/external_object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ExternalObjectList__rosidl_typesupport_introspection_c__ExternalObjectList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_perception_msgs__msg__ExternalObjectList__init(message_memory);
}

void ExternalObjectList__rosidl_typesupport_introspection_c__ExternalObjectList_fini_function(void * message_memory)
{
  carma_perception_msgs__msg__ExternalObjectList__fini(message_memory);
}

size_t ExternalObjectList__rosidl_typesupport_introspection_c__size_function__ExternalObject__objects(
  const void * untyped_member)
{
  const carma_perception_msgs__msg__ExternalObject__Sequence * member =
    (const carma_perception_msgs__msg__ExternalObject__Sequence *)(untyped_member);
  return member->size;
}

const void * ExternalObjectList__rosidl_typesupport_introspection_c__get_const_function__ExternalObject__objects(
  const void * untyped_member, size_t index)
{
  const carma_perception_msgs__msg__ExternalObject__Sequence * member =
    (const carma_perception_msgs__msg__ExternalObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ExternalObjectList__rosidl_typesupport_introspection_c__get_function__ExternalObject__objects(
  void * untyped_member, size_t index)
{
  carma_perception_msgs__msg__ExternalObject__Sequence * member =
    (carma_perception_msgs__msg__ExternalObject__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ExternalObjectList__rosidl_typesupport_introspection_c__resize_function__ExternalObject__objects(
  void * untyped_member, size_t size)
{
  carma_perception_msgs__msg__ExternalObject__Sequence * member =
    (carma_perception_msgs__msg__ExternalObject__Sequence *)(untyped_member);
  carma_perception_msgs__msg__ExternalObject__Sequence__fini(member);
  return carma_perception_msgs__msg__ExternalObject__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ExternalObjectList__rosidl_typesupport_introspection_c__ExternalObjectList_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__ExternalObjectList, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_perception_msgs__msg__ExternalObjectList, objects),  // bytes offset in struct
    NULL,  // default value
    ExternalObjectList__rosidl_typesupport_introspection_c__size_function__ExternalObject__objects,  // size() function pointer
    ExternalObjectList__rosidl_typesupport_introspection_c__get_const_function__ExternalObject__objects,  // get_const(index) function pointer
    ExternalObjectList__rosidl_typesupport_introspection_c__get_function__ExternalObject__objects,  // get(index) function pointer
    ExternalObjectList__rosidl_typesupport_introspection_c__resize_function__ExternalObject__objects  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ExternalObjectList__rosidl_typesupport_introspection_c__ExternalObjectList_message_members = {
  "carma_perception_msgs__msg",  // message namespace
  "ExternalObjectList",  // message name
  2,  // number of fields
  sizeof(carma_perception_msgs__msg__ExternalObjectList),
  ExternalObjectList__rosidl_typesupport_introspection_c__ExternalObjectList_message_member_array,  // message members
  ExternalObjectList__rosidl_typesupport_introspection_c__ExternalObjectList_init_function,  // function to initialize message memory (memory has to be allocated)
  ExternalObjectList__rosidl_typesupport_introspection_c__ExternalObjectList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ExternalObjectList__rosidl_typesupport_introspection_c__ExternalObjectList_message_type_support_handle = {
  0,
  &ExternalObjectList__rosidl_typesupport_introspection_c__ExternalObjectList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_perception_msgs, msg, ExternalObjectList)() {
  ExternalObjectList__rosidl_typesupport_introspection_c__ExternalObjectList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ExternalObjectList__rosidl_typesupport_introspection_c__ExternalObjectList_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_perception_msgs, msg, ExternalObject)();
  if (!ExternalObjectList__rosidl_typesupport_introspection_c__ExternalObjectList_message_type_support_handle.typesupport_identifier) {
    ExternalObjectList__rosidl_typesupport_introspection_c__ExternalObjectList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ExternalObjectList__rosidl_typesupport_introspection_c__ExternalObjectList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
