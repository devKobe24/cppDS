#include <iostream>

using namespace std;

bool CheckSorted(int* arr, int size) {
	// TODO: 정렬 확인 함수 구현
	for (int i = 0; i < size-1; i++) {
		if (arr[i] > arr[i +1]) {
			return false;
		} else {
			return true;
		}
	}
	

	return false;
}

int main() {
	// 3개 정렬
	{
		for (int k = 0; k < 3; k++)
			for (int j = 0; j < 3; j++)
				for (int i = 0; i < 3; i++) {
					
					int arr[3] = { i, j, k };
					int size = sizeof(arr) / sizeof(arr[0]);
					// cout << "i의 크기 => " << sizeof(i) << endl;
					// cout << "arr의 크기 => " << sizeof(arr) << endl;
					// cout << "arr[0]의 크기 => " << sizeof(arr[0]) << endl;
					
					// size == 3
					for (int e = 0; e < size; e++) {
						// 0 == i, 1 == j, 2 == k
						cout << arr[e] << " " << flush;
					}

					cout << " -> " << flush;
					
					// TODO: 정렬하기
					if (arr[0] > arr[1]) {
						swap(arr[0], arr[1]);
					}

					if (arr[0] > arr[2]) {
						swap(arr[0], arr[2]);
					}

					if (arr[1] > arr[2]) {
						swap(arr[1], arr[2]);
					}

					for (int e = 0; e < size; e++) {
						// 0 == i, 1 == j, 2 == k
						cout << arr[e] << " " << flush;
					}
					cout << boolalpha;
					cout << CheckSorted(arr, size); // 정렬되있는지 확인
					cout << endl;
				}
	}
	return 0;
}