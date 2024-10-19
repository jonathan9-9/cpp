#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int res = 0;

  for (int i = 1; i <= 200; i++) {
    res += (i * i);
  }

  cout << "Result: " << res << endl;
  return 0;
}
