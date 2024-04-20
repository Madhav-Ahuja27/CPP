#include <iostream>
using namespace std;
#include <string>
#include <vector>

int countZ(vector<int> bin){
  int zC=0;
  for(int i:bin){
    if(i==0){
      zC++;
    }
  }
  return zC;
}
int main(){
  int n;
  vector<int> binary;
  cin>>n;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    binary.push_back(x);
  }
  for(int i:binary){
    if(i!=0 && i!=1){
      cout<<"Invalid binary number";
      exit(0);
    }
  }
  int zC=countZ(binary); 
  vector<int> sort01;
  for(int i=0;i<zC;i++){
    sort01.push_back(0);
  }
  for(int i=zC;i<binary.size();i++){
    sort01.push_back(1);
  }
  for(int i=0;i<sort01.size();i++){
    cout<<sort01[i];
  }
}
