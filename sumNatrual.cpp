#include <iostream>
using namespace std;
int pSum(int n){
//	int sum=n*(n+1)/2;
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=i;
	}
	return sum;
}

int main(){
	int n;
	cin>>n;
	cout<<pSum(n);
}
