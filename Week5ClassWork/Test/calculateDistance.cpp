// Program determines which number is smallest and which is largest
#include <iostream>
// Uses the standard namespace
using namespace std;

// fallingDistance function to calculate distance based on time in seconds
double fallingDistance(double time) {

  // A constant variable to store the gravity constant
  const double gravityConstant = 9.8;

  // Returns the distance based on the formula
  return 0.5 * gravityConstant * time * time;
}

// Start of program
int main() {

  // Loops through for each second to calculate distance for that specific
  // second by calling the function inside the loop
  for (int time = 1; time <= 10; time++) {
    double distance = fallingDistance(time);

    // Prints out the time in seconds and distance in meters
    cout << "Time " << time << " seconds" << " - Distance: " << distance << "m"
         << endl;
  }

  // End of program
  return 0;
}
