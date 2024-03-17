#pragma once
#include<string>
#include<iostream>
#include<list>
#include<vector>
using namespace std;
class ToDoList
{
private:
    string taskName;
    list<ToDoList> subTasks;

public:
    // Constructor 
    ToDoList(const string& name) : taskName(name) {}

    // add a sub-task
    ToDoList& addSubTask(const string& subTaskName) {
        subTasks.push_back(ToDoList(subTaskName));
        return subTasks.back();
    }

    //  display the to-do list
    void display(int level = 0) const {
      
        for (int i = 0; i < level; ++i) {
            cout << "  ";
        }
        // Print the task name
        cout << "- " << taskName << endl;

       // display sub-tasks
        for (const auto& subTask : subTasks) {
            subTask.display(level + 1);
        }
    }


};


