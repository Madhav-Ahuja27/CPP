#include <iostream>
using namespace std;
int main(){
	int n,remainder,reversed=0;
	cin>>n;
	while (n!=0){
		remainder = n%10;
		reversed=reversed*10+remainder;
		n/=10;		
	}
	cout<<reversed;
}
