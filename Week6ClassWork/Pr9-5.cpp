// This program shows an array name being dereferenced with the *
// operator.
#include <iostream>
using namespace std;

int main() {
  // short data type; array of numbers
  short numbers[] = {10, 20, 30, 40, 50};

  // prints the first element of the array
  cout << "The first element of the array is ";
  cout << *numbers << endl;
  return 0;
}
