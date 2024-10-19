// This program has a variable.

/* Problem Statement: Output to the console a string without using the variable number by using a string instead
of the variable directly*/

// include iostream is a preprocessor directive that provides input/output functionality from the standard library
#include <iostream>

// this line of code is a directive that uses the standard namespace; shorthand version to avoid prefixing std::
using namespace std;

// start of the program; every c++ program needs to have main as the entry point; this returns an integer data value
int main()
// block of code within main function
{
    // variable declaration named number of type integer
   int number;

   // variable number is initialized with value of 5
   number = 5;
   // Outputs to the console a string only without referencing the variable number
   cout << "The value in number is " << "number" << endl;
   // exits the program to return a value to the operating system
   return 0;
}
