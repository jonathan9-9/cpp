#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// Program finds k largest elements using a minimum heap to efficiently find k
// largest elements

vector<int> topKSmallestElements(const vector<int> &nums, int k) {
  priority_queue<int> maxHeap;

  for (int i = 0; i < k; i++) {
    maxHeap.push(nums[i]);
  }

  for (int i = k; i < nums.size(); i++) {
    if (nums[i] < maxHeap.top()) {
      maxHeap.pop();
      maxHeap.push(nums[i]);
    }
  }

  vector<int> topK;

  while (!maxHeap.empty()) {
    topK.push_back(maxHeap.top());
    maxHeap.pop();
  }

  return topK;
}

int main() {
  vector<int> nums = {4, 3, 10, 9, 17, 20, 80, 40, 45};
  int k = 3;

  vector<int> topK = topKSmallestElements(nums, k);

  sort(topK.begin(), topK.end());

  cout << "Top " << k << " smallest elements are: ";

  for (int num : topK) {
    cout << " " << num;
  }

  cout << endl;

  return 0;
}
