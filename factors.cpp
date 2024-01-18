#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	cout<<"The factors of "<<n<<" are:";
	for(int i=1;i<=n;i++){
		if(n%i==0){
			cout<<endl<<i;
		}
	}
}
