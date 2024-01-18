#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter values of a and b:";
	cin>>a>>b;
	int s,l,gcd=1;
	if(a>b){
		l=a;
		s=b;
	}else{
		l=b;
		s=a;
	}
	for(int i=2;i<=s;i++){
		if(s%i==0 && l%i==0){
			gcd=i;
		}
	}
	int lcm = (abs(a*b))/gcd;
	cout<<lcm;
}
