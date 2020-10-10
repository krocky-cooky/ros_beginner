;; Auto-generated. Do not edit!


(when (boundp 'beginner_tutorials::DoDishesFeedback)
  (if (not (find-package "BEGINNER_TUTORIALS"))
    (make-package "BEGINNER_TUTORIALS"))
  (shadow 'DoDishesFeedback (find-package "BEGINNER_TUTORIALS")))
(unless (find-package "BEGINNER_TUTORIALS::DODISHESFEEDBACK")
  (make-package "BEGINNER_TUTORIALS::DODISHESFEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude DoDishesFeedback.msg.html


(defclass beginner_tutorials::DoDishesFeedback
  :super ros::object
  :slots (_percent_complete ))

(defmethod beginner_tutorials::DoDishesFeedback
  (:init
   (&key
    ((:percent_complete __percent_complete) 0.0)
    )
   (send-super :init)
   (setq _percent_complete (float __percent_complete))
   self)
  (:percent_complete
   (&optional __percent_complete)
   (if __percent_complete (setq _percent_complete __percent_complete)) _percent_complete)
  (:serialization-length
   ()
   (+
    ;; float32 _percent_complete
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _percent_complete
       (sys::poke _percent_complete (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _percent_complete
     (setq _percent_complete (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get beginner_tutorials::DoDishesFeedback :md5sum-) "d342375c60a5a58d3bc32664070a1368")
(setf (get beginner_tutorials::DoDishesFeedback :datatype-) "beginner_tutorials/DoDishesFeedback")
(setf (get beginner_tutorials::DoDishesFeedback :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# Define a feedback message
float32 percent_complete

")



(provide :beginner_tutorials/DoDishesFeedback "d342375c60a5a58d3bc32664070a1368")

