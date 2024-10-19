#include <iostream>
using namespace std;

int main() {

  int vals[] = {2, 4, 10};
  cout << "vals: " << *(vals + 1) << endl;

  int x = 10;
  //   int *ptr = &x;

  int *ptr = nullptr;

  cout << "x: " << x << "\n";

  if (ptr == nullptr) {
    cout << "ptr is null pointer. Does not point to anything." << endl;
  }

  return 0;
}
