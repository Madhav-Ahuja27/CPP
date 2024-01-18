#include <iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter the value of the first operand:";
	cin>>a;
	cout<<"Enter the value of the second operand:";
	cin>>b;
	
	cout<<"Choose the operation to perform (+,-,*,/,%): ";
	char operat;
	cin>>operat;
	
	switch(operat){
		case '+':
			cout<<"The addition of "<<a<<" and "<<b<<" is: "<< a + b ;
			break;
		case '-':
			cout<<"The subtraction of "<<a<<" and "<<b<<" is: "<< a - b ;
			break;
		case '*':
			cout<<"The multiplication of "<<a<<" and "<<b<<" is: "<< a * b ;
			break;
		case '/':
			cout<<"The division of "<<a<<" and "<<b<<" is: "<<a / b ;
			break;
		case '%':
			cout<<"The remainder of "<<a<<" and "<<b<<" is: "<< a % b ;
			break;
		default:
			cout<<"Invalid Operation";
	}
}
