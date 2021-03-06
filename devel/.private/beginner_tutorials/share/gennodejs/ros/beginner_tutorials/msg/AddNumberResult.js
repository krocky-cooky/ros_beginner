// Auto-generated. Do not edit!

// (in-package beginner_tutorials.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class AddNumberResult {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.number_answer = null;
    }
    else {
      if (initObj.hasOwnProperty('number_answer')) {
        this.number_answer = initObj.number_answer
      }
      else {
        this.number_answer = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type AddNumberResult
    // Serialize message field [number_answer]
    bufferOffset = _serializer.uint32(obj.number_answer, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type AddNumberResult
    let len;
    let data = new AddNumberResult(null);
    // Deserialize message field [number_answer]
    data.number_answer = _deserializer.uint32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'beginner_tutorials/AddNumberResult';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'ed6aad06625459c2f4abdb4611178a77';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    uint32 number_answer
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new AddNumberResult(null);
    if (msg.number_answer !== undefined) {
      resolved.number_answer = msg.number_answer;
    }
    else {
      resolved.number_answer = 0
    }

    return resolved;
    }
};

module.exports = AddNumberResult;
