#include <iostream>
using namespace std;

int getMode(int arr[], int numElements) {
  int mode = -1;
  int maxCount = 0;

  for (int i = 0; i < numElements; i++) {
    int count = 0;

    for (int j = 0; j < numElements; j++) {
      if (arr[i] == arr[j]) {
        count++;
      }
    }

    if (count > maxCount) {
      maxCount = count;
      mode = arr[i];
      // To account for duplicate numbers i.e 2,2,4,4
    } else if (maxCount == count && arr[i] != mode) {
      return -1;
    }
  }
  if (maxCount == 1) {
    return -1;
  }

  return mode;
}

int main() {
  int arr[] = {7, 4, 7, 10, 1, 2, 10};
  int numElements = sizeof(arr) / sizeof(arr[0]);

  int mode = getMode(arr, numElements);
  if (mode != -1) {
    cout << "The mode is: " << mode << endl;
  } else {
    cout << "No mode found" << endl;
  }
  return 0;
}
