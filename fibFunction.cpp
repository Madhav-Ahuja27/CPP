#include <iostream>
using namespace std;

void fib(int n){
	int a=0;
	int b=1;
	int c=a+b;
	cout<<0<<endl<<1<<endl;
	for(int i=1;i<=n-2;i++){
		cout<<c<<endl;
		a=b;
		b=c;
		c=a+b;
	}
}

int main(){
	int n;
	cin>>n;
	
	fib(n);
}
