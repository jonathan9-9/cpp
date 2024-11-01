#include <iostream>
using namespace std;

void selectionSort(int arr[], int size, int &count) {
  int minIndex, minValue;

  // variable start serves as the point of comparison to all other elements in
  // unsorted portion of the array
  for (int start = 0; start < size - 1; start++) {
    minIndex = start;
    minValue = arr[start];
    for (int index = start + 1; index < size; index++) {
      if (arr[index] < minValue) {
        minValue = arr[index];
        minIndex = index;
      }
    }
    if (minIndex != start) {
      swap(arr[minIndex], arr[start]);
      count++;
      cout << "SelectionSort Swap " << arr[start] << " and " << arr[minIndex]
           << " | Current swaps: " << count << endl;
    }
  }
}

void bubbleSort(int arr[], int size, int &count) {
  for (int maxElement = size - 1; maxElement > 0; maxElement--) {
    for (int i = 0; i < maxElement; i++) {
      if (arr[i] > arr[i + 1]) {
        swap(arr[i], arr[i + 1]);
        count++;
        cout << "BubbleSort Swap " << arr[i] << " and " << arr[i + 1]
             << " | Current swaps: " << count << endl; // Debug statement
      }
    }
  }
}

void displayArray(int arr[], int numElements) {
  for (int i = 0; i < numElements; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  const int SIZE = 20;
  int array1[SIZE] = {29, 10, 14, 37, 13, 25, 19, 44, 55, 35,
                      11, 2,  8,  3,  15, 5,  42, 7,  1,  20};
  int array2[SIZE] = {29, 10, 14, 37, 13, 25, 19, 44, 55, 35,
                      11, 2,  8,  3,  15, 5,  42, 7,  1,  20};

  int selectionCount = 0;
  int bubbleCount = 0;

  selectionSort(array1, SIZE, selectionCount);
  displayArray(array1, SIZE);

  bubbleSort(array2, SIZE, bubbleCount);
  displayArray(array2, SIZE);

  return 0;
}
