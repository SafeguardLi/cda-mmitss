// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_v2x_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_v2x_msgs/msg/detail/trajectory__rosidl_typesupport_introspection_c.h"
#include "carma_v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_v2x_msgs/msg/detail/trajectory__functions.h"
#include "carma_v2x_msgs/msg/detail/trajectory__struct.h"


// Include directives for member types
// Member `location`
#include "carma_v2x_msgs/msg/location_ecef.h"
// Member `location`
#include "carma_v2x_msgs/msg/detail/location_ecef__rosidl_typesupport_introspection_c.h"
// Member `offsets`
#include "carma_v2x_msgs/msg/location_offset_ecef.h"
// Member `offsets`
#include "carma_v2x_msgs/msg/detail/location_offset_ecef__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Trajectory__rosidl_typesupport_introspection_c__Trajectory_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_v2x_msgs__msg__Trajectory__init(message_memory);
}

void Trajectory__rosidl_typesupport_introspection_c__Trajectory_fini_function(void * message_memory)
{
  carma_v2x_msgs__msg__Trajectory__fini(message_memory);
}

size_t Trajectory__rosidl_typesupport_introspection_c__size_function__LocationOffsetECEF__offsets(
  const void * untyped_member)
{
  const carma_v2x_msgs__msg__LocationOffsetECEF__Sequence * member =
    (const carma_v2x_msgs__msg__LocationOffsetECEF__Sequence *)(untyped_member);
  return member->size;
}

const void * Trajectory__rosidl_typesupport_introspection_c__get_const_function__LocationOffsetECEF__offsets(
  const void * untyped_member, size_t index)
{
  const carma_v2x_msgs__msg__LocationOffsetECEF__Sequence * member =
    (const carma_v2x_msgs__msg__LocationOffsetECEF__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Trajectory__rosidl_typesupport_introspection_c__get_function__LocationOffsetECEF__offsets(
  void * untyped_member, size_t index)
{
  carma_v2x_msgs__msg__LocationOffsetECEF__Sequence * member =
    (carma_v2x_msgs__msg__LocationOffsetECEF__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Trajectory__rosidl_typesupport_introspection_c__resize_function__LocationOffsetECEF__offsets(
  void * untyped_member, size_t size)
{
  carma_v2x_msgs__msg__LocationOffsetECEF__Sequence * member =
    (carma_v2x_msgs__msg__LocationOffsetECEF__Sequence *)(untyped_member);
  carma_v2x_msgs__msg__LocationOffsetECEF__Sequence__fini(member);
  return carma_v2x_msgs__msg__LocationOffsetECEF__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array[2] = {
  {
    "location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__Trajectory, location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "offsets",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs__msg__Trajectory, offsets),  // bytes offset in struct
    NULL,  // default value
    Trajectory__rosidl_typesupport_introspection_c__size_function__LocationOffsetECEF__offsets,  // size() function pointer
    Trajectory__rosidl_typesupport_introspection_c__get_const_function__LocationOffsetECEF__offsets,  // get_const(index) function pointer
    Trajectory__rosidl_typesupport_introspection_c__get_function__LocationOffsetECEF__offsets,  // get(index) function pointer
    Trajectory__rosidl_typesupport_introspection_c__resize_function__LocationOffsetECEF__offsets  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_members = {
  "carma_v2x_msgs__msg",  // message namespace
  "Trajectory",  // message name
  2,  // number of fields
  sizeof(carma_v2x_msgs__msg__Trajectory),
  Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array,  // message members
  Trajectory__rosidl_typesupport_introspection_c__Trajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  Trajectory__rosidl_typesupport_introspection_c__Trajectory_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_type_support_handle = {
  0,
  &Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, Trajectory)() {
  Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, LocationECEF)();
  Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_v2x_msgs, msg, LocationOffsetECEF)();
  if (!Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_type_support_handle.typesupport_identifier) {
    Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
