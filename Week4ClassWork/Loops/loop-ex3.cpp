#include <iostream>
using namespace std;

int main() {

  int x = 0;

  // ; refers to x above
  for (; x < 10; x = x + 1) {
    cout << x << "\n";
  }

  return 0;
}
