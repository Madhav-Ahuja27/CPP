#include <iostream>
using namespace std;

int main() {
  int arr[6] = {11, 7, 3, 12, 4};
  int size = sizeof(arr) / sizeof(arr[0]);
  int lp = 0, rp = size - 1;
  while (lp < rp) {
    arr[lp] += arr[rp];
    arr[rp] = arr[lp] - arr[rp];
    arr[lp] -= arr[rp];
    lp++;
    rp--;
  }
  for (int i = 0; i < size - 1; i++) {
    cout << arr[i + 1] << endl;
  }
}
