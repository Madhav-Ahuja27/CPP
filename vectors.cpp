#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<int> vect;
  // cout<<vect.size();
  // cout<<vect.capacity();
  // vect.resize(5);
  vect.push_back(7);
  // vect.insert(vect.begin()+2,7);
  // vect.push_back(9);
  // for(int i=1;i<=vect.size();i++){
  //   cout<<vect[i]<<endl;
  // }
  // int n;
  // cin>>n;
  // vector<int> inp(n);
  // for(int i=0;i<inp.size();i++){
  //   cin>>inp[i];
  // }
  // for(int i=0;i<vect.size();i++){
  //   cout<<inp[i]<<endl;
  // }
  for(int i=1;i<=vect.size();i++){
    cout<<vect[i];
  }
}
