#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
  unordered_map<string, int> hashMap;

  hashMap["apple"] = 5;
  hashMap["grape"] = 3;
  hashMap["orange"] = 7;

  cout << "Price of apple: " << hashMap["apple"] << endl;

  if (hashMap.find("grape") != hashMap.end()) {
    cout << "Grape is in the hash map" << endl;
  }

  for (auto &pair : hashMap) {
    pair.second += 2;
  }

  for (auto &pair : hashMap) {
    cout << pair.first << ": " << pair.second << endl;
  }

  return 0;
}
