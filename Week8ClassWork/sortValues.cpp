//

#include <iostream>
using namespace std;

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

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
           << " | Current swaps: " << count << endl; // Debug statement
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

int main() {
  int arr1[20] = {42, 17, 88, 3,  54, 29, 71, 16, 90, 23,
                  5,  38, 65, 12, 77, 49, 34, 10, 95, 68};

  int arr2[20] = {42, 17, 88, 3,  54, 29, 71, 16, 90, 23,
                  5,  38, 65, 12, 77, 49, 34, 10, 95, 68};
  int size1 = sizeof(arr1) / sizeof(arr1[0]);
  int size2 = sizeof(arr2) / sizeof(arr2[0]);

  int selectionExchanges = 0;
  int bubbleExchanges = 0;

  bubbleSort(arr1, size1, bubbleExchanges);
  selectionSort(arr2, size2, selectionExchanges);

  cout << "Array is now sorted(bubbleSort): " << endl;

  for (int i = 0; i < size1; i++) {
    cout << arr1[i] << " ";
  }
  cout << endl;
  cout << "Selection sort number of exchanges: " << selectionExchanges << endl;

  cout << "Second array sorted(selectionSort): " << endl;

  for (int i = 0; i < size2; i++) {
    cout << arr2[i] << " ";
  }
  cout << endl;

  cout << "Bubble sort number of exchanges: " << bubbleExchanges << endl;
  return 0;
}
