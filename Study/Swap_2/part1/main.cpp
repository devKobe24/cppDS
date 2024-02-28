#include <iostream>

using namespace std;

void MySwapPtr(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void MySwapRef(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main()
{

	// Swap
	{
		int a = 3;
		int b = 2;

		cout << a << " " << b << endl;

		// TODO:
		// int temp = a;
		// a = b;
		// b = temp;

		// MySwapPtr(&a, &b);
		MySwapRef(a, b);

		cout << a << " " << b << endl;	
	}

	return 0;
}