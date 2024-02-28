#include <iostream>

using namespace std;

// MySwapPtr Function 선언.
void MySwapPtr(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	// SWAP
	{
		int a = 3;
		int b = 2;

		cout << a << " " << b << endl;

		// TODO:
		MySwapPtr(&a, &b);

		cout << a << " " << b << endl;
	}
	return 0;
}