#include <iostream>
using namespace std;
int main(){
	int n=5;
	
	// Square pattern
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<"* ";
		}
		cout<<"\n";
		
	}
	
	// Increasing Triangle
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
	cout<<"\n";
	// Decreasing Triangle
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
	cout<<"\n";
	// Right Sided Increasing Triangle 
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			cout<<"  ";
		}
		for(int j=1;j<=i;j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
	cout<<"\n";
	
	//Right Sided Decreasing Triangle
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<"  ";
		}
		for(int j=i;j<=n;j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
	cout<<"\n";
	
	// Hill Pattern
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			cout<<"  ";
		}
		for(int j=1;j<i;j++){
			cout<<"* ";
		}
		for(int j=1;j<=i;j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
	cout<<"\n";
	
	// Reverse Hill
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<"  ";
		}
		for(int j=i;j<n;j++){
			cout<<"* ";
		}
		for(int j=i;j<=n;j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
	cout<<"\n";
	
	// Diamond Pattern
	for(int i=1;i<n;i++){
		for(int j=i;j<=n;j++){
			cout<<"  ";
		}
		for(int j=1;j<i;j++){
			cout<<"* ";
		}
		for(int j=1;j<=i;j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<"  ";
		}
		for(int j=i;j<n;j++){
			cout<<"* ";
		}
		for(int j=i;j<=n;j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
	cout<<"\n";
	
	// Left Pascal
	for(int i=1;i<=n;i++){
		for(int j=1;j<i;j++){
			cout<<"* ";
		}
		cout<<"\n";
}
		
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			cout<<"* ";
		}
		
		cout<<"\n";
	
	}
	cout<<"\n";
	
	// Sandglass
	for(int i=1;i<n;i++){
		for(int j=1;j<=i;j++){
			cout<<" ";
		}
		for(int j=i;j<=n;j++){
			cout<<"* ";
		}
		cout<<"\n";
	
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			cout<<" ";
		}
	
		for(int j=1;j<=i;j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
	cout<<"\n";
	
	// Double Hil
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<"* ";
		}
		
		
		for(int j=i;j<=n-3;j++){
			cout<<"  ";
		}
		
		
		for(int j=i;j<=n;j++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
}
