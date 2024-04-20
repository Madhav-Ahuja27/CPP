#include <iostream>
using namespace std;
void swap(int* a,int* b){
  int temp=*a;
  *a=*b;
  *b=temp;
}

int main() {
  int arr[6]={1,2,3,4,5,6};
  int n=sizeof(arr)/sizeof(arr[0]);
  int start=0,end=n-1;
  for(int i=0;i<n/2;i++){
    swap(&arr[start],&arr[end]);
  }
  for(int ele:arr){
    cout<<ele<<endl;
  }
}
