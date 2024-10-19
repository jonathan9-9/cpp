#include <iostream>
using namespace std;

int searchValueByLinear(int arr[], int size, int value) {
  int index = 0;
  while (index < size) {
    if (arr[index] == value) {
      return index;
    }
    index++;
  }
  return -1;
}

int searchValueByBinary(int arr[], int size, int value) {
  int left = 0, right = size - 1, mid;

  while (left <= right) {

    mid = left + (right - left) / 2;
    if (arr[mid] == value) {
      return mid;
    } else if (arr[mid] > value) {
      right = mid - 1;
    } else {
      left = mid + 1;
    }
  }
  return -1;
}

int main() {

  int nums[20] = {1,  2,  3,  4,  5,  6,  7,  8,  9,  10,
                  11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

  int size = sizeof(nums) / sizeof(nums[0]);

  int val = 8;

  int linearResult = searchValueByLinear(nums, size, val);
  int binaryResult = searchValueByBinary(nums, size, val);

  if (linearResult != -1) {

    cout << "Linear Search - value found at index: " << linearResult << endl;
  } else {
    cout << "Value not found in the array." << endl;
  }

  if (binaryResult != -1) {

    cout << "Binary Search - value found at index: " << binaryResult << endl;
  } else {
    cout << "Value not found in the array." << endl;
  }

  return 0;
}
