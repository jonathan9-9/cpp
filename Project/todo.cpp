#include <iostream>
#include <string>

// modify existing task
// delete a task from existing list

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
      newNode->next = head->next;
      newNode->prev = head;
      if (head->next != nullptr) {
        head->next->prev = newNode;
      }
      head->next = newNode; // link the next node of head to newNode
      if (head == tail) {
        tail = newNode;
      }
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

  taskManager.addTask("My first task");
  taskManager.addTask("Finish essay for writing class");
  taskManager.addTask("Submit math exam");

  std::cout << "Todo items in list: " << "\n";
  taskManager.showItems();

  std::cout << "Removed item new list: " << "\n";
  taskManager.deleteTask();
  return 0;
}
