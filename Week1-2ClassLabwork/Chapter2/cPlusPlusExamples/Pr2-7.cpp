// This program has a variable.

/* Problem Statement: Output to the console a string and append a number of type integer and end with a newline*/

// include iostream is a preprocessor directive that provides input/output functionality from the standard library
#include <iostream>

// this line of code is a directive that uses the standard namespace; shorthand version to avoid prefixing std::
using namespace std;

// the start of the c++ program in function main that outputs a final result of type integer
int main()
// The open and close braces represents the block of code that executes within main
{
   // variable declaration named number of type integer
   int number;

   // variable number is initialized with a value of 5
   number = 5;
   // Outputs to the console a string with an appended value of type integer using the name of the variable, number and
   // ending with a newline
   cout << "The value in number is  " << number << endl;
   // exits the program to return a value to the operating system
   return 0;
}
