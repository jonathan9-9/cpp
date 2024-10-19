#include <iostream>
using namespace std;

int main() {
  int a = 1;
  int *b = &a;
  *b = 200;
  cout << a << endl;
  cout << *b << endl;
}
