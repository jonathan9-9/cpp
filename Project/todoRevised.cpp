#include <iostream>
#include <string>
using namespace std;

// Node struct to define data, prev and next pointers
struct Node {
  string data;
  Node *prev;
  Node *next;
  bool isCompleted;

  // constructor to initialize data, prev and next pointers
  Node(const std::string &value)
      : data(value), prev(nullptr), next(nullptr), isCompleted(false) {}
};

// task management class
class TaskManagement {
  // private member fields head and tail of type Node
private:
  Node *head;
  Node *tail;

  // public member functions
public:
  TaskManagement() : head(nullptr), tail(nullptr) {}
  // add new task
  void addTask(const std::string &value) {
    // pass data into newly created node object
    Node *newNode = new Node(value);
    // if no nodes exist initialize head and tail to a new instance of newNode
    // object
    if (head == nullptr) {
      head = tail = newNode;
      // otherwise add a new node after the tail in the doubly linked list
    } else {
      tail->next = newNode;
      newNode->prev = tail;
      // set the tail as the new node created
      tail = newNode;
    }
  }

  // update existing task
  void updateTask(int position, const std::string &newData) {
    // if no node exists then doubly linked list is empty
    if (head == nullptr) {
      cout << "Item to update does not exist" << "\n";
    }

    // initialize current node to the head
    Node *current = head;
    // traverse up to and including the item (node) to be updated based on the
    // position in the list
    for (int i = 1; i < position && current != nullptr; i++) {
      current = current->next;
    }

    // current node is null or the position is out of bounds raise an exception
    if (current == nullptr || position <= 0) {
      cerr << "The item does not exist or is an invalid item." << "\n";
    }

    // current represents the node where it left off from the position in the
    // for loop to update and insert new data into that node
    current->data = newData;
  }

  // function to delete task based on position
  void deleteTask(int position) {
    // terminate function if position is out of bounds or there node is absent
    if (head == nullptr || position <= 0) {
      cout << "Invalid task number or empty list." << "\n";
      return;
    }
    // set current to head
    Node *current = head;

    // traverse to chosen item
    for (int i = 1; i < position && current != nullptr; i++) {
      current = current->next;
    }

    // if current node to be deleted is empty then item does not exist so
    // terminate fn
    if (current == nullptr) {
      cout << "Task does not exist" << "\n";
      return;
    }
    // delete head node by setting to null and traverse to next node over from
    // current head to become new head
    if (current == head) {
      head = head->next;
      if (head != nullptr) {
        head->prev = nullptr;
      }
      // otherwise if current is not head and prev node from current exists set
      // prev node's pointer to next node from current
    } else {
      // update previous node's next pointer
      if (current->prev != nullptr) {
        current->prev->next = current->next;
      }
    }
    // if task (node) from current exists set current next's node to prev node
    // from current
    if (current->next != nullptr) {
      current->next->prev = current->prev;
    }

    // if task or current node is tail delete current tail and set prev node to
    // tail
    if (current == tail) {
      tail = current->prev;
    }
    // delete current node based on position
    delete current;
  }

  // marking task as done
  void markTaskAsDone(int position) {
    if (head == nullptr) {
      cout << "Invalid item number or empty list." << "\n";
      return;
    }

    Node *current = head;
    for (int i = 1; i < position && current != nullptr; i++) {
      current = current->next;
    }

    if (current == nullptr) {
      cout << "Item does not exist" << "\n";
      return;
    }

    current->isCompleted = true; // Mark the task as completed
  }

