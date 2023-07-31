// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from j2735_v2x_msgs:msg/PersonalCrossingInProgress.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "j2735_v2x_msgs/msg/detail/personal_crossing_in_progress__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace j2735_v2x_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PersonalCrossingInProgress_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) j2735_v2x_msgs::msg::PersonalCrossingInProgress(_init);
}

void PersonalCrossingInProgress_fini_function(void * message_memory)
{
  auto typed_message = static_cast<j2735_v2x_msgs::msg::PersonalCrossingInProgress *>(message_memory);
  typed_message->~PersonalCrossingInProgress();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PersonalCrossingInProgress_message_member_array[1] = {
  {
    "cross_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs::msg::PersonalCrossingInProgress, cross_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PersonalCrossingInProgress_message_members = {
  "j2735_v2x_msgs::msg",  // message namespace
  "PersonalCrossingInProgress",  // message name
  1,  // number of fields
  sizeof(j2735_v2x_msgs::msg::PersonalCrossingInProgress),
  PersonalCrossingInProgress_message_member_array,  // message members
  PersonalCrossingInProgress_init_function,  // function to initialize message memory (memory has to be allocated)
  PersonalCrossingInProgress_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PersonalCrossingInProgress_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PersonalCrossingInProgress_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace j2735_v2x_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<j2735_v2x_msgs::msg::PersonalCrossingInProgress>()
{
  return &::j2735_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::PersonalCrossingInProgress_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, j2735_v2x_msgs, msg, PersonalCrossingInProgress)() {
  return &::j2735_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::PersonalCrossingInProgress_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
