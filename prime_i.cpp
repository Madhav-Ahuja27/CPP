#include <iostream>
using namespace std;
int main(){
	int ll,ul;
	cin>>ll>>ul;
	int y=1;
	cout<<"The prime numbers in the interval "<<ll<<" to "<<ul<<" are:";
	for(int i=ll;i<=ul;i++){
		y=1;
		for(int j=2;j<=i;j++){
			if(i%j==0){
				y=0;
			}else{
				y=1;
			}
		
		if(y==1){
			cout<<endl<<i;
		}
	}
}
}
