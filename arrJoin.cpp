#include <iostream>
using namespace std;
int main(){
	int arr1[]={1,2,4,5,6,7};
	int arr2[]={3,8,9};
	int arr3[sizeof(arr1)+sizeof(arr2)/sizeof(arr1[0])];
	for(int i=1;i<sizeof(arr2)/sizeof(arr2[0]);i++){
		arr1[sizeof(arr1)/sizeof(arr1[0])+i-1]=arr2[i-1];
	}
	for(int i=1;i<sizeof(arr1)/sizeof(arr1[0]);i++){
		cout<<arr1[i]<<endl<<arr3[i];
	}
}
