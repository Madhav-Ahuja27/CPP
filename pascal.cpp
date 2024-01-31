#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int coeff=1;
		for(int j=i;j<=n;j++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<coeff<<" ";
			coeff=coeff*(i-j)/j;
		}
		cout<<endl;
	}
}
