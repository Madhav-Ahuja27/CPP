#include<iostream> 
using namespace std; 

class Base 
{ 
public: 
  virtual void show() { cout<<" In Base \n"; } 
}; 

class Derived: public Base 
{ 
public: 
  void show() { cout<<"In Derived \n"; } 
}; 

class MyClass{
public:
  int x;
  int y;
  MyClass(){
    cout<<"Constructor has been called\n";
  }
  ~MyClass(){
    cout<<"\nDestructor has been called";
  }
  int bruh(int x){
    return x;
  }
};

int over(int x,int y){
  cout<<"First function is being called"<<endl;
  return x+y;
}
int over(int x,int y,int z){
  cout<<"Second function is being called"<<endl;
  return x+y+z;
}
int main(void) 
{ 
  MyClass obj1;
  obj1.x=1;
  obj1.y=2;
  cout<<obj1.x<<endl<<obj1.y;
  cout<<endl<<obj1.bruh(obj1.x)<<endl;
  int a=1;
  int b=2;
  int c=1;
  cout<<over(a,b);
  cout<<endl;
  cout<<over(a,b,c);
  
  return 0; 
}
