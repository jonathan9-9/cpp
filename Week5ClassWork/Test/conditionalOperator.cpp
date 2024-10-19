// Program determines which number is smallest and which is largest
#include <iostream>
// Uses the standard namespace
using namespace std;

// Start of main function
int main() {
  // two number variables of type double
  double num1;
  double num2;

  // Prompts user to enter two numbers
  cout << "Enter two numbers: " << endl;
  cin >> num1 >> num2;

  // Uses conditional operator to determine which number is largest and smallest
  double largest = num1 > num2 ? num1 : num2;
  double smallest = num1 < num2 ? num1 : num2;

  // Prints out the smallest and largest number
  cout << "The largest number is: " << largest
       << " and the smallest number is: " << smallest << endl;
  // Returns 0 to the operating system
  return 0;
}
