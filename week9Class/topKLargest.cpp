#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// Program finds k largest elements using a minimum heap to efficiently find k
// largest elements

vector<int> topKLargestElements(const vector<int> &nums, int k) {
  priority_queue<int, vector<int>, greater<int>> minHeap;

  for (int i = 0; i < k; i++) {
    minHeap.push(nums[i]);
  }

  for (int i = k; i < nums.size(); i++) {
    if (nums[i] > minHeap.top()) {
      minHeap.pop();
      minHeap.push(nums[i]);
    }
  }

  vector<int> topK;

  while (!minHeap.empty()) {
    topK.push_back(minHeap.top());
    minHeap.pop();
  }

  return topK;
}

int main() {
  vector<int> nums = {4, 3, 10, 9, 17, 20, 80, 40, 45};
  int k = 3;

  vector<int> topK = topKLargestElements(nums, k);

  cout << "Top " << k << " largest elements are: ";

  for (int num : topK) {
    cout << " " << num;
  }

  cout << endl;

  return 0;
}
