#include <iostream>
using namespace std;
int main(){
	cout<<"Enter the number to check:";
	int n;
	cin>>n;
	if(n%2==0){
		cout<<"The number is even.";
	}else{
		cout<<"The number is odd.";
	}
	if(n%10==0)
		cout<<"\nThe number is divisible by 10.";
	else
		cout<<"\nThe number is NOT divisible by 10.";
	if(n%5==0)
		cout<<"\nThe number is divisible by 5.";
	else if(n%3==0)
		cout<<"\nThe number is divisible by 3.";
	else
		cout<<"\nThe number is not divisible by any of these.\n";
		
	switch(n){
	
		case 2:
			cout<<"The number is 2";
			break;
		case 3:
			cout<<"The number is 3";
			break;
		case 4:
			cout<<"The number is 4";
			break;
		case 5:
			cout<<"The number is 5";
		default:
			cout<<"The number is not any of these.";
	}
}
