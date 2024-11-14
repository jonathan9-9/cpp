#include <iostream>

bool isMember(int[], int, int);
int main() {
  int nums[] = {3, 7, 10, 23};
  int searchValue = 7;
  int size = 4;

  bool res = isMember(nums, searchValue, size);

  if (res) {
    std::cout << "Value found in array: " << searchValue << std::endl;
  } else {
    std::cout << "Value not found in array" << std::endl;
  }
  return 0;
}

bool isMember(int arr[], int val, int size) {
  if (size == 0) {
    return false;
  }

  if (arr[0] == val) {
    return true;
  }

  return isMember(arr + 1, val, size - 1);
}
