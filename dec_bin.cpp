#include <iostream>
using namespace std;
int main(){
	int d,bin,o=1;
	cout<<"Enter the number in decimal: ";
	cin>>d;
	int original=d;
	while(d>0){	
		bin=(bin+d%2)*o;
		d/=2; 
		o*=10;
	}
	cout<<remain;
}
