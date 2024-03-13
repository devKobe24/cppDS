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
	}
}

int main() {
	int arr[] = { 1, 2, 3, 4, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	
	Print(arr, n);
	cout << endl;

	// Bubble Sort
	{
		int i, j;

		for (i = 0; i < n - 1; i++)
		{
			bool swapped = false;

			for (j = 0; j < (n - i - 1); j++)
			// for (j = 0l j < n - 1; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					swap(arr[j], arr[j + 1]);
					swapped = true;
				}
				
				Print(arr, n);
			}

			cout << endl;

			if (swapped == false) {
				break;
			}
		}
		
	}

	// Best case
	// Stability

	return 0;
}