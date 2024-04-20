#include <iostream>
using namespace std;

void swap(int* a, int*b){
  int temp=*a;
  *a=*b;
  *b=temp;
}

int main() {
  int arr[6]={1,2,3,4,5,6};
  int n=sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<n;i+=2){
    if(arr[i+1]){
      swap(&arr[i],&arr[i+1]);
    }
  }
  for(int i:arr){
    cout<<i<<endl;
  }
}
