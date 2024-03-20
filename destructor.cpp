#include <iostream>
using namespace std;
class MyClass {
public:
    MyClass() {
        cout << "Object is being created" << endl;
    }
    ~MyClass() {
        cout << "Object is being deleted" << endl;
    }
};

int main() {
    MyClass obj;
    return 0;
}
class counter
{
int id; 
public:
counter(int i);
{
id=i;
cout<<"constructor of object with id= "<<id;

}
  ~counter()
{
cout<<"destructor with id "<<id;
};
int main(){
  //
  
}
