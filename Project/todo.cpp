#include <iostream>
#include <string>

// Node struct to define data, prev and next pointers
struct Node {
  std::string data;
  Node *prev;
  Node *next;

  // constructor to initialize data, prev and next pointers
  Node(const std::string &value) : data(value), prev(nullptr), next(nullptr) {}
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

  void searchTodo(std::string const &keyword) {
    Node *current = head;
    bool found = false;
    while (current != nullptr) {
      if (current->data.find(keyword) != std::string::npos) {
        std::cout << "Item: " << current->data << std::endl;
        found = true;
      }
      current = current->next;
    }
    if (!found) {
      std::cout << "The item you are looking for does not exist" << std::endl;
    }
  }

  // update existing task
  void updateTask(int position, const std::string &newData) {
    // if no node exists then doubly linked list is empty
    if (head == nullptr) {
      std::cout << "Item to update does not exist" << "\n";
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
      std::cerr << "The item does not exist or is an invalid item." << "\n";
    }

    // current represents the node where it left off from the position in the
    // for loop to update and insert new data into that node
    current->data = newData;
  }

  // function to delete task based on position
  void deleteTask(int position) {
    // terminate function if position is out of bounds or there node is absent
    if (head == nullptr || position <= 0) {
      std::cout << "Invalid item number or empty list." << "\n";
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
      std::cout << "Item does not exist" << "\n";
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

  // display todo list items
  void showItems() {
    Node *current = head;
    // number to specify ordered item in the list
    int count = 1;
    while (current != nullptr) {
      std::cout << "\t\t" << count << ") " << current->data << " ";
      current = current->next;
      std::cout << std::endl;
      count++;
    }
    std::cout << std::endl;
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
  std::string item;
  // position of item to update or delete
  int taskToDelete, taskToUpdate;
  // user's answer to yes or no
  char userAns;

  std::string keyword;

  std::cout << "Enter item to add to your TODO list: " << "\n";

  std::cout << "Type quit to exit program" << "\n";
  // if user does not enter 'quit' user is asked to enter new item into list
  while (item != "quit") {

    std::getline(std::cin, item);
    // skip if item is quit to exclude from list
    if (item == "quit") {
      continue;
    }
    // add item to task list
    taskManager.addTask(item);
  }

  std::cout << "List of TODO items: " << "\n";
  // show items in the list
  taskManager.showItems();

  // driver program to delete or update a task and display items
  std::cout << "Do you want to delete an item? (y/n)" << "\n";
  std::cin >> userAns;
  if (userAns == 'y') {

    std::cout << "Enter the number of the task to delete: ";
    std::cin >> taskToDelete;
    std::cout << "Deleting task " << taskToDelete << "..." << "\n";
    taskManager.deleteTask(taskToDelete);
    std::cout << "Updated todo list: " << "\n";
    taskManager.showItems();
  }

  // if user updates item it returns updated list otherwise returns the previous
  // constructed list
  std::cout << "Do you want to update an item? (y/n)" << "\n";
  std::cin >> userAns;
  if (userAns == 'y') {
    std::cout << "Enter the number of the task to update: ";
    std::cin >> taskToUpdate;
    std::cin.ignore();
    std::cout << "Enter the new task: ";
    std::getline(std::cin, item);
    taskManager.updateTask(taskToUpdate, item);
    std::cout << "Updated TODO list: " << "\n";
    taskManager.showItems();
  }

  std::cout << "Are you looking for an item in your todo list? (y/n)" << "\n";
  std::cin >> userAns;
  if (userAns == 'y') {
    std::cout << "Enter a keyword to search: ";
    std::cin >> keyword;
    taskManager.searchTodo(keyword);

  } else {
    taskManager.showItems();
  }

  return 0;
}
