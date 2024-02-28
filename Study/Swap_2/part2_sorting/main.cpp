#include <iostream>

using namespace std;

void MySwapRef(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

// 정렬(sorting)
int main() {
	{
		int arr[] = { 9, 3 };

		cout << arr[0] << " " << arr[1] << endl;

		// TODO:
		if (arr[0] > arr[1])
		{
			MySwapRef(arr[0], arr[1]);	
		}

		cout << arr[0] << " " << arr[1] << endl;
	}


	return 0;
}