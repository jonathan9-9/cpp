#include <iostream>
using namespace std;

// Write a C++ function method with the following header to display three
// numbers in increasing order:

//  displaySortedNumbers( double num1, double num2, double num3)

// Function Prototype
void displaySortedNumbers(double, double, double);

// Start of program at main function
int main() {
  // Declared three variables of type double
  double number1, number2, number3;

  // Prompts the user to provide three numbers
  cout << "Provide three numbers to display in increasing order: " << endl;
  // Takes three numbers from keyboard input
  cin >> number1 >> number2 >> number3;

  // Calls function displaySortedNumber with the three arguments from user input
  // to display the numbers in increasing order
  displaySortedNumbers(number1, number2, number3);

  // Terminates the program and returns 0 to the operating system
  return 0;
}

// Display the numbers in increasing order without returning anything
// Contains three parameters and its types
void displaySortedNumbers(double num1, double num2, double num3) {

  // Temp variable to hold the second value
  double temp;

  // Compare num1 and num2 to get the greater of the two and perform the swap
  if (num1 > num2) {
    temp = num1;
    num1 = num2;
    num2 = temp;
  }

  // Compare num2 and num3 to get the greater of the two and perform the swap
  if (num2 > num3) {
    temp = num2;
    num2 = num3;
    num3 = temp;
  }

  // Compare num1 and num2 again to account for the previous swap when num2 was
  // greater than num3 since num2 now became num3 so we need to make the
  // comparison again
  if (num1 > num2) {
    temp = num1;
    num1 = num2;
    num2 = temp;
  }

  // Print the values in increasing or ascending order
  cout << "Ascending order: " << num1 << ", " << num2 << ", " << num3 << endl;
}
