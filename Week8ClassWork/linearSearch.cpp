#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int value) {
  int index = 0;

  while (index < size) {
    if (arr[index] == value) {
      return index;
    }
    index++;
  }
  return -1;
}

int main() {
  // Define an array to search through
  int arr[] = {10, 23, 35, 42, 57, 69};
  int size = sizeof(arr) / sizeof(arr[0]);

  // Specify the value to search for
  int value = 69;

  // Call the linearSearch function and capture the result
  int result = linearSearch(arr, size, value);

  if (result != -1) {

    cout << "Value found at index: " << result << endl;
  } else {

    cout << "Value not found in the array." << endl;
  }

  return 0;
}
