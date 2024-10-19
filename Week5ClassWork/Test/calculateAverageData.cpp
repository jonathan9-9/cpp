// Program determines which number is smallest and which is largest
#include <iostream>
// Uses the standard namespace
using namespace std;

// Main function
int main() {
  // Number of years
  int years;
  // Amount of rain per month and total rain variables
  double rainPerMonth, totalRain = 0.0;

  // Asks user to enter number of years
  cout << "Enter number of years: ";
  cin >> years;

  // Loops through once each time up to the number of years entered by user
  for (int year = 1; year <= years; year++) {
    cout << "Year " << year << ":" << endl;

    // Loops 12 times for each year to ask user for amount of rain per month
    for (int month = 1; month <= 12; month++) {
      cout << "Enter inches of rain for this month " << month << ": ";
      cin >> rainPerMonth;

      // Keeps adding amount of rain per month to the total rain variable
      totalRain += rainPerMonth;
    }
  }

  // Calculates total months to get average
  int totalMonths = years * 12;

  // Calculates the average amount of rain per month over the course of this
  // period of those years
  double averageAmtOfRain = totalRain / totalMonths;

  // Prints average amount of rain
  cout << "Average rain per month: " << averageAmtOfRain << " inches" << endl;

  // End of program
  return 0;
}
