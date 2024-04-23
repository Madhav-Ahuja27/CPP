/* You want to keep a variable private and inaccessible in a class, but you also do not want to create a public function to access the variable, what do you do now? (Maybe it has an extremely important value?)
  You create a friend function*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Tri{
  int side;
  float cir;
  float area;
  public:
    void setVal(int s){
      side=s;
      cir=side*3;
      area=(1.73*side*side)/4;
    }
  // friend void printRes(Tri);
  friend class SubmitHomework;
};

class SubmitHomework{
  public:
    void printRes(Tri obj){
    cout<<"The side is: "<<obj.side<<" , the circumference is: "<<obj.cir<<" and the area is: "<<obj.area;
  }
};

int main(){
  Tri triangle;
  Tri *ptr=&triangle;
  ptr->setVal(3);
  SubmitHomework area;
  area.printRes(*(ptr));
}
