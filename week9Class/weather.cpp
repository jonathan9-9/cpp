#include <iostream>
#include <string>
using namespace std;

struct WeatherInfo {
  double lowTemp;
  double highTemp;
  double totalRainfall;
  double avgTemp;
};

const int SIZE = 12;
const string months[SIZE] = {"January",   "February", "March",    "April",
                             "May",       "June",     "July",     "August",
                             "September", "October",  "November", "December"};

int main() {
  WeatherInfo weatherData[SIZE];
  double totalAvgTemp = 0.0;
  double totalRainfall = 0.0;
  double lowestTemp = 500.0;
  double highestTemp = -500.0;
  string lowestTempMonth = "", highestTempMonth = "";

  for (int i = 0; i < SIZE; i++) {

    cout << "Enter weather data for " << months[i] << ":" << endl;

    cout << "Total rainfall: \n";
    cin >> weatherData[i].totalRainfall;
    while (weatherData[i].totalRainfall < 0) {
      cout << "Invalid number. Rainfall cannot be negative. Try again.";
      cin >> weatherData[i].totalRainfall;
    }

    cout << "Low temperature (Fahrenheit): \n";
    cin >> weatherData[i].lowTemp;
    while (weatherData[i].lowTemp < -40 || weatherData[i].lowTemp > 120) {
      cout << "Temperature must be between -40 and 120 degrees fahrenheit. "
              "Re-try."
           << endl;
      cin >> weatherData[i].lowTemp;
    }
    cout << "High temperature (Fahrenheit): \n";
    cin >> weatherData[i].highTemp;
    while (weatherData[i].lowTemp < -40 || weatherData[i].highTemp > 120 ||
           weatherData[i].highTemp < weatherData[i].lowTemp) {
      cout << "Temperature must be between -40 and 120 degrees fahrenheit. "
              "Re-try."
           << endl;
      cin >> weatherData[i].highTemp;
    }

    weatherData[i].avgTemp =
        (weatherData[i].lowTemp + weatherData[i].highTemp) / 2;

    totalRainfall += weatherData[i].totalRainfall;

    totalAvgTemp += weatherData[i].avgTemp;

    if (weatherData[i].highTemp > highestTemp) {
      highestTemp = weatherData[i].highTemp;
      highestTempMonth = months[i];
    }

    if (weatherData[i].lowTemp < lowestTemp) {
      lowestTemp = weatherData[i].lowTemp;
      lowestTempMonth = months[i];
    }
  }
  double avgMonthlyRainfall = totalRainfall / SIZE;
  double avgOfMonthlyAvgTemp = totalAvgTemp / SIZE;

  cout << "\t**Weather Report** \n";
  cout << "-------------------------\n";
  cout << "Total rainfall: " << totalRainfall << endl;
  cout << "Average Monthly Rainfall: " << avgMonthlyRainfall << endl;
  cout << "Lowest temp: " << lowestTemp << " degrees" << "(" << lowestTempMonth
       << ")\n";

  cout << "Highest temp: " << highestTemp << " degrees" << "("
       << highestTempMonth << ")\n";
  cout << "Average of Monthly Average Temps: " << avgOfMonthlyAvgTemp
       << " degrees\n";

  return 0;
}
