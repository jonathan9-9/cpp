// Write a C++ function that accepts an integer argument and returns the sum of
// all the integers from 1 up to the number passed as an argument. For example,
// if 50 is passed as an argument, the function will return the sum of 1, 2, 3,
// 4, … 50. Use recursion to calculate the sum. Demonstrate the function in a
// main  program. Please write comments for each C++ statement.

// statement allows us to print to console using input/output library
#include <iostream>
// uses the standard namespace to use within the library
using namespace std;

// calculateSum helper function to calculate the sum of numbers using recursion
int calculateSum(int upperLimit) {
  // base case when program reaches 1 it returns 1 and works up from there to
  // add all terms in the stack
  if (upperLimit == 1) {
    return 1;
  }
  // recursive case to decrement down by 1 each call and add the previous number
  // per call
  return upperLimit + calculateSum(upperLimit - 1);
}

// start of main program
int main() {
  // example value to test program which will be the upperlimit
  int numberUpToSum = 7;
  // stores the sum of values when calculateSum function is invoked
  int sumOfValues = calculateSum(numberUpToSum);
  // prints out the sum of values on console
  cout << "Sum of values: " << sumOfValues << "\n";

  // returns 0 to the operating system terminating program
  return 0;
}
