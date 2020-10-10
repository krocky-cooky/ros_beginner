#! /usr/bin/env python

import rospy
import actionlib
from beginner_tutorials.msg import *

class AddNumberServer:
    def __init__(self):
        self.server = actionlib.SimpleActionServer('add_number',AddNumberAction,self.execute,False)
        self.server.start()

    def execute(self,goal):
        print "Requested number: %d %d"%(goal.number_a,goal.number_b)
        result = self.server.get_default_result()
        result.number_answer = goal.number_a + goal.number_b
        print "Returning answer: %d"%(result.number_answer)
        self.server.set_succeeded(result)

if __name__ == '__main__':
    rospy.init_node('add_numner_server')
    server = AddNumberServer()
    rospy.spin()
