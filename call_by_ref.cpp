#include <iostream>
using namespace std;
void cbr(int *x,int *y){
	int swap = *x;
	*x=*y;
	*y=swap;
}
int main(){
	int x=5;
	int y=7;
	cbr(&x,&y);
	cout<<"The value of x is: "<<x<<" and y is: "<<y;
}
