/* If the operand is something normal or expected like numbers on both sides of a + operator obv its going to use the predefined definition of plus, 
but what if the operands are objects? or string? or of some other type that the compiler will not associate with the + operator?
That is why we use overloading of operators
It is dependent heavily on THE TYPE OF OPERANDS. */


// Do not pass an expensive parameter to copy, instead pass by reference

#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include <string>
using namespace std;



// class Inc{
// int value;
// public:
//   Inc(int val){
//     value=val;
//   }
//   void operator++(){
//     value+=5;
//   }
//   void printVal(){
//     cout<<"Value after increasing is: "<<value;
//   }
// };


int operator+(int a, int b){
  return a*10*b;
}

int main(){
  
  int a=10,b=5;

  cout<<"Value after combining is: "<<a + b;<<endl;
  // Inc overload(10);
  
  // overload.printVal();
}
