#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <string>
#include <vector>

int main() {
  vector<int> nos = {1, 2, 3, 4, 5};
  int n = nos.size();
  vector<int> ans(n);
  int k;
  cout << "Enter how many steps to rotate: ";
  cin >> k;

  for (int i = 0; i < n; i++) {
    ans[(i + k) % n] = nos[i];
  }
  cout << "The ans array is: " << endl;
  for (int ele : ans) {
    cout << ele << endl;
  }
}
