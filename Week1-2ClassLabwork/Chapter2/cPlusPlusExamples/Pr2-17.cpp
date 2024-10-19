// This program demonstrates boolean variables.

/* Problem Statement: Write and output to console two boolean values true and false each on a new line */

// this line of code is a directive that uses the standard namespace; shorthand version to avoid prefixing std::
#include <iostream>
// shorthand version of std:: to use the standard namespace
using namespace std;

// start of the program; every c++ program needs to have main as the entry point; this returns an integer data value
int main()
{
   // variable declared boolValue of data type boolean
   bool boolValue;

   // boolValue is initialized to true
   boolValue = true;
   // outputs true to the console and ends with a new line
   cout << boolValue << endl;
    // boolValue is initialized to false
   boolValue = false;
   // outputs false to the console and ends with a new line
   cout << boolValue << endl;
   // Designates the termination of the program and returns 0 to the operating system
   return 0;
}
