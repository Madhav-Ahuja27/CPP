#include <iostream>
using namespace std;
#include <vector>
int main() {
  vector<int> ans;
  int arro[5] = {1, 3, 5, 7, 9};
  int arre[3] = {2, 4, 6};
  int s1 = sizeof(arro) / sizeof(arro[0]);
  int s2 = sizeof(arre) / sizeof(arre[0]);
  // for (int i = 0; i < s1; i++) {
  //   for (int j = 0; j < s2; j++) {
  //     if (arro[i] < arre[j]) {
  //       ans.push_back(arro[i]);
  //       i++;
  //     } else {
  //       ans.push_back(arre[j]);
  //       j++;
  //     }
  //   }
  // }

  int i = 0, j = 0;
  while (i < s1 && j < s2) {
    if (arro[i] < arre[j]) {
      ans.push_back(arro[i]);
      i++;
    } else if(arro[i] > arre[j]){
      ans.push_back(arre[j]);
      j++;
    }else{
      ans.push_back(arro[i]);
      i++;
      ans.push_back(arre[j]);
      j++;
    }
  }
  if(s1>s2){
     for(int x=i;x<s1;x++){
       ans.push_back(arro[x]);
     }
  }else if(s1<s2){
    for(int y=j;y<s1;y++){
       ans.push_back(arre[y]);
     }
  }
 
  
  for (int ele : ans) {
    cout << ele << endl;
  }
}
