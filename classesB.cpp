#include <iostream>
using namespace std;
class Base {
public:
  int x;
protected:
  int y;
private:
  int z;
};

class Derived : private Base {
  int a;
};
int main() {
  cout<<"Program has started running";
  Derived objD;
  // objD.x=1; 
  
}
