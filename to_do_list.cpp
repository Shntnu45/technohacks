#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    list<string> todo_list;
    string task;

    cout << "Enter tasks to add to the to-do list (type 'quit' to exit):" << endl;

    while (true) {
        getline(cin, task);

        if (task == "quit") {
            break;
        }

        todo_list.push_back(task);
    }

    cout << endl << "To-do List:" << endl;

    for (auto it = todo_list.begin(); it != todo_list.end(); ++it) {
        cout << "- " << *it << endl;
    }

    return 0;
}
