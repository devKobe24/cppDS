#include <iostream>
#include <cassert>
#include <fstream>

using namespace std;

struct Element
{
	int key;
	char value;
};

void Print(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
		cout << endl;
	}
}

void Print(Element* arr, int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i].key << " ";
	cout << endl;

	for (int i = 0; i < size; i++)
		cout << arr[i].value << " ";
	cout << endl;
}

// 비교 횟수 세보기, 더 효율적인 방법은 없을까?
// https://en.wikipedia.org/wiki/Sorting_algorithm
int main()
{
	{
		ofstream ofile("log.txt");
		for (int size = 1; size < 1000; size++)
		{
			int count = 0;
			int *arr = new int[size];
			for (int s = 0; s < size; s++)
			{
				arr[s] = size - s;
			}

			int min_index;
			for (int i = 0; i < size - 1; i++)
			{
				min_index = i;
				for (int j = i + 1; j < size; j++)
				{
					count++;

					if (arr[j] < arr[min_index])
					{
						min_index = j;
					}
				}
				swap(arr[i], arr[min_index]);
			}
			// cout << size << ", " << count << endl;
			ofile << size << ", " << count << endl;
			// Print(arr, size);

			delete[] arr;
		}
		ofile.close();
	}

	// 안정성 확인(unstable)
	{
		Element arr[] = { {2, 'a'}, {2, 'b'}, {1, 'c' } };
		int size = sizeof(arr) / sizeof(arr[0]);

		Print(arr, size);

		int min_index;
		for(int i = 0; i < (size - 1); i++) 
		{
			min_index = i;
			for (int j = (i + 1); j < size; j++)
			{
				if (arr[j].key < arr[min_index].key) 
				{
					min_index = j;
				}
			}

			swap(arr[i], arr[min_index]);

			Print(arr, size);
		}
	}
	return 0;
}