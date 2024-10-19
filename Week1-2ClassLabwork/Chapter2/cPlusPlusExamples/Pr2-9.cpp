// This program has literals and a variable.

/* Problem Statement: Write a string that logs to the console Today we sold x amount bushels of apples
by using the name of the variable and concatenating it to the string and ending with a newline*/

// include iostream is a preprocessor directive that provides input/output functionality from the standard library
#include <iostream>

// this line of code is a directive that uses the standard namespace; shorthand version to avoid prefixing std::
using namespace std;

// start of the program; every c++ program needs to have main as the entry point; this returns an integer data value
int main()

// block of code within main contained within the braces
{
   // variable declaration named apples with integer data type
   int apples;

   // Initializes variable apples to 20
   apples = 20;

   // Outputs to the console a string concatenated to the variable apples and ends with a newline
   cout << "Today we sold " << apples << " bushels of apples.\n";

   // Designates the termination of the program and returns 0 to the operating system
   return 0;
}
