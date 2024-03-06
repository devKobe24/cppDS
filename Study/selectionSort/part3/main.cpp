#include <iostream>
#include <cassert>
#include <fstream>

using namespace std;

void Print(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
		cout << endl;
	}
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
	return 0;
}