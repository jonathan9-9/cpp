#include <iostream>
using namespace std;

int binarySearch(int array[], int size, int value) {
  int left = 0,         // First array element
      right = size - 1, // Last array element
      middle,           // Mid point of search
      position = -1;    // Position of search value
  bool found = false;   // Flag

  while (!found && left <= right) {
    middle = (left + right) / 2; // Calculate mid point
    if (array[middle] == value)  // If value is found at mid
    {
      found = true;
      position = middle;
    } else if (array[middle] > value) {

      right = middle - 1; // If value is in lower half
    } else {

      left = middle + 1; // If value is in upper half
    }
  }
  return position;
}

int main() {
  // Define an array to search through
  int arr[] = {10, 23, 35, 42, 57, 69};
  int size = sizeof(arr) / sizeof(arr[0]);

  // Specify the value to search for
  int value = 23;

  // Call the binarySearch function and capture the result
  int result = binarySearch(arr, size, value);

  if (result != -1) {

    cout << "Value found at index: " << result << endl;
  } else {

    cout << "Value not found in the array." << endl;
  }

  return 0;
}
