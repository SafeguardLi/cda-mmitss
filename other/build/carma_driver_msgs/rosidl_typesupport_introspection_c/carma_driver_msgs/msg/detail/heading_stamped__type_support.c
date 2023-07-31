// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_driver_msgs:msg/HeadingStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_driver_msgs/msg/detail/heading_stamped__rosidl_typesupport_introspection_c.h"
#include "carma_driver_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_driver_msgs/msg/detail/heading_stamped__functions.h"
#include "carma_driver_msgs/msg/detail/heading_stamped__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void HeadingStamped__rosidl_typesupport_introspection_c__HeadingStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_driver_msgs__msg__HeadingStamped__init(message_memory);
}

void HeadingStamped__rosidl_typesupport_introspection_c__HeadingStamped_fini_function(void * message_memory)
{
  carma_driver_msgs__msg__HeadingStamped__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember HeadingStamped__rosidl_typesupport_introspection_c__HeadingStamped_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__msg__HeadingStamped, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__msg__HeadingStamped, heading),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers HeadingStamped__rosidl_typesupport_introspection_c__HeadingStamped_message_members = {
  "carma_driver_msgs__msg",  // message namespace
  "HeadingStamped",  // message name
  2,  // number of fields
  sizeof(carma_driver_msgs__msg__HeadingStamped),
  HeadingStamped__rosidl_typesupport_introspection_c__HeadingStamped_message_member_array,  // message members
  HeadingStamped__rosidl_typesupport_introspection_c__HeadingStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  HeadingStamped__rosidl_typesupport_introspection_c__HeadingStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t HeadingStamped__rosidl_typesupport_introspection_c__HeadingStamped_message_type_support_handle = {
  0,
  &HeadingStamped__rosidl_typesupport_introspection_c__HeadingStamped_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_driver_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, msg, HeadingStamped)() {
  HeadingStamped__rosidl_typesupport_introspection_c__HeadingStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!HeadingStamped__rosidl_typesupport_introspection_c__HeadingStamped_message_type_support_handle.typesupport_identifier) {
    HeadingStamped__rosidl_typesupport_introspection_c__HeadingStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &HeadingStamped__rosidl_typesupport_introspection_c__HeadingStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
