#include <iostream>
using namespace std;
int main(){
	cout<<"Enter the number to be checked:";
	int n;
	cin>>n;
	string l;
	n%2==0 ? l="true":l="false";
	cout<<"The number is even:"<<l;
}
