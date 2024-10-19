// This program displays the number of days in each month.

// Input/Output library
#include <iostream>
// standard namespace
using namespace std;

// Main function; starts execution
int main() {

  // constant variable; can't be changed
  const int MONTHS = 12;
  // days array of size 12 and of type integer
  int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  // loops through the size of months to print out the month number and
  // corresponding number of days
  for (int count = 0; count < MONTHS; count++) {
    cout << "Month " << (count + 1) << " has ";
    cout << days[count] << " days.\n";
  }
  // end of program
  return 0;
}
