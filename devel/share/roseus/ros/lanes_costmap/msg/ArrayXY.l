;; Auto-generated. Do not edit!


(when (boundp 'lanes_costmap::ArrayXY)
  (if (not (find-package "LANES_COSTMAP"))
    (make-package "LANES_COSTMAP"))
  (shadow 'ArrayXY (find-package "LANES_COSTMAP")))
(unless (find-package "LANES_COSTMAP::ARRAYXY")
  (make-package "LANES_COSTMAP::ARRAYXY"))

(in-package "ROS")
;;//! \htmlinclude ArrayXY.msg.html


(defclass lanes_costmap::ArrayXY
  :super ros::object
  :slots (_x _y ))

(defmethod lanes_costmap::ArrayXY
  (:init
   (&key
    ((:x __x) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:y __y) (make-array 0 :initial-element 0.0 :element-type :float))
    )
   (send-super :init)
   (setq _x __x)
   (setq _y __y)
   self)
  (:x
   (&optional __x)
   (if __x (setq _x __x)) _x)
  (:y
   (&optional __y)
   (if __y (setq _y __y)) _y)
  (:serialization-length
   ()
   (+
    ;; float32[] _x
    (* 4    (length _x)) 4
    ;; float32[] _y
    (* 4    (length _y)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32[] _x
     (write-long (length _x) s)
     (dotimes (i (length _x))
       (sys::poke (elt _x i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _y
     (write-long (length _y) s)
     (dotimes (i (length _y))
       (sys::poke (elt _y i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32[] _x
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _x (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _x i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _y
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _y (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _y i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;;
   self)
  )

(setf (get lanes_costmap::ArrayXY :md5sum-) "462ac0ba687f22c2e73c0ec0413e0202")
(setf (get lanes_costmap::ArrayXY :datatype-) "lanes_costmap/ArrayXY")
(setf (get lanes_costmap::ArrayXY :definition-)
      "float32[] x
float32[] y
")



(provide :lanes_costmap/ArrayXY "462ac0ba687f22c2e73c0ec0413e0202")


