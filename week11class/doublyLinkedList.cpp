// linked list that hold a series of double datatype.
// Executing functions for appending, inserting, and deleting nodes.
#include <iostream>
using namespace std;

class Node {
public:
  double data;
  Node *prev;
  Node *next;

  Node(double value) : data(value), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
private:
  Node *head;
  Node *tail;

public:
  DoublyLinkedList() : head(nullptr), tail(nullptr) {}

  // Function to append a node to the end of the list
  void append(double value) {
    Node *newNode = new Node(value);
    if (head == nullptr) {
      head = tail = newNode;
    } else {
      tail->next = newNode;
      newNode->prev = tail;
      tail = newNode;
    }
  }

  // Function to insert a node at the beginning of the list
  void prepend(double value) {
    Node *newNode = new Node(value);
    if (head == nullptr) {
      head = tail = newNode;
    } else {
      newNode->next = head;
      head->prev = newNode;
      head = newNode;
    }
  }

  // Function to delete the first occurrence of a node with given value
  void remove(double value) {
    Node *current = head;
    while (current != nullptr) {
      if (current->data == value) {
        if (current == head) {
          head = head->next;
          if (head != nullptr)
            head->prev = nullptr;
        } else if (current == tail) {
          tail = tail->prev;
          tail->next = nullptr;
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

  // Function to reverse the list
  void reverse() {
    Node *current = head;
    Node *temp = nullptr;
    while (current != nullptr) {
      temp = current->prev;
      current->prev = current->next;
      current->next = temp;
      current = current->prev;
    }
    if (temp != nullptr) {
      head = temp->prev;
    }
  }

  // Destructor to delete all nodes in the list
  ~DoublyLinkedList() {
    Node *current = head;
    while (current != nullptr) {
      Node *temp = current;
      current = current->next;
      delete temp;
    }
  }

  // Function to display the list
  void display() {
    Node *current = head;
    while (current != nullptr) {
      cout << current->data << " ";
      current = current->next;
    }
    cout << endl;
  }
};

// Driver program to demonstrate the DoublyLinkedList class
int main() {
  DoublyLinkedList list;

  // Appending nodes
  list.append(1.1);
  list.append(2.2);
  list.append(3.3);

  // Displaying the list
  cout << "Original list: ";
  list.display();

  // Inserting a node at the beginning
  list.prepend(0.9);
  cout << "After prepending 0.9: ";
  list.display();

  // Removing a node with value 2.2
  list.remove(2.2);
  cout << "After removing 2.2: ";
  list.display();

  // Reversing the list
  list.reverse();
  cout << "After reversing the list: ";
  list.display();

  return 0;
}
