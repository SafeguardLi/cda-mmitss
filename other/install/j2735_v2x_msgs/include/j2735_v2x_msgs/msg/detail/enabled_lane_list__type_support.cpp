// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from j2735_v2x_msgs:msg/EnabledLaneList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "j2735_v2x_msgs/msg/detail/enabled_lane_list__struct.hpp"
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

void EnabledLaneList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) j2735_v2x_msgs::msg::EnabledLaneList(_init);
}

void EnabledLaneList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<j2735_v2x_msgs::msg::EnabledLaneList *>(message_memory);
  typed_message->~EnabledLaneList();
}

size_t size_function__EnabledLaneList__lane_id_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnabledLaneList__lane_id_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__EnabledLaneList__lane_id_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void resize_function__EnabledLaneList__lane_id_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EnabledLaneList_message_member_array[1] = {
  {
    "lane_id_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs::msg::EnabledLaneList, lane_id_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnabledLaneList__lane_id_list,  // size() function pointer
    get_const_function__EnabledLaneList__lane_id_list,  // get_const(index) function pointer
    get_function__EnabledLaneList__lane_id_list,  // get(index) function pointer
    resize_function__EnabledLaneList__lane_id_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EnabledLaneList_message_members = {
  "j2735_v2x_msgs::msg",  // message namespace
  "EnabledLaneList",  // message name
  1,  // number of fields
  sizeof(j2735_v2x_msgs::msg::EnabledLaneList),
  EnabledLaneList_message_member_array,  // message members
  EnabledLaneList_init_function,  // function to initialize message memory (memory has to be allocated)
  EnabledLaneList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EnabledLaneList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EnabledLaneList_message_members,
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
get_message_type_support_handle<j2735_v2x_msgs::msg::EnabledLaneList>()
{
  return &::j2735_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::EnabledLaneList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, j2735_v2x_msgs, msg, EnabledLaneList)() {
  return &::j2735_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::EnabledLaneList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
