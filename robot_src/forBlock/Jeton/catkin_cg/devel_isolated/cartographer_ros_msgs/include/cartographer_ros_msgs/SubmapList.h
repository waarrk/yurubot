// Generated by gencpp from file cartographer_ros_msgs/SubmapList.msg
// DO NOT EDIT!


#ifndef CARTOGRAPHER_ROS_MSGS_MESSAGE_SUBMAPLIST_H
#define CARTOGRAPHER_ROS_MSGS_MESSAGE_SUBMAPLIST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <cartographer_ros_msgs/SubmapEntry.h>

namespace cartographer_ros_msgs
{
template <class ContainerAllocator>
struct SubmapList_
{
  typedef SubmapList_<ContainerAllocator> Type;

  SubmapList_()
    : header()
    , submap()  {
    }
  SubmapList_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , submap(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::cartographer_ros_msgs::SubmapEntry_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::cartographer_ros_msgs::SubmapEntry_<ContainerAllocator> >::other >  _submap_type;
  _submap_type submap;





  typedef boost::shared_ptr< ::cartographer_ros_msgs::SubmapList_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cartographer_ros_msgs::SubmapList_<ContainerAllocator> const> ConstPtr;

}; // struct SubmapList_

typedef ::cartographer_ros_msgs::SubmapList_<std::allocator<void> > SubmapList;

typedef boost::shared_ptr< ::cartographer_ros_msgs::SubmapList > SubmapListPtr;
typedef boost::shared_ptr< ::cartographer_ros_msgs::SubmapList const> SubmapListConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cartographer_ros_msgs::SubmapList_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cartographer_ros_msgs::SubmapList_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cartographer_ros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'cartographer_ros_msgs': ['/home/jetson/catkin_cg/src/cartographer_ros/cartographer_ros_msgs/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cartographer_ros_msgs::SubmapList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cartographer_ros_msgs::SubmapList_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cartographer_ros_msgs::SubmapList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cartographer_ros_msgs::SubmapList_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cartographer_ros_msgs::SubmapList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cartographer_ros_msgs::SubmapList_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cartographer_ros_msgs::SubmapList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6efe809c4a0e69266aa99b3bea531f2a";
  }

  static const char* value(const ::cartographer_ros_msgs::SubmapList_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6efe809c4a0e6926ULL;
  static const uint64_t static_value2 = 0x6aa99b3bea531f2aULL;
};

template<class ContainerAllocator>
struct DataType< ::cartographer_ros_msgs::SubmapList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cartographer_ros_msgs/SubmapList";
  }

  static const char* value(const ::cartographer_ros_msgs::SubmapList_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cartographer_ros_msgs::SubmapList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Copyright 2016 The Cartographer Authors\n"
"#\n"
"# Licensed under the Apache License, Version 2.0 (the \"License\");\n"
"# you may not use this file except in compliance with the License.\n"
"# You may obtain a copy of the License at\n"
"#\n"
"#      http://www.apache.org/licenses/LICENSE-2.0\n"
"#\n"
"# Unless required by applicable law or agreed to in writing, software\n"
"# distributed under the License is distributed on an \"AS IS\" BASIS,\n"
"# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n"
"# See the License for the specific language governing permissions and\n"
"# limitations under the License.\n"
"\n"
"std_msgs/Header header\n"
"cartographer_ros_msgs/SubmapEntry[] submap\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: cartographer_ros_msgs/SubmapEntry\n"
"# Copyright 2016 The Cartographer Authors\n"
"#\n"
"# Licensed under the Apache License, Version 2.0 (the \"License\");\n"
"# you may not use this file except in compliance with the License.\n"
"# You may obtain a copy of the License at\n"
"#\n"
"#      http://www.apache.org/licenses/LICENSE-2.0\n"
"#\n"
"# Unless required by applicable law or agreed to in writing, software\n"
"# distributed under the License is distributed on an \"AS IS\" BASIS,\n"
"# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n"
"# See the License for the specific language governing permissions and\n"
"# limitations under the License.\n"
"\n"
"int32 trajectory_id\n"
"int32 submap_index\n"
"int32 submap_version\n"
"geometry_msgs/Pose pose\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::cartographer_ros_msgs::SubmapList_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cartographer_ros_msgs::SubmapList_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.submap);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SubmapList_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cartographer_ros_msgs::SubmapList_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cartographer_ros_msgs::SubmapList_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "submap[]" << std::endl;
    for (size_t i = 0; i < v.submap.size(); ++i)
    {
      s << indent << "  submap[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::cartographer_ros_msgs::SubmapEntry_<ContainerAllocator> >::stream(s, indent + "    ", v.submap[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CARTOGRAPHER_ROS_MSGS_MESSAGE_SUBMAPLIST_H
