#include <cstring>
#include <iostream>
using namespace std;

char *getString() {
  char buffer[80];

  cout << "Enter a sentence: ";

  cin.getline(buffer, 80);

  int length = strlen(buffer) + 1;

  char *arr = new char[length];

  for (int i = 0; i < length; i++) {
    arr[i] = buffer[i];
  }

  return arr;
}

int main() {

  char *result = getString();

  cout << "Your sentence is: " << result << "\n";

  delete[] result;

  return 0;
}
