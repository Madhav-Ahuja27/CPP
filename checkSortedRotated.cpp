#include <iostream>
#include <vector>
using namespace std;
#include <bits/stdc++.h>
#include <string>

int main() {
  vector<int> nums = {3, 4, 5, 1, 2};
 
  int count = 0;
  for (int i = 1; i < nums.size(); i++) {
    if (nums[i - 1] > nums[i]) {
      count++;
    }
  }
  if (nums[nums.size() - 1] > nums[0]) {
    count++;
  }
  cout << count;
}
