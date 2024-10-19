#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *left;
  Node *right;

  Node(int value) {
    data = value;
    left = right = nullptr;
  }
};

// In-order traversal (Left, Root, Right)

void in_order(Node *root) {
  if (root == nullptr) {
    return;
  }

  in_order(root->left);
  cout << root->data << " ";
  in_order(root->right);
}

int main() {
  Node *root = new Node(10);
  root->left = new Node(5); // acts like the head
  root->right = new Node(15);

  root->left->left = new Node(2);  // left
  root->left->right = new Node(7); // right

  cout << "In-order traversal: ";
  in_order(root);
  cout << endl;

  return 0;
}
