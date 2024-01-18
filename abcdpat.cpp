#include <iostream>
using namespace std;
int main(){
	int n=5;
	int x=65;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<char(x);
		}
		cout<<"\n";
		x+=1;
	}
	cout<<endl;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
	cout<<"\n";
}

