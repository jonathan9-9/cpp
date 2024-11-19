#include <iostream>
#include <string>

// modify existing task

struct Node {
  std::string data;
  Node *prev;
  Node *next;

  Node(const std::string &value) : data(value), prev(nullptr), next(nullptr) {}
};

class TaskManagement {
private:
  Node *head;
  Node *tail;

public:
  TaskManagement() : head(nullptr), tail(nullptr) {}
  // add new task after head node
  void addTask(const std::string &value) {
    Node *newNode = new Node(value);
    if (head == nullptr) {
      head = tail = newNode;
    } else {
      tail->next = newNode;
      newNode->prev = tail;
      tail = newNode;
    }
  }

  void deleteTask(int position) {
    if (head == nullptr || position <= 0) {
      std::cout << "Invalid item number or empty list." << "\n";
      return;
    }
    Node *current = head;

    // traverse to chosen item
    for (int i = 1; i < position && current != nullptr; i++) {
      current = current->next;
    }
    if (current == nullptr) {
      std::cout << "Item does not exist" << "\n";
      return;
    }
    // if task is head
    if (current == head) {
      head = head->next;
      if (head != nullptr) {
        head->prev = nullptr;
      }
    } else {
      // update previous node's next pointer
      if (current->prev != nullptr) {
        current->prev->next = current->next;
      }
    }
    // if task is not head or tail
    if (current->next != nullptr) {
      current->next->prev = current->prev;
    }

    // if task is tail
    if (current == tail) {
      tail = current->prev;
    }
    delete current;
  }

  // display todo list items
  void showItems() {
    Node *current = head;
    int count = 1;
    while (current != nullptr) {
      std::cout << count << ") " << current->data << " ";
      current = current->next;
      std::cout << std::endl;
      count++;
    }
    std::cout << std::endl;
  }
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
  std::string item;
  int taskToDelete;
  char userAns;

  std::cout << "Enter item to add to your TODO list: " << "\n";

  std::cout << "Type quit to exit program" << "\n";
  while (item != "quit") {

    std::getline(std::cin, item);
    if (item == "quit") {
      continue;
    }
    taskManager.addTask(item);
  }

  std::cout << "List of TODO items: " << "\n";
  taskManager.showItems();

  std::cout << "Do you want to delete an item? (y/n)" << "\n";
  std::cin >> userAns;
  if (userAns == 'y') {

    std::cout << "Enter the number of the task to delete: ";
    std::cin >> taskToDelete;
    std::cout << "Deleting task " << taskToDelete << "..." << "\n";
    taskManager.deleteTask(taskToDelete);
    std::cout << "Updated todo list: " << "\n";
    taskManager.showItems();
  } else {
    taskManager.showItems();
  }

  return 0;
}
