; Auto-generated. Do not edit!


(cl:in-package beginner_tutorials-msg)


;//! \htmlinclude AddNumberResult.msg.html

(cl:defclass <AddNumberResult> (roslisp-msg-protocol:ros-message)
  ((number_answer
    :reader number_answer
    :initarg :number_answer
    :type cl:integer
    :initform 0))
)

(cl:defclass AddNumberResult (<AddNumberResult>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <AddNumberResult>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'AddNumberResult)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name beginner_tutorials-msg:<AddNumberResult> is deprecated: use beginner_tutorials-msg:AddNumberResult instead.")))

(cl:ensure-generic-function 'number_answer-val :lambda-list '(m))
(cl:defmethod number_answer-val ((m <AddNumberResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader beginner_tutorials-msg:number_answer-val is deprecated.  Use beginner_tutorials-msg:number_answer instead.")
  (number_answer m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <AddNumberResult>) ostream)
  "Serializes a message object of type '<AddNumberResult>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'number_answer)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'number_answer)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'number_answer)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'number_answer)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <AddNumberResult>) istream)
  "Deserializes a message object of type '<AddNumberResult>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'number_answer)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'number_answer)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'number_answer)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'number_answer)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<AddNumberResult>)))
  "Returns string type for a message object of type '<AddNumberResult>"
  "beginner_tutorials/AddNumberResult")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'AddNumberResult)))
  "Returns string type for a message object of type 'AddNumberResult"
  "beginner_tutorials/AddNumberResult")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<AddNumberResult>)))
  "Returns md5sum for a message object of type '<AddNumberResult>"
  "ed6aad06625459c2f4abdb4611178a77")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'AddNumberResult)))
  "Returns md5sum for a message object of type 'AddNumberResult"
  "ed6aad06625459c2f4abdb4611178a77")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<AddNumberResult>)))
  "Returns full string definition for message of type '<AddNumberResult>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%uint32 number_answer~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'AddNumberResult)))
  "Returns full string definition for message of type 'AddNumberResult"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%uint32 number_answer~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <AddNumberResult>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <AddNumberResult>))
  "Converts a ROS message object to a list"
  (cl:list 'AddNumberResult
    (cl:cons ':number_answer (number_answer msg))
))