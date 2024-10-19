#include <iostream>
using namespace std;

int main() {
  double height1;
  double length1;
  double width1;
  double height2;
  double length2;
  double width2;

  double volume1;
  double volume2;

  cout << "Provide the height, length, and width twice to determine which "
          "rectangle has larger volume"
       << endl;
  cin >> height1;
  cin >> length1;
  cin >> width1;

  cin >> height2;
  cin >> length2;
  cin >> width2;

  volume1 = height1 * length1 * width1;
  volume2 = height2 * length2 * width2;

  if (volume1 > volume2) {
    cout << "Rectangle1 has a larger volume";
  } else if (volume1 < volume2) {
    cout << "Rectangle2 has a larger volume";
  } else {
    cout << "Unable to compute volumes";
  }
  return 0;
}
