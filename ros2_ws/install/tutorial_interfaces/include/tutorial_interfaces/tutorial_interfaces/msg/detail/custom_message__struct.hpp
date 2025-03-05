// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tutorial_interfaces:msg/CustomMessage.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_HPP_
#define TUTORIAL_INTERFACES__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tutorial_interfaces__msg__CustomMessage __attribute__((deprecated))
#else
# define DEPRECATED__tutorial_interfaces__msg__CustomMessage __declspec(deprecated)
#endif

namespace tutorial_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CustomMessage_
{
  using Type = CustomMessage_<ContainerAllocator>;

  explicit CustomMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->text = "";
      this->number = 0l;
      this->flag = false;
    }
  }

  explicit CustomMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : text(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->text = "";
      this->number = 0l;
      this->flag = false;
    }
  }

  // field types and members
  using _text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _text_type text;
  using _number_type =
    int32_t;
  _number_type number;
  using _flag_type =
    bool;
  _flag_type flag;

  // setters for named parameter idiom
  Type & set__text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->text = _arg;
    return *this;
  }
  Type & set__number(
    const int32_t & _arg)
  {
    this->number = _arg;
    return *this;
  }
  Type & set__flag(
    const bool & _arg)
  {
    this->flag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tutorial_interfaces::msg::CustomMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const tutorial_interfaces::msg::CustomMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tutorial_interfaces::msg::CustomMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tutorial_interfaces::msg::CustomMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::msg::CustomMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::msg::CustomMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::msg::CustomMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::msg::CustomMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tutorial_interfaces::msg::CustomMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tutorial_interfaces::msg::CustomMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tutorial_interfaces__msg__CustomMessage
    std::shared_ptr<tutorial_interfaces::msg::CustomMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tutorial_interfaces__msg__CustomMessage
    std::shared_ptr<tutorial_interfaces::msg::CustomMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomMessage_ & other) const
  {
    if (this->text != other.text) {
      return false;
    }
    if (this->number != other.number) {
      return false;
    }
    if (this->flag != other.flag) {
      return false;
    }
    return true;
  }
  bool operator!=(const CustomMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomMessage_

// alias to use template instance with default allocator
using CustomMessage =
  tutorial_interfaces::msg::CustomMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_HPP_
