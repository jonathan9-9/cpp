#include <iostream>
using namespace std;

int main() {
  int result = 0;

  for (int i = 5; i <= 15; i++) {
    result += (i * i) + (5 * i);
  }
  cout << "Result: " << result << endl;

  return result;
}
