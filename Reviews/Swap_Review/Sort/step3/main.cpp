#include <iostream>

using namespace std;

// CheckSorted 함수 - 만들기.
bool CheckSorted(int &a, int &b) {
	if (a <= b) {
		return true;
	} else {
		return false;
	}
}

int main() {
	int arr[2];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			arr[0] = j;
			arr[1] = i;

			// CPP 에서 제공하는 swap 함수 사용.
			if (arr[0] > arr[1]) {
				swap(arr[0], arr[1]);
			}
			
			cout << boolalpha;
			cout << arr[0] << " " << arr[1] << " " << CheckSorted(arr[0], arr[1]) << endl;
		}
	}
	return 0;
}