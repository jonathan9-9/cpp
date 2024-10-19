// This program raises the user's number to the powers
// of 0 through 10.

// This program displays the powers of a starting value up to a maximum power of
// 10 or less depending on the number of times a user presses a key or choice
// other than q or Q.

// Preprocessor directive that includes the contents of the cmath header file
// and its math functions
#include <cmath>
// Input/Output library
#include <iostream>

// Uses the standard namespace
using namespace std;

// Start of program
int main() {
  // Two declared variables
  int value;
  char choice;

  // Prompts user to enter a number
  cout << "Enter a number: ";
  cin >> value;
  cout << "This program will raise " << value;
  cout << " to the powers of 0 through 10.\n";

  // Iterates through the number of times a user enter a choice other than Q or
  // q and displays the number raised to that power each time a user enters a
  // choice
  for (int count = 0; count <= 10; count++) {
    cout << value << " raised to the power of ";
    cout << count << " is " << pow(value, count);
    cout << "\nEnter Q to quit or any other key ";
    cout << "to continue. ";
    cin >> choice;
    // When the choice is Q or q the for loop exits
    if (choice == 'Q' || choice == 'q')
      break;
  }
  // End of the program
  return 0;
}
