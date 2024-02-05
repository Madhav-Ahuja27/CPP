#include <iostream>
using namespace std;

int mex(int a,int b){
	return a>b?a:b;
	
}

bool pythTrip(int x,int y,int z){
	int a=mex(x,mex(y,z));
	int b,c;
	if(a==x){
		b=y;
		c=z;	
	}else if(a==y){
		b=x;
		c=z;
	}else{
		b=x;
		c=y;
	}
	if(a*a==((b*b)+(c*c))){
		return true;
	}else{
		return false;
	}
}

int main(){
	int x,y,z;
	cin>>x>>y>>z;
	if(pythTrip(x,y,z)){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
}
