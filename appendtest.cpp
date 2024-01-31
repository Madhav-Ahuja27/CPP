#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		arr[i-1]=x;
	}
	for(int j=0;j<(sizeof(arr)/sizeof(arr[0]));j++){
		cout<<arr[j]<<endl;
	}
}
