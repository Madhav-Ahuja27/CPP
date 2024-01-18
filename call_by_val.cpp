#include <iostream>
using namespace std;
void cbv(int x){
	x=3;
}

int main(){
	int x=5;
	cbv(x);
	cout<<x;
}

