#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter values for a,b,c";
	cin>>a>>b>>c;
	int D = abs((b*b)-(4*a*c));
	float r1 = ((-b) + sqrt(D))/(2*a);
	float r2 = ((-b) - sqrt(D))/(2*a);
	cout<<"The roots are: "<<r1<<" and "<<r2;
}
