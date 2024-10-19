// An unruly printing program

/* Problem Statement: Write a C++ program that outputs in one line
Computer games, Coffee, Aspirin as the top sellers during the month of June using cout */

// include iostream is a preprocessor directive that provides input/output functionality from the standard library
#include <iostream>

// this line of code is a directive that uses the standard namespace; shorthand version to avoid prefixing std::
using namespace std;

// int means the main function will output a data type of type integer and this is the main function of the program
// where execution starts
int main()
// The open and close braces represents the block of code that executes within main
{
   // these five cout statements are print statement to output the five strings to the console in one line ending with a semicolon
   cout << "The following items were top sellers";
   cout << "during the month of June:";
   cout << "Computer games";
   cout << "Coffee";
   cout << "Aspirin";
   // return 0 is mark the ending of the program and tell the operating system the program has finished
   return 0;
}
