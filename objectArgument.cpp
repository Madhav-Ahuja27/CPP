#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Complex {
  int real, imag;

public:
  void setData(int a, int b) {
    real = a;
    imag = b;
  }
  void getData() { cout << real << " + " << imag << "i " << endl; }
  void setBySum(Complex o1, Complex o2) {
    setData(o1.real + o2.real, o1.imag + o2.imag);
  }
};

int main() {
  Complex o1;
  o1.setData(1, 3);
  o1.getData();
  Complex o2;
  o2.setData(2, 4);
  o2.getData();
  Complex o3;
  o3.setBySum(o1, o2);
  o3.getData();
}
