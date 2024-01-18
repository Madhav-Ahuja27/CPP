#include <iostream>
using namespace std;
int main(){
	int p,s=0;
	cin>>p;
	for(int i = 2; i < p; i++){
		if(p%i==0){
			cout<<"The number is NOT prime";
			s=1;
			break;
		}
	}
	if(s==0){
		cout<<"The number is prime";
	}
		

	
}
