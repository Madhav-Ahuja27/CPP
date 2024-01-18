#include <iostream>
using namespace std;
int main(){
	int n=5;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(i!=j || i!=n){
				cout<<"* ";
			}	
		}
		for(int j=i;j<=n-2;j++){
			cout<<"  ";
		}
		for(int j=i;j<=n-1;j++){
			cout<<"  ";
		}
		for(int j=1;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	cout<<endl;
}
	
