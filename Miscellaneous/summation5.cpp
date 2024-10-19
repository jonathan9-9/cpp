#include <cmath>
#include <iostream>
using namespace std;

int main() {
  double res = 0.0;

  for (int i = 1; i <= 50; i++) {
    res += 1 / (pow(i, 3));
  }

  cout << "Result: " << res << endl;
  return 0;
}
