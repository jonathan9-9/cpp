#include <iostream>
using namespace std;

// Displays all the integers greater than n
void displayGreaterThanN(int arr[], int size, int n) {
  // Loop through the array based on size
  for (int i = 0; i < size; i++) {
    // Check if the current element is greater than n
    if (arr[i] > n) {
      // Output the current element if it's greater than n
      cout << arr[i] << " ";
    }
  }
  cout << '\n'; // Print a newline after displaying the numbers
}

int main() {
  // Declare variables to hold the size of the array and the comparison number
  // 'n'
  int size, n;

  // Prompt the user for the size of the array
  cout << "Enter the size of the array: ";
  cin >> size;

  // Input validation to ensure a valid array size
  if (size <= 0) {
    cout << "Invalid size. The array must contain at least one element."
         << endl;
    return; // Exit the program if the size is not valid
  }

  // Declare an array based on the size
  int numbers[size];

  // Prompt the user to input the elements of the array
  cout << "Enter " << size << " integers:" << endl;
  for (int i = 0; i < size; i++) {
    cin >> numbers[i]; // Input each element into the array
  }

  // Prompt the user to enter n to make comparisons
  cout << "Enter the number to compare against: ";
  cin >> n;

  // Call the function to display numbers greater than n
  cout << "Numbers greater than " << n << ": ";
  displayGreaterThanN(numbers, size, n);

  return 0;
}
