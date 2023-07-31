// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_msgs:msg/LightBarIndicatorControllers.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_msgs/msg/detail/light_bar_indicator_controllers__rosidl_typesupport_introspection_c.h"
#include "carma_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_msgs/msg/detail/light_bar_indicator_controllers__functions.h"
#include "carma_msgs/msg/detail/light_bar_indicator_controllers__struct.h"


// Include directives for member types
// Member `green_solid_owner`
// Member `green_flash_owner`
// Member `yellow_sides_owner`
// Member `yellow_dim_owner`
// Member `yellow_flash_owner`
// Member `yellow_arrow_left_owner`
// Member `yellow_arrow_right_owner`
// Member `yellow_arrow_out_owner`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LightBarIndicatorControllers__rosidl_typesupport_introspection_c__LightBarIndicatorControllers_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_msgs__msg__LightBarIndicatorControllers__init(message_memory);
}

void LightBarIndicatorControllers__rosidl_typesupport_introspection_c__LightBarIndicatorControllers_fini_function(void * message_memory)
{
  carma_msgs__msg__LightBarIndicatorControllers__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LightBarIndicatorControllers__rosidl_typesupport_introspection_c__LightBarIndicatorControllers_message_member_array[8] = {
  {
    "green_solid_owner",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs__msg__LightBarIndicatorControllers, green_solid_owner),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "green_flash_owner",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs__msg__LightBarIndicatorControllers, green_flash_owner),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yellow_sides_owner",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs__msg__LightBarIndicatorControllers, yellow_sides_owner),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yellow_dim_owner",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs__msg__LightBarIndicatorControllers, yellow_dim_owner),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yellow_flash_owner",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs__msg__LightBarIndicatorControllers, yellow_flash_owner),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yellow_arrow_left_owner",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs__msg__LightBarIndicatorControllers, yellow_arrow_left_owner),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yellow_arrow_right_owner",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs__msg__LightBarIndicatorControllers, yellow_arrow_right_owner),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yellow_arrow_out_owner",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs__msg__LightBarIndicatorControllers, yellow_arrow_out_owner),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LightBarIndicatorControllers__rosidl_typesupport_introspection_c__LightBarIndicatorControllers_message_members = {
  "carma_msgs__msg",  // message namespace
  "LightBarIndicatorControllers",  // message name
  8,  // number of fields
  sizeof(carma_msgs__msg__LightBarIndicatorControllers),
  LightBarIndicatorControllers__rosidl_typesupport_introspection_c__LightBarIndicatorControllers_message_member_array,  // message members
  LightBarIndicatorControllers__rosidl_typesupport_introspection_c__LightBarIndicatorControllers_init_function,  // function to initialize message memory (memory has to be allocated)
  LightBarIndicatorControllers__rosidl_typesupport_introspection_c__LightBarIndicatorControllers_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LightBarIndicatorControllers__rosidl_typesupport_introspection_c__LightBarIndicatorControllers_message_type_support_handle = {
  0,
  &LightBarIndicatorControllers__rosidl_typesupport_introspection_c__LightBarIndicatorControllers_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, msg, LightBarIndicatorControllers)() {
  if (!LightBarIndicatorControllers__rosidl_typesupport_introspection_c__LightBarIndicatorControllers_message_type_support_handle.typesupport_identifier) {
    LightBarIndicatorControllers__rosidl_typesupport_introspection_c__LightBarIndicatorControllers_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LightBarIndicatorControllers__rosidl_typesupport_introspection_c__LightBarIndicatorControllers_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
