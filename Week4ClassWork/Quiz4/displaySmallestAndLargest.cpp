#include <iostream>
using namespace std;

int main() {
  int num;
  int smallest, largest;
  cout << "To exit the program enter -99\n";

  cout << "Enter an integer: ";
  cin >> num;

  if (num == -99) {
    cout << "This is not a valid number." << endl;
    return 0;
  }

  smallest = num;
  largest = num;

  while (num != -99) {
    cout << "Enter an integer: " << endl;
    cin >> num;

    if (num == -99) {
      break;
    }

    if (num > largest) {
      largest = num;
    }
    if (num < smallest) {
      smallest = num;
    }
  }
  cout << "Largest number: " << largest << endl;
  cout << "Smallest number: " << smallest << endl;
  return 0;
}
