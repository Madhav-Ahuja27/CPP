#include <iostream>
using namespace std;
int main() {
	int n=5,x=6;
	for(int i=1;i<=5;i++){
	
		for(int j=i;j<=n;j++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			if(j==i || j==1){
				cout<<1<<" ";
			}else{
				if(j==int(n/2)+1 && i>4 && i%2==0){
					cout<<x<<" ";
				}else if(j==int(n/2)+1 && i>4 && i%2!=0){
					cout<<x<<" ";
				} 
				else{
					cout<<i-1<<" ";
				}
				
			}
		}
		x+=4;
		cout<<endl;
	}
}
