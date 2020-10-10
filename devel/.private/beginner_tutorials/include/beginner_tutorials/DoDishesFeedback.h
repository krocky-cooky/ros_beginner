// Generated by gencpp from file beginner_tutorials/DoDishesFeedback.msg
// DO NOT EDIT!


#ifndef BEGINNER_TUTORIALS_MESSAGE_DODISHESFEEDBACK_H
#define BEGINNER_TUTORIALS_MESSAGE_DODISHESFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace beginner_tutorials
{
template <class ContainerAllocator>
struct DoDishesFeedback_
{
  typedef DoDishesFeedback_<ContainerAllocator> Type;

  DoDishesFeedback_()
    : percent_complete(0.0)  {
    }
  DoDishesFeedback_(const ContainerAllocator& _alloc)
    : percent_complete(0.0)  {
  (void)_alloc;
    }



   typedef float _percent_complete_type;
  _percent_complete_type percent_complete;





  typedef boost::shared_ptr< ::beginner_tutorials::DoDishesFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::beginner_tutorials::DoDishesFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct DoDishesFeedback_

typedef ::beginner_tutorials::DoDishesFeedback_<std::allocator<void> > DoDishesFeedback;

typedef boost::shared_ptr< ::beginner_tutorials::DoDishesFeedback > DoDishesFeedbackPtr;
typedef boost::shared_ptr< ::beginner_tutorials::DoDishesFeedback const> DoDishesFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::beginner_tutorials::DoDishesFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::beginner_tutorials::DoDishesFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::beginner_tutorials::DoDishesFeedback_<ContainerAllocator1> & lhs, const ::beginner_tutorials::DoDishesFeedback_<ContainerAllocator2> & rhs)
{
  return lhs.percent_complete == rhs.percent_complete;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::beginner_tutorials::DoDishesFeedback_<ContainerAllocator1> & lhs, const ::beginner_tutorials::DoDishesFeedback_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace beginner_tutorials

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::beginner_tutorials::DoDishesFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::beginner_tutorials::DoDishesFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::beginner_tutorials::DoDishesFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::beginner_tutorials::DoDishesFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::beginner_tutorials::DoDishesFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::beginner_tutorials::DoDishesFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::beginner_tutorials::DoDishesFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d342375c60a5a58d3bc32664070a1368";
  }

  static const char* value(const ::beginner_tutorials::DoDishesFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd342375c60a5a58dULL;
  static const uint64_t static_value2 = 0x3bc32664070a1368ULL;
};

template<class ContainerAllocator>
struct DataType< ::beginner_tutorials::DoDishesFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "beginner_tutorials/DoDishesFeedback";
  }

  static const char* value(const ::beginner_tutorials::DoDishesFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::beginner_tutorials::DoDishesFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Define a feedback message\n"
"float32 percent_complete\n"
;
  }

  static const char* value(const ::beginner_tutorials::DoDishesFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::beginner_tutorials::DoDishesFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.percent_complete);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DoDishesFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::beginner_tutorials::DoDishesFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::beginner_tutorials::DoDishesFeedback_<ContainerAllocator>& v)
  {
    s << indent << "percent_complete: ";
    Printer<float>::stream(s, indent + "  ", v.percent_complete);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BEGINNER_TUTORIALS_MESSAGE_DODISHESFEEDBACK_H