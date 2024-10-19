#include <cmath>
#include <iostream>
using namespace std;

int main() {
  double res = 0.0;

  for (int i = 1; i <= 100; i++) {
    res += exp(-i);
  }

  cout << "Result: " << res << endl;
  return 0;
}
