#include <iostream>
using namespace std;
#include <vector>
int main(){
  int arr[5]={-10,-3,2,5,6};
  int n=sizeof(arr)/sizeof(arr[0]);
  int lp=0,rp=n-1;
  vector<int> sortedArr;
  while(lp<rp){
    if(abs(arr[lp])>abs(arr[rp])){
      sortedArr.push_back(arr[lp]*arr[lp]);
      lp++;
    }else{
      sortedArr.push_back(arr[rp]*arr[rp]);
      rp--;
    }
  }
  for(int i=sortedArr.size()-1;i>=0;i--){
    cout<<sortedArr[i]<<endl;
  }
}

