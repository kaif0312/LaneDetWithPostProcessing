#!/usr/bin/python3

import rospy
from sensor_msgs.msg import Image
import cv2
from cv_bridge import CvBridge


def main():
    rospy.init_node("dummy_publisher")
    
    #Publishers
    binary_image_pub = rospy.Publisher("bolt/lanes_binary", Image, queue_size=2)
    
    bin_img = cv2.imread("/home/kallrax/abhiyaan_ws/bolt_ws/src/lanes_costmap/images/left0002.jpg")
    image_message = CvBridge().cv2_to_imgmsg(bin_img,encoding="rgb8")
    
    rate = rospy.Rate(30)
    
    while(not rospy.is_shutdown()):
        binary_image_pub.publish(image_message)
        rate.sleep()
    
if __name__ == "__main__":
    main()