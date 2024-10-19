#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *next;
};

void insert(Node *&head, int data) {
  Node *newNode = new Node();
  newNode->data = data;
  newNode->next = head;
  head = newNode;
}

void display(Node *head) {
  Node *temp = head;
  while (temp != nullptr) {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

int main() {
  Node *head = nullptr;

  insert(head, 10);
  insert(head, 20);
  insert(head, 30);

  display(head);

  return 0;
}
