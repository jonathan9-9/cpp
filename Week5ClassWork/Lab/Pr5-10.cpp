// This program demonstrates a user controlled for loop.
// This program displays a table of the starting minimum value and its squared
// value and up to the maximum value and its squared value using a for loop

// Preprocessor directive to include input & output functionality part of
// standard library
#include <iostream>
using namespace std;

int main() {
  int minNumber, // Minimum number to square
      maxNumber; // Maximum number to square

  // Get the minimum and maximum values to display.
  cout << "I will display a table of numbers and "
       << "their squares.\n"
       << "Enter the starting number: ";
  // Retrieves the minimum value from keyboard input
  cin >> minNumber;
  cout << "Enter the ending number: ";
  // Retrieves the maximum value from keyboard input
  cin >> maxNumber;

  // Display the table.
  cout << "Number Number Squared\n"
       << "-------------------------\n";

  // for loop that iterates from the minimum number up to the maximum number
  // prints each number and its squared value in table form
  for (int num = minNumber; num <= maxNumber; num++)
    cout << num << "\t\t" << (num * num) << endl;

  // exits the program; returns 0 to the operating system
  return 0;
}
