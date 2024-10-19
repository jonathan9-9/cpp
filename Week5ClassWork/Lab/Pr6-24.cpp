// This program demonstrates default function arguments.
// The program displays lines of stars, if no arguments are given
// during the function call program instead uses the default arguments
#include <iostream>
using namespace std;

// Function prototype with default arguments
void displayStars(int = 17, int = 7);

// Start of program. Main makes three function calls to displayStars
int main() {
  displayStars(); // Use default values for cols and rows.
  cout << endl;
  displayStars(5); // Use default value for rows.
  cout << endl;
  displayStars(7, 3); // Use 7 for cols and 3 for rows.
  // End of the program
  return 0;
}

//********************************************************
// Definition of function displayStars.                  *
// The default argument for cols is 10 and for rows is 1.*
// This function displays a square made of asterisks.    *
//********************************************************

// This function does not return anything. It only prints the number of stars
// based on the arguments passed to it or it defaults to the arguments already
// given to it in the function prototype
void displayStars(int cols, int rows) {
  // Nested loop. The outer loop controls the rows
  // and the inner loop controls the columns.
  for (int down = 0; down < rows; down++) {
    for (int across = 0; across < cols; across++) {

      // Prints the stars
      cout << "*";
    }
    // For each new row the program prints a newline
    cout << "\n";
  }
}
