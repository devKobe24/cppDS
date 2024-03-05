#include <iostream>
#include <cassert>
#include <stdio.h>

using namespace std;

bool CheckSorted(int* arr, int size) {
	for (int i = 0; i < (size - 1); i++) {
		if (arr[i] > arr[i + 1]) {
			return false;
		}
	}
	return true;
}

void Print(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
		cout << endl;
	}
}

int main() {

	{
		int arr[] = { 8, 3, 2, 5, 1, 1, 2, 5, 8, 9 }; // 임의의 숫자들
		int size = sizeof(arr) / sizeof(arr[0]);
		
		cout << "어레이 사이즈는 " << sizeof(arr);
		cout << " 0번째 인덱스 사이즈는 " << sizeof(arr[0]);
		cout << endl;

		int min_index;
		for (int i = 0; i < size - 1; i++) {
			// 0,1
			// TODO:
			// cout << "i는 " << i << "입니다" << endl;
			cout << " " << endl;
			min_index = i;
			for (int j = i + 1; j < size; j++) {
				cout << "i가 " << i << "일 때, " << "j는 " << j << "입니다." << endl;
				
				if (arr[j] < arr[min_index]) {
					min_index = j;
				}
			}
			swap(arr[i], arr[min_index]);
			

			// Print(arr, size);

			// cout << boolalpha;
			// cout << CheckSorted(arr, size);
			// cout << endl;
		}
		// cout << min_index << endl;
		// cout << arr[min_index] << endl;
	}

	return 0;
}