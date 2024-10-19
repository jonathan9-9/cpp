#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// Program finds k largest elements using a minimum heap to efficiently find k
// largest elements

vector<int> topKElements(const vector<int> &nums, int k) {
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

int main() { return 0; }
