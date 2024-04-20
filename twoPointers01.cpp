#include <iostream>
using namespace std;
#include <vector>
int main(){
  int n;
  cin>>n;
  vector<int> orig;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    orig.push_back(x);
  }
  int size=orig.size();
  int l=0,r=size-1;
  while(l<=r){
    if(orig[l]==1 && orig[r]==0){
      orig[l++]=0;
      orig[r--]=1;
    }
    if(orig[l]==0){
      l++;
    }
    if(orig[r]==1){
      r--;
    }
  }
  for(int i:orig){
    cout<<i;
  }
}
