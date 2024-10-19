#include <cmath>
#include <iostream>
using namespace std;

int main() {
  double res = 0.0;
  for (int i = 0; i < 101; i++) {
    res += sqrt(i);
  }

  cout << "Result: " << res << endl;

  return 0;
}
