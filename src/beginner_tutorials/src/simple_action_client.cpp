#include <beginner_tutorials/AddNumberAction.h>
#include <actionlib/client/simple_action_client.h>
#include <iostream>

typedef actionlib::SimpleActionClient<beginner_tutorials::AddNumberAction> Client;

int main(int argc,char **argv){
    ros::init(argc,argv,"add_number_client");
    Client client("add_number",true);
    client.waitForServer();
    beginner_tutorials::AddNumberGoal goal;
    int a,b;
    printf("数字を入力してください\n");
    std::cin >> a >> b;
    goal.number_a = a;
    goal.number_b = b;
    client.sendGoal(goal);
    client.waitForResult(ros::Duration(5.0));
    if(client.getState() == actionlib::SimpleClientGoalState::SUCCEEDED){
        auto result = client.getResult();
        printf("Response: %d + %d = %d\n",goal.number_a,goal.number_b,result->number_answer);
    }
    return 0;
}