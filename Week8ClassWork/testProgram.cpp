#include <cctype>
#include <iostream>
using namespace std;

int main() {
  const int size = 20;

  char city[size];

  cout << "Enter city name: " << endl;

  cin >> city;

  // cin.getline(city, size);

  cout << "You entered: " << city << endl;
  // char ltr = 'h'

  // cout << "First version:" << char(toupper(ltr)) << endl;
  // cout << "Second version:" << static_cast<char>(toupper(ltr)) << endl;
  return 0;
}
