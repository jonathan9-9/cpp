#include <array>
#include <iostream>
using namespace std;

int main() {

  // initialize array of type double with size 12
  array<double, 12> rainfall;

  // initialize two double variables
  double totalRainfall = 0.0;
  double averageRainfall = 0.0;

  // initialize two int variables to 0
  int highMonth = 0, lowMonth = 0;

  // set min and max to determine the highest and lowest
  double highestRainfall = numeric_limits<double>::min();
  double lowestRainfall = numeric_limits<double>::max();

  cout << "Enter rainfall for each month: " << endl;

  // Loop through each month to obtain the values of rainfall from user to add
  // into the array
  for (int i = 0; i < 12; i++) {
    cout << "Month " << (i + 1) << ": ";
    cin >> rainfall[i];

    // Input validation to make sure that value is not negative
    while (rainfall[i] < 0) {
      // Prompt user to re-enter value if negative
      cout << "The value you entered cannot be negative. Re-enter it.";
      cin >> rainfall[i];
    }

    // Adds each rainfall amount to the total
    totalRainfall += rainfall[i];

    // To obtain the next highest amount and the month number
    if (rainfall[i] > highestRainfall) {
      highestRainfall = rainfall[i];
      highMonth = i;
    }

    // To obtain the next lowest amount and the month number
    if (rainfall[i] < lowestRainfall) {
      lowestRainfall = rainfall[i];
      lowMonth = i;
    }
  }

  // Average rainfall amount
  averageRainfall = totalRainfall / 12;

  // Print each of the values calculated
  cout << "Total rainfall: " << totalRainfall << endl;
  cout << "Average monthly rainfall: " << averageRainfall << endl;
  cout << "The highest rainfall: Month " << (highMonth + 1) << "-> "
       << highestRainfall << endl;
  cout << "The lowest rainfall: Month " << (lowMonth + 1) << "-> "
       << lowestRainfall << endl;

  // End of program
  return 0;
}
