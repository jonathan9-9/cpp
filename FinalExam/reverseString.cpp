// Write a recursive function that accepts a string object as its argument and
// prints the string in reverse order. Demonstrate the function in a driver
// program. Please write comments for each C++ statement.

// statement allows us to print to console using input/output library
#include <iostream>
// uses the standard namespace to use within the library
using namespace std;

// recurse function that reverses a string with two parameters: index and
// exampleString
string reverseString(const string &exampleString, int index) {
  // base case when function reaches an empty string we stop and return
  if (index < 0) {
    return "";
  }
  // recurse case to append last character in string to the beginning of string
  return exampleString[index] + reverseString(exampleString, index - 1);
}
// start of driver program in main function
int main() {
  // example string to pass into reverseString function
  string firstString = "computer science";
  // invocation of recursive function
  string reversedString = reverseString(firstString, firstString.size() - 1);
  // prints out the string in reverse
  cout << "String in reverse: " << reversedString << "\n";
  // end of program
  return 0;
}
