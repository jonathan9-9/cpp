// This program has variables of several of the integer types.

/* Problem Statement: Output to the console a string concatenated with various variables of differing data integer types*/

// include iostream is a preprocessor directive that provides input/output functionality from the standard library
#include <iostream>

// this line of code is a directive that uses the standard namespace; shorthand version to avoid prefixing std::
using namespace std;

// start of the program; every c++ program needs to have main as the entry point; this returns an integer data value
int main()
// block of code
{
   // variable named checking of type integer
   int checking;
   // variable named miles of type unsigned integer which can only hold non-negative values
   unsigned int miles;
   // variable declaration named diameter of type long which holds more bits than int
   long diameter;

   // checking initialized to -20
   checking = -20;
   // miles initialized to 4276
   miles = 4276;

   // diameter initialized to 100000
   diameter = 100000;

   // Outputs to the console a string with various variables concatenated and within the string, newlines
   cout << "We have made a long journey of " << miles;
   cout << " miles.\n";
   cout << "Our checking account balance is " << checking;
   cout << "\nThe galaxy is about " << diameter;
   cout << " light years in diameter.\n";

   // Designates the termination of the program and returns 0 to the operating system
   return 0;
}
