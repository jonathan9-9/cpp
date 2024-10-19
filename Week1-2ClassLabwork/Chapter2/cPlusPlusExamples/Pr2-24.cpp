// This program extracts the rightmost digit of a number.

/* Problem Statement: log to the console the rightmost digit of the number 12345 by modding it by 10 and ending
with a newline */

// this line of code is a directive that uses the standard namespace; shorthand version to avoid prefixing std::
#include <iostream>
// shorthand version of std:: to use the standard namespace
using namespace std;

// start of the program; every c++ program needs to have main as the entry point; this returns an integer data value
int main()
{
	// variable declaration named number of type integer
	int number = 12345;
	// variable initialization named rightMost of type integer; holds the first rightmost digit in number
	int rightMost = number % 10;

	// outputs to the console a string concatenated to variables number and rightMost and ends with a newline
	cout << "The rightmost digit in "
		 << number << " is "
		 << rightMost << endl;
	// Designates the termination of the program and returns 0 to the operating system
	return 0;
}
