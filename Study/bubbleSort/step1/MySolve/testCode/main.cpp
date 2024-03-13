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

template<typename T, size_t n>
void PrintArray(T const(& arr)[n])
{
	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}
	
}

int main() {

	int arr[] = { 5, 1, 4, 2, 8 };
	int n = sizeof(arr) / sizeof(arr[0]);

	swap(arr[0], arr[1]);

	PrintArray(arr);

	return 0;
}