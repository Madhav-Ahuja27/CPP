#include <iostream>
using namespace std;
#include <vector>
int main() {
  int arr[6] = {1, 2, 2, 2, 3, 4};
  int arr2[4] = {2, 2, 3, 3};
  int s1 = sizeof(arr) / sizeof(arr[0]);
  int s2 = sizeof(arr2) / sizeof(arr2[0]);
  vector<int> ans;
  for (int i = 0; i < s1; i++) {
    for (int j = 0; j < s2; j++) {
      if (arr[i] == arr2[j]) {
        ans.push_back(arr[i]);
        arr2[j] = INT8_MIN;
        break;
      }
    }
  }
  for (int i : ans) {
    cout << i << endl;
  }
}
