#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,rev;
	cin>>n;
	int original = n;
	while(n!=0){
		int lst = n%10;
		rev=(rev*10)+lst;
		n/=10;
	}
	if(original==rev){
		cout<<"Palindrome";
	}else{
		cout<<"NOT";
	}
}
