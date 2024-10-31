// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from carma_v2x_msgs:msg/TrafficControlSchedule.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "carma_v2x_msgs/msg/detail/traffic_control_schedule__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace carma_v2x_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TrafficControlSchedule_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) carma_v2x_msgs::msg::TrafficControlSchedule(_init);
}

void TrafficControlSchedule_fini_function(void * message_memory)
{
  auto typed_message = static_cast<carma_v2x_msgs::msg::TrafficControlSchedule *>(message_memory);
  typed_message->~TrafficControlSchedule();
}

size_t size_function__TrafficControlSchedule__between(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<carma_v2x_msgs::msg::DailySchedule> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrafficControlSchedule__between(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<carma_v2x_msgs::msg::DailySchedule> *>(untyped_member);
  return &member[index];
}

void * get_function__TrafficControlSchedule__between(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<carma_v2x_msgs::msg::DailySchedule> *>(untyped_member);
  return &member[index];
}

void resize_function__TrafficControlSchedule__between(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<carma_v2x_msgs::msg::DailySchedule> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrafficControlSchedule_message_member_array[9] = {
  {
    "start",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs::msg::TrafficControlSchedule, start),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "end",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs::msg::TrafficControlSchedule, end),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "end_exists",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs::msg::TrafficControlSchedule, end_exists),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dow",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<j2735_v2x_msgs::msg::DayOfWeek>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs::msg::TrafficControlSchedule, dow),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dow_exists",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs::msg::TrafficControlSchedule, dow_exists),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "between",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<carma_v2x_msgs::msg::DailySchedule>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs::msg::TrafficControlSchedule, between),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrafficControlSchedule__between,  // size() function pointer
    get_const_function__TrafficControlSchedule__between,  // get_const(index) function pointer
    get_function__TrafficControlSchedule__between,  // get(index) function pointer
    resize_function__TrafficControlSchedule__between  // resize(index) function pointer
  },
  {
    "between_exists",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs::msg::TrafficControlSchedule, between_exists),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "repeat",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<carma_v2x_msgs::msg::RepeatParams>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs::msg::TrafficControlSchedule, repeat),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "repeat_exists",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_v2x_msgs::msg::TrafficControlSchedule, repeat_exists),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrafficControlSchedule_message_members = {
  "carma_v2x_msgs::msg",  // message namespace
  "TrafficControlSchedule",  // message name
  9,  // number of fields
  sizeof(carma_v2x_msgs::msg::TrafficControlSchedule),
  TrafficControlSchedule_message_member_array,  // message members
  TrafficControlSchedule_init_function,  // function to initialize message memory (memory has to be allocated)
  TrafficControlSchedule_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrafficControlSchedule_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrafficControlSchedule_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace carma_v2x_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_v2x_msgs::msg::TrafficControlSchedule>()
{
  return &::carma_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::TrafficControlSchedule_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, carma_v2x_msgs, msg, TrafficControlSchedule)() {
  return &::carma_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::TrafficControlSchedule_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
