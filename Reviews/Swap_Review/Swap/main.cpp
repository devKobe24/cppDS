#include <iostream>

using namespace std;

int main() {
	// SWAP
	{
		int a = 3;
		int b = 2;

		cout << a << " " << b << endl;

		// TODO:
		int temp = a;
		a = b;
		b = temp;

		cout << a << " " << b << endl;
	}
	return 0;
}