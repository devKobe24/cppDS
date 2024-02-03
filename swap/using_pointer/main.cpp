#include <iostream>

using namespace std;

void MySwapPtr(int* i, int* j) {
  int temp = *i;
  *i = *j;
  *j = temp;
}

int main() {
  int a = 3;
  int b = 2;

  cout << a << " " << b << endl;

  MySwapPtr(&a, &b);
  cout << a << " " << b << endl;

  return 0;
}