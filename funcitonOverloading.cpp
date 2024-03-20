#include <iostream>
using namespace std;

class over {
public:
    int a;
    int b;
    int operator+ (over &obj) {
        int value1 = this -> a;
        int value2 = obj.b;
        return value2 - value1;
    }
};


class Number{
  public:
  int a;
  Number(){
    a=20;
  }
  void operator *(){
    a=-a;
  }
  void show(){
    cout<<a<<endl;
  }
};


int main() {
    over abc;
    abc.b = 810;
    abc.a = 200;
    cout << "Result of overloading operator+: " << abc + abc << endl;
    cout << "Sum of a and b: " << abc.a + abc.b << endl;

    Number obj;
    obj.show();
    *obj;
    obj.show();
    
    return 0;
}
