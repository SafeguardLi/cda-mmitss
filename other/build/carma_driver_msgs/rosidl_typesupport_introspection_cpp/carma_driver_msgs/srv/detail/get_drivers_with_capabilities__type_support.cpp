// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from carma_driver_msgs:srv/GetDriversWithCapabilities.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "carma_driver_msgs/srv/detail/get_drivers_with_capabilities__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace carma_driver_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetDriversWithCapabilities_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) carma_driver_msgs::srv::GetDriversWithCapabilities_Request(_init);
}

void GetDriversWithCapabilities_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<carma_driver_msgs::srv::GetDriversWithCapabilities_Request *>(message_memory);
  typed_message->~GetDriversWithCapabilities_Request();
}

size_t size_function__GetDriversWithCapabilities_Request__capabilities(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetDriversWithCapabilities_Request__capabilities(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__GetDriversWithCapabilities_Request__capabilities(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__GetDriversWithCapabilities_Request__capabilities(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetDriversWithCapabilities_Request_message_member_array[1] = {
  {
    "capabilities",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs::srv::GetDriversWithCapabilities_Request, capabilities),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetDriversWithCapabilities_Request__capabilities,  // size() function pointer
    get_const_function__GetDriversWithCapabilities_Request__capabilities,  // get_const(index) function pointer
    get_function__GetDriversWithCapabilities_Request__capabilities,  // get(index) function pointer
    resize_function__GetDriversWithCapabilities_Request__capabilities  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetDriversWithCapabilities_Request_message_members = {
  "carma_driver_msgs::srv",  // message namespace
  "GetDriversWithCapabilities_Request",  // message name
  1,  // number of fields
  sizeof(carma_driver_msgs::srv::GetDriversWithCapabilities_Request),
  GetDriversWithCapabilities_Request_message_member_array,  // message members
  GetDriversWithCapabilities_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetDriversWithCapabilities_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetDriversWithCapabilities_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetDriversWithCapabilities_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace carma_driver_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_driver_msgs::srv::GetDriversWithCapabilities_Request>()
{
  return &::carma_driver_msgs::srv::rosidl_typesupport_introspection_cpp::GetDriversWithCapabilities_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, carma_driver_msgs, srv, GetDriversWithCapabilities_Request)() {
  return &::carma_driver_msgs::srv::rosidl_typesupport_introspection_cpp::GetDriversWithCapabilities_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "carma_driver_msgs/srv/detail/get_drivers_with_capabilities__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace carma_driver_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetDriversWithCapabilities_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) carma_driver_msgs::srv::GetDriversWithCapabilities_Response(_init);
}

void GetDriversWithCapabilities_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<carma_driver_msgs::srv::GetDriversWithCapabilities_Response *>(message_memory);
  typed_message->~GetDriversWithCapabilities_Response();
}

size_t size_function__GetDriversWithCapabilities_Response__driver_data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetDriversWithCapabilities_Response__driver_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__GetDriversWithCapabilities_Response__driver_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__GetDriversWithCapabilities_Response__driver_data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetDriversWithCapabilities_Response_message_member_array[1] = {
  {
    "driver_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs::srv::GetDriversWithCapabilities_Response, driver_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetDriversWithCapabilities_Response__driver_data,  // size() function pointer
    get_const_function__GetDriversWithCapabilities_Response__driver_data,  // get_const(index) function pointer
    get_function__GetDriversWithCapabilities_Response__driver_data,  // get(index) function pointer
    resize_function__GetDriversWithCapabilities_Response__driver_data  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetDriversWithCapabilities_Response_message_members = {
  "carma_driver_msgs::srv",  // message namespace
  "GetDriversWithCapabilities_Response",  // message name
  1,  // number of fields
  sizeof(carma_driver_msgs::srv::GetDriversWithCapabilities_Response),
  GetDriversWithCapabilities_Response_message_member_array,  // message members
  GetDriversWithCapabilities_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetDriversWithCapabilities_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetDriversWithCapabilities_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetDriversWithCapabilities_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace carma_driver_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<carma_driver_msgs::srv::GetDriversWithCapabilities_Response>()
{
  return &::carma_driver_msgs::srv::rosidl_typesupport_introspection_cpp::GetDriversWithCapabilities_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, carma_driver_msgs, srv, GetDriversWithCapabilities_Response)() {
  return &::carma_driver_msgs::srv::rosidl_typesupport_introspection_cpp::GetDriversWithCapabilities_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "carma_driver_msgs/srv/detail/get_drivers_with_capabilities__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace carma_driver_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetDriversWithCapabilities_service_members = {
  "carma_driver_msgs::srv",  // service namespace
  "GetDriversWithCapabilities",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<carma_driver_msgs::srv::GetDriversWithCapabilities>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GetDriversWithCapabilities_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetDriversWithCapabilities_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace carma_driver_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<carma_driver_msgs::srv::GetDriversWithCapabilities>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::carma_driver_msgs::srv::rosidl_typesupport_introspection_cpp::GetDriversWithCapabilities_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::carma_driver_msgs::srv::GetDriversWithCapabilities_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::carma_driver_msgs::srv::GetDriversWithCapabilities_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, carma_driver_msgs, srv, GetDriversWithCapabilities)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<carma_driver_msgs::srv::GetDriversWithCapabilities>();
}

#ifdef __cplusplus
}
#endif
