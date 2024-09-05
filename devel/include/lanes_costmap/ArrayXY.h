// Generated by gencpp from file lanes_costmap/ArrayXY.msg
// DO NOT EDIT!


#ifndef LANES_COSTMAP_MESSAGE_ARRAYXY_H
#define LANES_COSTMAP_MESSAGE_ARRAYXY_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace lanes_costmap
{
template <class ContainerAllocator>
struct ArrayXY_
{
  typedef ArrayXY_<ContainerAllocator> Type;

  ArrayXY_()
    : x()
    , y()  {
    }
  ArrayXY_(const ContainerAllocator& _alloc)
    : x(_alloc)
    , y(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _x_type;
  _x_type x;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _y_type;
  _y_type y;





  typedef boost::shared_ptr< ::lanes_costmap::ArrayXY_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::lanes_costmap::ArrayXY_<ContainerAllocator> const> ConstPtr;

}; // struct ArrayXY_

typedef ::lanes_costmap::ArrayXY_<std::allocator<void> > ArrayXY;

typedef boost::shared_ptr< ::lanes_costmap::ArrayXY > ArrayXYPtr;
typedef boost::shared_ptr< ::lanes_costmap::ArrayXY const> ArrayXYConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::lanes_costmap::ArrayXY_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::lanes_costmap::ArrayXY_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::lanes_costmap::ArrayXY_<ContainerAllocator1> & lhs, const ::lanes_costmap::ArrayXY_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::lanes_costmap::ArrayXY_<ContainerAllocator1> & lhs, const ::lanes_costmap::ArrayXY_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace lanes_costmap

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::lanes_costmap::ArrayXY_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lanes_costmap::ArrayXY_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lanes_costmap::ArrayXY_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lanes_costmap::ArrayXY_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lanes_costmap::ArrayXY_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lanes_costmap::ArrayXY_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::lanes_costmap::ArrayXY_<ContainerAllocator> >
{
  static const char* value()
  {
    return "462ac0ba687f22c2e73c0ec0413e0202";
  }

  static const char* value(const ::lanes_costmap::ArrayXY_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x462ac0ba687f22c2ULL;
  static const uint64_t static_value2 = 0xe73c0ec0413e0202ULL;
};

template<class ContainerAllocator>
struct DataType< ::lanes_costmap::ArrayXY_<ContainerAllocator> >
{
  static const char* value()
  {
    return "lanes_costmap/ArrayXY";
  }

  static const char* value(const ::lanes_costmap::ArrayXY_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::lanes_costmap::ArrayXY_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[] x\n"
"float32[] y\n"
;
  }

  static const char* value(const ::lanes_costmap::ArrayXY_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::lanes_costmap::ArrayXY_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ArrayXY_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::lanes_costmap::ArrayXY_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::lanes_costmap::ArrayXY_<ContainerAllocator>& v)
  {
    s << indent << "x[]" << std::endl;
    for (size_t i = 0; i < v.x.size(); ++i)
    {
      s << indent << "  x[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.x[i]);
    }
    s << indent << "y[]" << std::endl;
    for (size_t i = 0; i < v.y.size(); ++i)
    {
      s << indent << "  y[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.y[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // LANES_COSTMAP_MESSAGE_ARRAYXY_H
