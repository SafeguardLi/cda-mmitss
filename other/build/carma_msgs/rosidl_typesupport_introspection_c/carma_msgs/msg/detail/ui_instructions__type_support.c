// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_msgs:msg/UIInstructions.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_msgs/msg/detail/ui_instructions__rosidl_typesupport_introspection_c.h"
#include "carma_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_msgs/msg/detail/ui_instructions__functions.h"
#include "carma_msgs/msg/detail/ui_instructions__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `msg`
// Member `response_service`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void UIInstructions__rosidl_typesupport_introspection_c__UIInstructions_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_msgs__msg__UIInstructions__init(message_memory);
}

void UIInstructions__rosidl_typesupport_introspection_c__UIInstructions_fini_function(void * message_memory)
{
  carma_msgs__msg__UIInstructions__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember UIInstructions__rosidl_typesupport_introspection_c__UIInstructions_message_member_array[4] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs__msg__UIInstructions, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs__msg__UIInstructions, msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs__msg__UIInstructions, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "response_service",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs__msg__UIInstructions, response_service),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers UIInstructions__rosidl_typesupport_introspection_c__UIInstructions_message_members = {
  "carma_msgs__msg",  // message namespace
  "UIInstructions",  // message name
  4,  // number of fields
  sizeof(carma_msgs__msg__UIInstructions),
  UIInstructions__rosidl_typesupport_introspection_c__UIInstructions_message_member_array,  // message members
  UIInstructions__rosidl_typesupport_introspection_c__UIInstructions_init_function,  // function to initialize message memory (memory has to be allocated)
  UIInstructions__rosidl_typesupport_introspection_c__UIInstructions_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t UIInstructions__rosidl_typesupport_introspection_c__UIInstructions_message_type_support_handle = {
  0,
  &UIInstructions__rosidl_typesupport_introspection_c__UIInstructions_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, msg, UIInstructions)() {
  UIInstructions__rosidl_typesupport_introspection_c__UIInstructions_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!UIInstructions__rosidl_typesupport_introspection_c__UIInstructions_message_type_support_handle.typesupport_identifier) {
    UIInstructions__rosidl_typesupport_introspection_c__UIInstructions_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &UIInstructions__rosidl_typesupport_introspection_c__UIInstructions_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
