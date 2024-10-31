// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_msgs:msg/CarlaEnabled.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_msgs/msg/detail/carla_enabled__rosidl_typesupport_introspection_c.h"
#include "carma_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_msgs/msg/detail/carla_enabled__functions.h"
#include "carma_msgs/msg/detail/carla_enabled__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void CarlaEnabled__rosidl_typesupport_introspection_c__CarlaEnabled_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_msgs__msg__CarlaEnabled__init(message_memory);
}

void CarlaEnabled__rosidl_typesupport_introspection_c__CarlaEnabled_fini_function(void * message_memory)
{
  carma_msgs__msg__CarlaEnabled__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CarlaEnabled__rosidl_typesupport_introspection_c__CarlaEnabled_message_member_array[1] = {
  {
    "carla_enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs__msg__CarlaEnabled, carla_enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CarlaEnabled__rosidl_typesupport_introspection_c__CarlaEnabled_message_members = {
  "carma_msgs__msg",  // message namespace
  "CarlaEnabled",  // message name
  1,  // number of fields
  sizeof(carma_msgs__msg__CarlaEnabled),
  CarlaEnabled__rosidl_typesupport_introspection_c__CarlaEnabled_message_member_array,  // message members
  CarlaEnabled__rosidl_typesupport_introspection_c__CarlaEnabled_init_function,  // function to initialize message memory (memory has to be allocated)
  CarlaEnabled__rosidl_typesupport_introspection_c__CarlaEnabled_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CarlaEnabled__rosidl_typesupport_introspection_c__CarlaEnabled_message_type_support_handle = {
  0,
  &CarlaEnabled__rosidl_typesupport_introspection_c__CarlaEnabled_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, msg, CarlaEnabled)() {
  if (!CarlaEnabled__rosidl_typesupport_introspection_c__CarlaEnabled_message_type_support_handle.typesupport_identifier) {
    CarlaEnabled__rosidl_typesupport_introspection_c__CarlaEnabled_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CarlaEnabled__rosidl_typesupport_introspection_c__CarlaEnabled_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
