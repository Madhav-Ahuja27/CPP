#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int b,dec=0;
	cout<<"Enter the binary number:";
	cin>>b;
	int p=0;
	while(b>0){
		int lst=b%10;
		dec+=lst*(pow(2,p));
		b/=10;
		p+=1;
	}
	cout<<dec;

}
