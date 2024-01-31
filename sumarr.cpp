#include <iostream>
using namespace std;
int main(){
	int arr[]={1,2,3,4,5};
	int sum;
	for(int ele:arr){
		sum+=ele;
	}
	cout<<sum;	
}
