// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from j2735_v2x_msgs:msg/DataParameters.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "j2735_v2x_msgs/msg/detail/data_parameters__rosidl_typesupport_introspection_c.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "j2735_v2x_msgs/msg/detail/data_parameters__functions.h"
#include "j2735_v2x_msgs/msg/detail/data_parameters__struct.h"


// Include directives for member types
// Member `process_method`
// Member `process_agency`
// Member `last_checked_date`
// Member `geoid_used`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DataParameters__rosidl_typesupport_introspection_c__DataParameters_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  j2735_v2x_msgs__msg__DataParameters__init(message_memory);
}

void DataParameters__rosidl_typesupport_introspection_c__DataParameters_fini_function(void * message_memory)
{
  j2735_v2x_msgs__msg__DataParameters__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember DataParameters__rosidl_typesupport_introspection_c__DataParameters_message_member_array[4] = {
  {
    "process_method",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__DataParameters, process_method),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "process_agency",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__DataParameters, process_agency),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_checked_date",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__DataParameters, last_checked_date),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "geoid_used",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs__msg__DataParameters, geoid_used),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DataParameters__rosidl_typesupport_introspection_c__DataParameters_message_members = {
  "j2735_v2x_msgs__msg",  // message namespace
  "DataParameters",  // message name
  4,  // number of fields
  sizeof(j2735_v2x_msgs__msg__DataParameters),
  DataParameters__rosidl_typesupport_introspection_c__DataParameters_message_member_array,  // message members
  DataParameters__rosidl_typesupport_introspection_c__DataParameters_init_function,  // function to initialize message memory (memory has to be allocated)
  DataParameters__rosidl_typesupport_introspection_c__DataParameters_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DataParameters__rosidl_typesupport_introspection_c__DataParameters_message_type_support_handle = {
  0,
  &DataParameters__rosidl_typesupport_introspection_c__DataParameters_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, j2735_v2x_msgs, msg, DataParameters)() {
  if (!DataParameters__rosidl_typesupport_introspection_c__DataParameters_message_type_support_handle.typesupport_identifier) {
    DataParameters__rosidl_typesupport_introspection_c__DataParameters_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DataParameters__rosidl_typesupport_introspection_c__DataParameters_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
