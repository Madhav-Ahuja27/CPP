#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n,sum;
	cin>>n;
	int original = n;
	while(n!=0){
		int lst = n%10;
		sum+=pow(lst,3);
		n/=10;
	}
	if(sum==original){
		cout<<"Armstrong";
	}else{
		cout<<"NOT";
	}
}
