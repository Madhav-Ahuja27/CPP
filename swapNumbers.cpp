#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter value of 'a' and 'b':";
	cin>>a>>b;
	c=a;
	a=b;
	b=c;
	cout<<endl<<"The value of a is:"<<a;
	cout<<endl<<"The value of b is:"<<b;
}
