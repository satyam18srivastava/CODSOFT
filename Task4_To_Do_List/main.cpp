#include <iostream>
#include <vector>
using namespace std;

struct Task {
    string name;
    bool completed;
};

int main() {
    vector<Task> tasks;
    int choice;

    do {
        cout << "\n====================================";
        cout << "\n        TO-DO LIST MANAGER";
        cout << "\n====================================";

        cout << "\n1. Add Task";
        cout << "\n2. View Tasks";
        cout << "\n3. Mark Task as Completed";
        cout << "\n4. Remove Task";
        cout << "\n5. Exit";

        cout << "\n\nEnter your choice: ";
        cin >> choice;

        cin.ignore();

        switch(choice) {

            case 1: {
                Task newTask;

                cout << "Enter Task: ";
                getline(cin, newTask.name);

                newTask.completed = false;

                tasks.push_back(newTask);

                cout << "Task Added Successfully!\n";
                break;
            }

            case 2: {

                if(tasks.empty()) {
                    cout << "No Tasks Available.\n";
                }
                else {
                    cout << "\n----- TASK LIST -----\n";

                    for(int i = 0; i < tasks.size(); i++) {

                        cout << i + 1 << ". "
                             << tasks[i].name;

                        if(tasks[i].completed)
                            cout << " [Completed]";
                        else
                            cout << " [Pending]";

                        cout << endl;
                    }
                }

                break;
            }

            case 3: {

                int taskNumber;

                cout << "Enter Task Number: ";
                cin >> taskNumber;

                if(taskNumber >= 1 &&
                   taskNumber <= tasks.size()) {

                    tasks[taskNumber - 1].completed = true;

                    cout << "Task Marked Completed!\n";
                }
                else {
                    cout << "Invalid Task Number!\n";
                }

                break;
            }

            case 4: {

                int taskNumber;

                cout << "Enter Task Number to Remove: ";
                cin >> taskNumber;

                if(taskNumber >= 1 &&
                   taskNumber <= tasks.size()) {

                    tasks.erase(
                        tasks.begin() + taskNumber - 1
                    );

                    cout << "Task Removed Successfully!\n";
                }
                else {
                    cout << "Invalid Task Number!\n";
                }

                break;
            }

            case 5:
                cout << "\nExiting Program...\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}
