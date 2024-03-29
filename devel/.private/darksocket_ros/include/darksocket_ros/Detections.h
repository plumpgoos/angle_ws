// Generated by gencpp from file darksocket_ros/Detections.msg
// DO NOT EDIT!


#ifndef DARKSOCKET_ROS_MESSAGE_DETECTIONS_H
#define DARKSOCKET_ROS_MESSAGE_DETECTIONS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <darknet_ros_msgs/BoundingBox.h>
#include <sensor_msgs/Image.h>

namespace darksocket_ros
{
template <class ContainerAllocator>
struct Detections_
{
  typedef Detections_<ContainerAllocator> Type;

  Detections_()
    : bboxes()
    , image()  {
    }
  Detections_(const ContainerAllocator& _alloc)
    : bboxes(_alloc)
    , image(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::darknet_ros_msgs::BoundingBox_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::darknet_ros_msgs::BoundingBox_<ContainerAllocator> >::other >  _bboxes_type;
  _bboxes_type bboxes;

   typedef  ::sensor_msgs::Image_<ContainerAllocator>  _image_type;
  _image_type image;





  typedef boost::shared_ptr< ::darksocket_ros::Detections_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::darksocket_ros::Detections_<ContainerAllocator> const> ConstPtr;

}; // struct Detections_

typedef ::darksocket_ros::Detections_<std::allocator<void> > Detections;

typedef boost::shared_ptr< ::darksocket_ros::Detections > DetectionsPtr;
typedef boost::shared_ptr< ::darksocket_ros::Detections const> DetectionsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::darksocket_ros::Detections_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::darksocket_ros::Detections_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace darksocket_ros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'darksocket_ros': ['/home/fri/angle_ws/src/darksocket/msg'], 'darknet_ros_msgs': ['/home/fri/angle_ws/src/darknet_ros/darknet_ros_msgs/msg', '/home/fri/angle_ws/devel/.private/darknet_ros_msgs/share/darknet_ros_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::darksocket_ros::Detections_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::darksocket_ros::Detections_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::darksocket_ros::Detections_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::darksocket_ros::Detections_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::darksocket_ros::Detections_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::darksocket_ros::Detections_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::darksocket_ros::Detections_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f0534fb1602229b8d963c796434fa6da";
  }

  static const char* value(const ::darksocket_ros::Detections_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf0534fb1602229b8ULL;
  static const uint64_t static_value2 = 0xd963c796434fa6daULL;
};

template<class ContainerAllocator>
struct DataType< ::darksocket_ros::Detections_<ContainerAllocator> >
{
  static const char* value()
  {
    return "darksocket_ros/Detections";
  }

  static const char* value(const ::darksocket_ros::Detections_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::darksocket_ros::Detections_<ContainerAllocator> >
{
  static const char* value()
  {
    return "darknet_ros_msgs/BoundingBox[] bboxes\n\
sensor_msgs/Image image\n\
\n\
================================================================================\n\
MSG: darknet_ros_msgs/BoundingBox\n\
float64 probability\n\
int64 xmin\n\
int64 ymin\n\
int64 xmax\n\
int64 ymax\n\
int16 id\n\
string Class\n\
\n\
================================================================================\n\
MSG: sensor_msgs/Image\n\
# This message contains an uncompressed image\n\
# (0, 0) is at top-left corner of image\n\
#\n\
\n\
Header header        # Header timestamp should be acquisition time of image\n\
                     # Header frame_id should be optical frame of camera\n\
                     # origin of frame should be optical center of camera\n\
                     # +x should point to the right in the image\n\
                     # +y should point down in the image\n\
                     # +z should point into to plane of the image\n\
                     # If the frame_id here and the frame_id of the CameraInfo\n\
                     # message associated with the image conflict\n\
                     # the behavior is undefined\n\
\n\
uint32 height         # image height, that is, number of rows\n\
uint32 width          # image width, that is, number of columns\n\
\n\
# The legal values for encoding are in file src/image_encodings.cpp\n\
# If you want to standardize a new string format, join\n\
# ros-users@lists.sourceforge.net and send an email proposing a new encoding.\n\
\n\
string encoding       # Encoding of pixels -- channel meaning, ordering, size\n\
                      # taken from the list of strings in include/sensor_msgs/image_encodings.h\n\
\n\
uint8 is_bigendian    # is this data bigendian?\n\
uint32 step           # Full row length in bytes\n\
uint8[] data          # actual matrix data, size is (step * rows)\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::darksocket_ros::Detections_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::darksocket_ros::Detections_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.bboxes);
      stream.next(m.image);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Detections_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::darksocket_ros::Detections_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::darksocket_ros::Detections_<ContainerAllocator>& v)
  {
    s << indent << "bboxes[]" << std::endl;
    for (size_t i = 0; i < v.bboxes.size(); ++i)
    {
      s << indent << "  bboxes[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::darknet_ros_msgs::BoundingBox_<ContainerAllocator> >::stream(s, indent + "    ", v.bboxes[i]);
    }
    s << indent << "image: ";
    s << std::endl;
    Printer< ::sensor_msgs::Image_<ContainerAllocator> >::stream(s, indent + "  ", v.image);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DARKSOCKET_ROS_MESSAGE_DETECTIONS_H
