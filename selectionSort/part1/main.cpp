#include <iostream>

using namespace std;

bool CheckSorted(int *arr, int size)
{
	// TODO: 정렬 확인 함수 구현
	return false;
}

int main()
{
	// 3개 정렬
	{
		for (int k = 0; k < 3; k++)
			for (int j = 0; j < 3; j++)
				for (int i = 0; i < 3; i++)
				{
					int arr[3] = {i, j, k};
					int size = sizeof(arr) / sizeof(arr[0]);

					for (int e = 0; e < size; e++)
					{
						cout << arr[e] << " " << flush;
					}

					cout << " -> " << flush;

					// TODO: 정렬 해보기

					if (i > j && i > k)
					{
						int max = 0;
						int mid = 0;
						int min = 0;

						max = i;
						
						if (j < k)
						{
							mid = k;
							min = j;
						}
						else
						{
							mid = j;
							min = k;
						}
						i = min;
						j = mid;
						k = max;
					}
					else if (j > i && j > k)
					{
						int max = 0;
						int mid = 0;
						int min = 0;

						max = j;
						if (i < k)
						{
							mid = k;
							min = i;
						} else {
							mid = i;
							min = k;
						}
						i = min;
						j = mid;
						k = max;
					}
					else if (k > i && k > j)
					{
						int max = 0;
						int mid = 0;
						int min = 0;

						max = k;
						if (j < i)
						{
							mid = i;
							min = j;
						} else {
							mid = j;
							min = i;
						}
						i = min;
						j = mid;
						k = max;
					}

					// if (i < j && i < k)
					// {
					// 	min = i;
					// }
					// else if (j < i && j < k)
					// {
					// 	min = j;
					// }
					// else if (k < i && k < j)
					// {
					// 	min = k;
					// }

					// if (i > min && i < max)
					// {
					// 	mid = i;
					// }
					// else if (j > min && j < max)
					// {
					// 	mid = j;
					// }
					// else if (k > min && k < max)
					// {
					// 	mid = k;
					// }

					for (int e = 0; e < size; e++)
					{
						cout << arr[e] << " " << flush;
					}

					cout << boolalpha;
					cout << CheckSorted(arr, size); // 정렬 되었나 확인
					cout << endl;
				}
	}
	return 0;
}