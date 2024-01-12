#include <iostream>
using namespace std;
int main(){
	cout<<"Enter the two numbers as dividend and divisor:";
	int a,b,q,r;
	cin>>a;
	cin>>b;
	q=a/b;
	r=a%b;
	cout<<"The quotient is:"<<q<<endl<<"The remainder is:"<<r;
}
