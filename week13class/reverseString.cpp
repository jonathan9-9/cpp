#include <iostream>

std::string reverseString(std::string);
int main() {
  // victory
  std::string exampleString = "yrotciv";
  std::string result = reverseString(exampleString);
  std::cout << "Reversed String: " << result << std::endl;
  return 0;
}

std::string reverseString(std::string exampleStr) {
  if (exampleStr.length() <= 1) {
    return exampleStr;
  }
  return reverseString(exampleStr.substr(1)) + exampleStr[0];
}
