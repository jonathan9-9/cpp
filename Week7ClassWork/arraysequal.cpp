#include <iostream>
using namespace std;

int main() {

  const int SIZE = 5;
  int firstArray[SIZE] = {5, 10, 15, 20, 25};
  int secondArray[SIZE] = {5, 10, 15, 20, 25};

  bool arraysEqual = true;

  int count = 0;
  while (arraysEqual && count < SIZE) {
    if (firstArray[count] != secondArray[count]) {
      arraysEqual = false;
    }
    count++;
  }
  if (arraysEqual) {
    cout << "Arrays are equal" << endl;
  } else {
    cout << "Arrays are not equal" << endl;
  }
}
