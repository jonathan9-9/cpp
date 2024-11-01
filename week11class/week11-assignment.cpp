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
        // after checking if the current node value matches with the value we
        // want to delete check if that current node is the head node
        if (current == head) {
          // current node is the head node make it point to the right of the
          // current node
          head = head->next;
          if (head != nullptr) {
            // if head is not null and we already point to the next node from
            // the current node we point back to the original first node and set
            // it to null to get it ready to be removed
            head->prev = nullptr;
            // if head is null then the list is empty and tail points to null
          } else {
            tail = nullptr;
          }
          // check if the current node value to remove is the tail node
        } else if (current == tail) {
          // if the current node to removed is the tail we make tail point to
          // the previous node
          tail = tail->prev;
          if (tail != nullptr) {
            // if tail is not null then we make the second to last node (new
            // tail) point to the last node and make it null since this is the
            // old tail node we want to remove
            tail->next = nullptr;
          } else {
            // if the tail is null then the list is empty and head points to
            // null
            head = nullptr;
          }
          // if the node value we want to remove is not the head nor the tail
          // then it must be a node in the middle of the doubly linked list
        } else {
          current->prev->next = current->next;
          current->next->prev = current->prev;
        }
        // delete the node that matched with the value input
        delete current;
        // exit the loop once the value has been removed
        return;
      }
      // traverse the linked list
      current = current->next;
    }
  }
  // deletes all nodes in the doubly linked list
  ~DoublyLinkedList() {
    Node *current = head;
    while (current != nullptr) {
      Node *temp = current;
      current = current->next;
      delete temp;
    }
  }
}

int main() {
  DoublyLinkedList list;
  return 0;
}
