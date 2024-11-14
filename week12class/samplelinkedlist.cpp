// This program demonstrates the linked list template.
#include <iostream>
using namespace std;

// Struct to define value and pointers
struct Node {
  int val;
  Node *prev;
  Node *next;

  // Constructor
  Node(int data) : val(data), prev(nullptr), next(nullptr) {}
};

class SinglyLinkedList {

  // private member field head
private:
  Node *head;

public:
  // Constructor
  SinglyLinkedList() : head(nullptr) {}

  // append method to add data to singly linked list
  void append(int data) {
    Node *newNode = new Node(data);
    // if there is no head then add a new node as the head
    if (head == nullptr) {
      head = newNode;
      // otherwise traverse the linked list to the end to add a new node
    } else {
      Node *current = head;
      while (current->next != nullptr) {
        current = current->next;
      }
      current->next = newNode;
      newNode->prev = current;
    }
  }
  // search value we are looking for
  int searchValue(int value) {
    Node *current = head;

    while (current != nullptr) {
      // if value is found return value
      if (current->val == value) {
        return value;
      }

      current = current->next;
    }
    // otherwise return 0 for value not found
    return 0;
  }

  // display singly linked list values
  void display() {
    Node *current = head;
    while (current != nullptr) {
      cout << current->val << " ";
      current = current->next;
    }
  }
};

int main() {

  // initialize linked list
  SinglyLinkedList list;

  // append node values
  list.append(1);
  list.append(2);
  list.append(3);

  // display linked list
  cout << "Linked List: ";
  list.display();
  cout << endl;

  // output value found
  cout << "Search for value 2: " << list.searchValue(2) << "\n";

  // output value not found
  cout << "Search for value 5: " << list.searchValue(5) << "\n";
  // end program
  return 0;
}
