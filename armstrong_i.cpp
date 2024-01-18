#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n,sum;
	cin>>n;
	int o=n;
	
	while(n>0){
		int lst=n%10;
		sum+=pow(lst,3);
		n/=10;
	}
	if(sum==original){
		cout<<original;
	}
}
