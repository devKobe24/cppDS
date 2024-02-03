#include <iostream>

using namespace std;

void MySwapRef(int& i, int& j) {
  int temp = i;
  i = j;
  j = temp;
}

int main() {
  int a = 3;
  int b = 2;

  cout << a << " " << b << endl;

  MySwapRef(a, b);

  cout << a << " " << b << endl;

  return 0;
}