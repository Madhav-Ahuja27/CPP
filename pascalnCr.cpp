#include <iostream>
using namespace std;

int fact(int x){
	int f=1;
	for(int i=1;i<=x;i++){
		f*=i;
	}
	return f;
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=i;j<=n;j++){
			cout<<" ";
		}
		for(int j=0;j<=i;j++){
			cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
		}
		cout<<endl;
	}
}
