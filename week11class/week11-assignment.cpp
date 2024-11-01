// member functions: appending, inserting, and deleting nodes
// Destructor to delete all nodes in the list
// driver program
// print member function: before and after
// copy constructor

#include <iostream>
using namespace std;

class Node {
public:
  int value;
  Node *prev;
  Node *next;

  Node(int val) : value(val), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
private:
  Node *head;
  Node *tail;

public:
  DoublyLinkedList() : head(nullptr), tail(nullptr) {}

  // inserting new node at the end of the doubly linked list
  void append(int value) {
    Node *newNode = new Node(value);
    if (head == nullptr) {
      head = tail = newNode;
    } else {
      tail->next = newNode;
      newNode->prev = tail;
      tail = newNode;
    }
  }

  // inserting new node at the beginning of the doubly linked list
  void prepend(int value) {
    Node *newNode = new Node(value);
    if (head == nullptr) {
      head = tail = newNode;
    } else {
      newNode->next = head;
      head->prev = newNode;
      head = newNode;
    }
  }

  void remove(int value) {
    Node *current = head;
    while (current != nullptr) {
      if (current->value == value) {
        if (current == head) {
          head = head->next;
          if (head != nullptr) {
            head->prev = nullptr;
          } else {
            tail = nullptr;
          }
        } else if (current == tail) {
          tail = tail->prev;
          if (tail != nullptr) {
            tail->next = nullptr;
          } else {
            head = nullptr;
          }
        } else {
          current->prev->next = current->next;
          current->next->prev = current->prev;
        }
        delete current;
        return;
      }
      current = current->next;
    }
  }
}

int main() {
  DoublyLinkedList list;
  return 0;
}
