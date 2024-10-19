#include <iostream>
using namespace std;
// some code which raises an arbitrary integer
// to an arbitrary power

// int raiseToPower(int base, int exponent) {

//   int result = 1;

//   for (int i = 0; i < exponent; i++) {
//     result *= base;
//   }
//   return result;
// }

int raiseToPower(int base, int exponent) {

  if (exponent == 0) {
    return 1;
  } else {
    return base * raiseToPower(base, exponent - 1);
  }
}

int main() {
  int threeExpFour = raiseToPower(3, 4);
  cout << "3^4 is " << threeExpFour << endl;
  int sixExpFive = raiseToPower(6, 5);
  cout << "6^5 is " << sixExpFive << endl;
  int twelveExpTen = raiseToPower(12, 10);
  cout << "12^10 is " << twelveExpTen << endl;
  return 0;
}
