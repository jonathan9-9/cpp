// Program determines which number is smallest and which is largest
#include <iostream>
// Uses the standard namespace
using namespace std;

// Function prototype
void coinToss();

// Start of program
int main() {

  // Number of tosses user enters; initial value of 0
  int tosses = 0;

  // Seeds the random number at the current time for each number of tosses in
  // the sequence
  srand(time(0));
  // Prompts user to enter the number of tosses
  cout << "Enter how many times you want to toss the coin: ";
  cin >> tosses;

  // Calls the coinToss function by the number of tosses
  for (int i = 0; i < tosses; i++) {
    coinToss();
  }
}

// coinToss function that generates heads or tails
void coinToss() {
  // Calculates a random number of 1 or 2 by using the rand function
  int headsOrTail = rand() % 2 + 1;

  // Prints out Heads if value is 1 or Tails otherwise
  if (headsOrTail == 1) {
    cout << "Heads" << endl;
  } else {
    cout << "Tails" << endl;
  }
}
