#include <iomanip>
#include <iostream>
using namespace std;

int main() {

  int number = 7;

  // []: this is the capture list that "captures" variables from outside the
  // scope
  auto numTimesTwo = [&number](int num) { return number * num; };
  auto divideByThree = [](int num1) { return (double)num1 / 3; };

  cout << numTimesTwo(2) << endl;

  cout << setprecision(3) << divideByThree(22) << endl;

  return 0;
}
