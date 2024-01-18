#include <iostream>
using namespace std;
int main(){
	int n,p;
	cout<<"Enter number and power";
	cin>>n>>p;
	int final=1;
	if(p==0){
		n=1;
	}else{
		for(int i=1;i<=p;i++){
			final*=n;
		}	
	}
	cout<<final;
}
