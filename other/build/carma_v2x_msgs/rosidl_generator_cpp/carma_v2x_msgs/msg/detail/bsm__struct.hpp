// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_v2x_msgs:msg/BSM.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__BSM__STRUCT_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__BSM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'core_data'
#include "carma_v2x_msgs/msg/detail/bsm_core_data__struct.hpp"
// Member 'part_ii'
#include "carma_v2x_msgs/msg/detail/bsm_part_ii_extension__struct.hpp"
// Member 'regional'
#include "carma_v2x_msgs/msg/detail/bsm_regional_extension__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_v2x_msgs__msg__BSM __attribute__((deprecated))
#else
# define DEPRECATED__carma_v2x_msgs__msg__BSM __declspec(deprecated)
#endif

namespace carma_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BSM_
{
  using Type = BSM_<ContainerAllocator>;

  explicit BSM_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    core_data(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  explicit BSM_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    core_data(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _core_data_type =
    carma_v2x_msgs::msg::BSMCoreData_<ContainerAllocator>;
  _core_data_type core_data;
  using _presence_vector_type =
    uint8_t;
  _presence_vector_type presence_vector;
  using _part_ii_type =
    std::vector<carma_v2x_msgs::msg::BSMPartIIExtension_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::BSMPartIIExtension_<ContainerAllocator>>::other>;
  _part_ii_type part_ii;
  using _regional_type =
    std::vector<carma_v2x_msgs::msg::BSMRegionalExtension_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::BSMRegionalExtension_<ContainerAllocator>>::other>;
  _regional_type regional;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__core_data(
    const carma_v2x_msgs::msg::BSMCoreData_<ContainerAllocator> & _arg)
  {
    this->core_data = _arg;
    return *this;
  }
  Type & set__presence_vector(
    const uint8_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__part_ii(
    const std::vector<carma_v2x_msgs::msg::BSMPartIIExtension_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::BSMPartIIExtension_<ContainerAllocator>>::other> & _arg)
  {
    this->part_ii = _arg;
    return *this;
  }
  Type & set__regional(
    const std::vector<carma_v2x_msgs::msg::BSMRegionalExtension_<ContainerAllocator>, typename ContainerAllocator::template rebind<carma_v2x_msgs::msg::BSMRegionalExtension_<ContainerAllocator>>::other> & _arg)
  {
    this->regional = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t HAS_PART_II =
    1u;
  static constexpr uint8_t HAS_REGIONAL =
    2u;
  static constexpr uint8_t PART_II_MIN_SIZE =
    1u;
  static constexpr uint8_t PART_II_MAX_SIZE =
    8u;
  static constexpr uint8_t REGIONAL_MIN_SIZE =
    1u;
  static constexpr uint8_t REGIONAL_MAX_SIZE =
    4u;

  // pointer types
  using RawPtr =
    carma_v2x_msgs::msg::BSM_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_v2x_msgs::msg::BSM_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::BSM_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_v2x_msgs::msg::BSM_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::BSM_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::BSM_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_v2x_msgs::msg::BSM_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_v2x_msgs::msg::BSM_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::BSM_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_v2x_msgs::msg::BSM_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_v2x_msgs__msg__BSM
    std::shared_ptr<carma_v2x_msgs::msg::BSM_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_v2x_msgs__msg__BSM
    std::shared_ptr<carma_v2x_msgs::msg::BSM_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BSM_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->core_data != other.core_data) {
      return false;
    }
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->part_ii != other.part_ii) {
      return false;
    }
    if (this->regional != other.regional) {
      return false;
    }
    return true;
  }
  bool operator!=(const BSM_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BSM_

// alias to use template instance with default allocator
using BSM =
  carma_v2x_msgs::msg::BSM_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t BSM_<ContainerAllocator>::HAS_PART_II;
template<typename ContainerAllocator>
constexpr uint8_t BSM_<ContainerAllocator>::HAS_REGIONAL;
template<typename ContainerAllocator>
constexpr uint8_t BSM_<ContainerAllocator>::PART_II_MIN_SIZE;
template<typename ContainerAllocator>
constexpr uint8_t BSM_<ContainerAllocator>::PART_II_MAX_SIZE;
template<typename ContainerAllocator>
constexpr uint8_t BSM_<ContainerAllocator>::REGIONAL_MIN_SIZE;
template<typename ContainerAllocator>
constexpr uint8_t BSM_<ContainerAllocator>::REGIONAL_MAX_SIZE;

}  // namespace msg

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__BSM__STRUCT_HPP_
