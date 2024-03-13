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
	int arr[] = { 5, 1, 4, 2, 8 };
	int n = sizeof(arr) / sizeof(arr[0]);
	
	Print(arr, n);

	// Bubble Sort
	{
		for (int i = 0; i < n-1; i++)
		{	
			// cout << i << endl;
			for (int j = (i + 1); j < n; j++)
			{
				if (arr[i] > arr[j])
				{
					swap(arr[i], arr[j]);
				}
				
				//i = 0 1 2 3

				//i = 0
				//j = 1 2 3 4

				// i = 1
				// j = 2 3 4

				// i = 2
				// j = 3 4

				// i = 3
				// j = 4

			}
		}
		Print(arr, n);
		

	}

	// Best case
	// Stability

	return 0;
}