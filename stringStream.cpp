#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main() {

  string str;
  cout << "Enter string of numbers: ";
  cin >> str;
  stringstream ss(str);
  int a, b, c;
  char ch;
  ss >> ch >> a >> ch >> b >> ch >> c;
  int eh = 97;
  vector<int> ans;
  for (int i = 0; i < 3; i++) {
    ans.push_back(char(eh++));
  }
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i];
  }
}
