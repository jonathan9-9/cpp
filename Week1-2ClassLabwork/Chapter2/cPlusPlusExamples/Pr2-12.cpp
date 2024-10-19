// This program works with characters.

/* Problem Statement: Output to the console two letters A and B each on a new line */

// include iostream is a preprocessor directive that provides input/output functionality from the standard library
#include <iostream>

// this line of code is a directive that uses the standard namespace; shorthand version to avoid prefixing std::
using namespace std;

// start of the program; every c++ program needs to have main as the entry point; this returns an integer data value
int main()
{
   // variable declaration. variable named letter of type character
   char letter;

   // variable letter initialized to A designated by single quotation marks
   letter = 'A';
   // Outputs the value of the variable that holds the letter A
   cout << letter << endl;
   // variable letter initialized to B designated by single quotation marks
   letter = 'B';
   // Outputs the value of the variable that holds the letter B
   cout << letter << endl;

    // Designates the termination of the program and returns 0 to the operating system
   return 0;
}
