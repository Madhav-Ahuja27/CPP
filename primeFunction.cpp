#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

bool isP(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	int l,u;
	cin>>l>>u;
	for(int i=l;i<=u;i++){
		if(isP(i)){
			cout<<endl<<i;
		}
	}
}
