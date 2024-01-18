#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter the three numbers:";
	cin>>a>>b>>c;
	
	int l = (a>b)*(a>c)*a+(b>a)*(b>c)*b+(c>b)*(c>a)*c;
//	int l = a>b ? (a>c ? l=a:l=c) : (b>c ? l=b:l=c); 
	cout<<l;
}