  // display todo list, with pending and completed tasks separately
  void showItems() {
    Node *current = head;
    int count = 1;

    cout << "\nPending Tasks:\n";
    bool hasPendingTasks = false;
    while (current != nullptr) {
      if (!current->isCompleted) {
        cout << "\t" << count << ") " << current->data << "\n";
        hasPendingTasks = true;
      }
      current = current->next;
      count++;
    }

    if (!hasPendingTasks) {
      cout << "\tNo pending tasks.\n";
    }

    current = head;
    bool hasCompletedTasks = false;
    count = 1;
    while (current != nullptr) {
      if (current->isCompleted) {
        if (!hasCompletedTasks) {
          cout << "Completed tasks:\n";
        }
        cout << "\t" << count << ") " << current->data << "\n";
        hasCompletedTasks = true;
      }
      current = current->next;
      count++;
    }

    if (!hasCompletedTasks) {
      cout << "\tNo completed tasks.\n\n";
    }
  }

  // search task by name

  void searchTodo(string const &keyword) {
    Node *current = head;
    bool found = false;
    int count = 1;
    while (current != nullptr) {
      if (current->data.find(keyword) != string::npos) {
        cout << "Found! Task number " << count << ": " << current->data << "\n";
        found = true;
      }
      current = current->next;
      count++;
    }
    if (!found) {
      cout << "There are no tasks with this keyword.\n";
    }
  }
  // destructor to free allocated memory
  ~TaskManagement() {
    Node *current = head;
    while (current != nullptr) {
      Node *temp = current;
      current = current->next;
      delete temp;
    }
  }
};

int main() {
  TaskManagement taskManager;
  // data item to add or update to node
  string item, newTask, taskToSearch;
  // position of item to update or delete
  int taskToDelete, taskToUpdate;
  // user's answer to yes or no
  int userAns;

  cout << "Enter tasks to add to your TODO list: " << "\n";
  cout << "Type 'done' when you finish." << "\n";
  // if user does not enter 'done', user is asked to enter new item into list
  while (item != "done") {

    getline(cin, item);
    // skip if item is quit to exclude from list
    if (item == "done") {
      continue;
    }
    // add item to task list
    taskManager.addTask(item);
  }

  cout << "List of TO-DO items:\n";
  // show items in the list
  taskManager.showItems();

  // driver program for user
  while (userAns != 7) {
    cout << "\nWhat would you like to do? Enter the corresponding number.\n";
    cout << "1. Add task\n";
    cout << "2. Delete task\n";
    cout << "3. Edit task\n";
    cout << "4. Mark task as done\n";
    cout << "5. Search task by name\n";
    cout << "6. Display tasks\n";
    cout << "7. Exit\n";
    cin >> userAns;
    if (userAns == 1) {
      cout << "Enter the new task: ";
      cin.ignore();
      getline(cin, newTask);
      cout << "Adding task...\n";
      taskManager.addTask(newTask);
      cout << "Task added successfully.\n";
      cout << "Updated to-do list: " << "\n";
      taskManager.showItems();
    }
    if (userAns == 2) {
      cout << "Enter the number of the task to delete: ";
      cin >> taskToDelete;
      cout << "Deleting task...\n";
      taskManager.deleteTask(taskToDelete);
      cout << "Task deleted successfully.\n";
      cout << "Updated todo list: " << "\n";
      taskManager.showItems();
    }
    if (userAns == 3) {
      cout << "Enter the number of the task to edit: ";
      cin >> taskToUpdate;
      cin.ignore();
      cout << "Enter the updated task: ";
      getline(cin, item);
      taskManager.updateTask(taskToUpdate, item);
      cout << "Updated TODO list: " << "\n";
      taskManager.showItems();
    }
    if (userAns == 4) {
      cout << "Enter the number of the task to be marked as done: ";
      cin >> taskToUpdate;
      taskManager.markTaskAsDone(taskToUpdate);
      cout << "\nHere is your updated to-do list: ";
      taskManager.showItems();
    }
    if (userAns == 5) {
      cout << "Enter one keyword to search for a task: ";
      cin >> taskToSearch;
      cout << "Searching for task...\n";
      taskManager.searchTodo(taskToSearch);
    }
    if (userAns == 6) {
      taskManager.showItems();
    }
  }
}
