#include <iostream>
#include <vector>
using namespace std;
#include <bits/stdc++.h>
#include <string>
int main() {
  vector<int> arr1 = {9, 8, 7};
  vector<int> arr2 = {8, 9};
  int i = arr1.size() - 1;
  int j = arr2.size() - 1;
  vector<int> ans;
  int carry = 0;
  while (i >= 0 && j >= 0) {
    int sum = ((arr1[i] + arr2[j]) % 10) + carry;
    carry = (arr1[i] + arr2[j]) / 10;
    ans.push_back(sum);
    i--;
    j--;
  }
  
 while(i>=0){
   ans.push_back(arr1[i]);
   i--;
 }
 while(j>=0){
   ans.push_back(arr2[j]);
   j--;
  }
 if(carry!=0){
   ans.push_back(carry);
  }
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }
}
