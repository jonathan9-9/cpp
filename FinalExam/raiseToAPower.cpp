// Write a C++ function that uses recursion to raise a number to a power. The
// function should accept two arguments: the number to be raised and the
// exponent. Assume that the exponent is a nonnegative integer. Demonstrate the
// function in a main program. Please write comments for each C++ statement.

// statement allows us to print to console using input/output library
#include <iostream>
// uses the standard namespace to use within the library
using namespace std;

// function that recursively calculates base raise to a power
int raiseToPower(int base, int exponent) {
  // base case: when exponent equals 0 returns 1 as any value raised to 0 equals
  // 1
  if (exponent == 0) {
    return 1;
  }
  // recursive case that calculates the base raised to a power by decrementing
  // the exponent and multiplying to the base exponent times
  return base * raiseToPower(base, exponent - 1);
}

// start of program in main
int main() {
  // example integer value for the base
  int baseNum = 5;
  // example integer value for the exponent
  int expNum = 3;

  // variable to store the final result as an integer
  int storedResult = raiseToPower(baseNum, expNum);
  // prints out the result of rasing a power
  cout << "Result of raising to a power: " << storedResult << "\n";
  // end of program
  return 0;
}
