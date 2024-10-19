// This program demonstrates the string class.

/* Problem Statement: Output to the console a string and concatenate a variable named movieTitle; end with a newline*/

// this line of code is a directive that uses the standard namespace; shorthand version to avoid prefixing std::
#include <iostream>

// preprocessor directive that provides the functionality from the string class of the standard library
#include <string> // Required for the string class.

// this line of code is a directive that uses the standard namespace; shorthand version to avoid prefixing std::
using namespace std;

// start of the program; every c++ program needs to have main as the entry point; this returns an integer data value
int main()
{
   // variable declared as type string from the string class; variable named movieTitle
   string movieTitle;

   // movieTitle variable assigned a string value
   movieTitle = "Wheels of Fury";
   // outputs to the console a string with movieTitle variable concatenated; ends with a newline
   cout << "My favorite movie is " << movieTitle << endl;
    // Designates the termination of the program and returns 0 to the operating system
   return 0;
}
