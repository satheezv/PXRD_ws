// Generated by gencpp from file pxrd_msgs/PxrdCommand.msg
// DO NOT EDIT!


#ifndef PXRD_MSGS_MESSAGE_PXRDCOMMAND_H
#define PXRD_MSGS_MESSAGE_PXRDCOMMAND_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pxrd_msgs
{
template <class ContainerAllocator>
struct PxrdCommand_
{
  typedef PxrdCommand_<ContainerAllocator> Type;

  PxrdCommand_()
    : pxrd_command(0)  {
    }
  PxrdCommand_(const ContainerAllocator& _alloc)
    : pxrd_command(0)  {
  (void)_alloc;
    }



   typedef int32_t _pxrd_command_type;
  _pxrd_command_type pxrd_command;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(LAUNCH_PROGRAM)
  #undef LAUNCH_PROGRAM
#endif
#if defined(_WIN32) && defined(TAKE_TIME_STAMP)
  #undef TAKE_TIME_STAMP
#endif
#if defined(_WIN32) && defined(EXECUTE)
  #undef EXECUTE
#endif
#if defined(_WIN32) && defined(TERMINATE)
  #undef TERMINATE
#endif

  enum {
    LAUNCH_PROGRAM = 0,
    TAKE_TIME_STAMP = 1,
    EXECUTE = 2,
    TERMINATE = 4,
  };


  typedef boost::shared_ptr< ::pxrd_msgs::PxrdCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pxrd_msgs::PxrdCommand_<ContainerAllocator> const> ConstPtr;

}; // struct PxrdCommand_

typedef ::pxrd_msgs::PxrdCommand_<std::allocator<void> > PxrdCommand;

typedef boost::shared_ptr< ::pxrd_msgs::PxrdCommand > PxrdCommandPtr;
typedef boost::shared_ptr< ::pxrd_msgs::PxrdCommand const> PxrdCommandConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pxrd_msgs::PxrdCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pxrd_msgs::PxrdCommand_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::pxrd_msgs::PxrdCommand_<ContainerAllocator1> & lhs, const ::pxrd_msgs::PxrdCommand_<ContainerAllocator2> & rhs)
{
  return lhs.pxrd_command == rhs.pxrd_command;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::pxrd_msgs::PxrdCommand_<ContainerAllocator1> & lhs, const ::pxrd_msgs::PxrdCommand_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace pxrd_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::pxrd_msgs::PxrdCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pxrd_msgs::PxrdCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pxrd_msgs::PxrdCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pxrd_msgs::PxrdCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pxrd_msgs::PxrdCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pxrd_msgs::PxrdCommand_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pxrd_msgs::PxrdCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4215983bfc493fcb5359a6580eba4c41";
  }

  static const char* value(const ::pxrd_msgs::PxrdCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4215983bfc493fcbULL;
  static const uint64_t static_value2 = 0x5359a6580eba4c41ULL;
};

template<class ContainerAllocator>
struct DataType< ::pxrd_msgs::PxrdCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pxrd_msgs/PxrdCommand";
  }

  static const char* value(const ::pxrd_msgs::PxrdCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pxrd_msgs::PxrdCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 LAUNCH_PROGRAM = 0\n"
"int32 TAKE_TIME_STAMP = 1\n"
"int32 EXECUTE = 2\n"
"int32 TERMINATE = 4\n"
"\n"
"int32 pxrd_command\n"
;
  }

  static const char* value(const ::pxrd_msgs::PxrdCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pxrd_msgs::PxrdCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pxrd_command);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PxrdCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pxrd_msgs::PxrdCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pxrd_msgs::PxrdCommand_<ContainerAllocator>& v)
  {
    s << indent << "pxrd_command: ";
    Printer<int32_t>::stream(s, indent + "  ", v.pxrd_command);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PXRD_MSGS_MESSAGE_PXRDCOMMAND_H
