#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> vec;

  // Adding elements (dynamic resizing)
  vec.push_back(10);
  vec.push_back(20);
  vec.push_back(30);

  // Accessing elements
  cout << "First element: " << vec[0] << endl;

  // Traversing the vector
  for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << " ";
  }
  cout << endl;

  // Removing last element
  vec.pop_back();
  cout << "Size after pop: " << vec.size() << endl;

  return 0;
}
