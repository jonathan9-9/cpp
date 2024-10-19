#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  double testScore1;
  double testScore2;
  double testScore3;
  double testScore4;
  double testScore5;

  double averageScore;

  cout << "Provide five test scores" << endl;
  cin >> testScore1;
  cin >> testScore2;
  cin >> testScore3;
  cin >> testScore4;
  cin >> testScore5;

  averageScore =
      (testScore1 + testScore2 + testScore3 + testScore4 + testScore5) / 5;

  cout << fixed << setprecision(1) << averageScore << endl;

  return 0;
}
