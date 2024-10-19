#include <cmath>
#include <iostream>
using namespace std;

int main() {
  double result = 0.0;

  for (int i = 10; i <= 25; i++) {
    result += cos(i * M_PI / 180.0);
  }

  cout << "The summation is: " << result << endl;

  return 0;
}
