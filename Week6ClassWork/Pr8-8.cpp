// Displays the names of all the employees at a company
#include <iostream>
#include <string>
using namespace std;

int main() {
  const int NUM_NAMES = 20;
  string names[NUM_NAMES] = {
      "Collins, Bill",  "Smith, Bart",   "Allen, Jim",       "Griffin, Jim",
      "Stamey, Marty",  "Rose, Geri",    "Taylor, Terri",    "Johnson, Jill",
      "Allison, Jeff",  "Looney, Joe",   "Wolfe, Bill",      "James, Jean",
      "Weaver, Jim",    "Pore, Bob",     "Rutherford, Greg", "Javens, Renee",
      "Harrison, Rose", "Setzer, Cathy", "Pike, Gordon",     "Holland, Beth"};

  // Loops through all the string elements and prints each element on a newline
  for (int i = 0; i < NUM_NAMES; i++) {
    cout << "Employee: " << " " << names[i] << endl;
  }
  return 0;
}
