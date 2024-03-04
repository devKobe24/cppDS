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
	// 5개라면? 더 많다면?
	{
		// 8 4 2 8 3
		// TODO: ???

		// 8 3 2 5 1 1 2 5 8 9
		// TODO: ???

		// 100개라면?
	}

	// 가장 작은 수 찾기
	{
		int arr[] = { 8, 3, 2, 5, 1, 1, 2, 5, 8, 9 }; // 임의의 숫자들
		int size = sizeof(arr) / sizeof(arr[0]);
		

		assert(size > 0); //size가 1이상이라고 가정

		int min_number = arr[0]; // 일단 가장 첫 값이 가장 작은 값일 수도 있다고 가정.
		// TODO:
		for (int i = 0; i < size; i++) {
			min_number = arr[i] < min_number ? arr[i] : min_number;
		}

		cout << "Mininum number is " << min_number << endl;
	}

	// 가장 작은 수의 인덱스 찾기
	{
		int arr[] = { 8, 3, 2, 5, 1, 1, 2, 5, 8, 9 }; // 임의의 숫자들
		int size = sizeof(arr) / sizeof(arr[0]);

		assert(size > 0); //size가 1이상이라고 가정

		// TODO:
		int min_index = 0;
		for (int j = 0; j < size; j++) {
			if (arr[j] < arr[min_index]) {
				min_index = j;
			}
		}

		cout << "The index of min is " << min_index << endl;	
		cout << "Minimum number is " << arr[min_index] << endl;
	}

	// Selection Sort
	// 힌트: swap()
	{
		int arr[] = { 8, 3, 2, 5, 1, 1, 2, 5, 8, 9 }; // 임의의 숫자들
		int size = sizeof(arr) / sizeof(arr[0]);
		
		Print(arr, size);

		int min_index;
		for (int i = 0; i < size - 1; i++) {
			// TODO:
			min_index = i;
			for (int j = i + 1; j < size; j++) {
				if (arr[j] < arr[min_index]) {
					min_index = j;
				}
			}
			swap(arr[i], arr[min_index]);
			

			Print(arr, size);

			cout << boolalpha;
			cout << CheckSorted(arr, size);
			cout << endl;
		}
		cout << min_index << endl;
		cout << arr[min_index] << endl;
	}
	return 0;
}