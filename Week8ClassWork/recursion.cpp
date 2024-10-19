#include <iostream>
using namespace std;
#include <string>

// Hello -> 5

int findLengthStr(string str1) {
  if (str1 == "") {
    return 0;
  }
  return findLengthStr(str1.substr(1)) + 1;
}

int main() {

  string s = "hello";

  cout << findLengthStr(s);
  return 0;
}
