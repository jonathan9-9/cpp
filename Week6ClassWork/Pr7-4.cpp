// The program initializes an array of 9 string elements

// uses the output and input library
#include <iostream>
// uses the include preprocessor to include string type
#include <string>
// standard namespace
using namespace std;

// start of program
int main() {
  // a constant variable stores 9 and cannot be changed
  const int SIZE = 9;
  // a planets array of size 9 comprised of string elements
  string planets[SIZE] = {"Mercury", "Venus",   "Earth",
                          "Mars",    "Jupiter", "Saturn",
                          "Uranus",  "Neptune", "Pluto (a dwarf planet)"};

  // Prints the following string with a newline
  cout << "Here are the planets:\n";

  // loops through the string elements of the planets array
  for (int count = 0; count < SIZE; count++) {
    // prints all the planets on a newline
    cout << planets[count] << endl;
  }
  // signals the end of the program
  return 0;
}
