#include <iostream>
#include <string>

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
  return 0;
}
