#include <iostream>
#include <experimental/iterator>

using namespace std;

int main() {
	int arr[] = {7, 5, 2, 4, 1, 1, 6, 7, 8, 9, 0, 3, 3, 1, 3, 5, 7, 4, 3, 2};

	int size = sizeof(arr) / sizeof(arr[0]);

	int min_index;

	for (int i = 0; i < (size - 1); i++)
	{
		min_index = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[min_index] > arr[j])
			{
				min_index = j;
			}
		}
		swap(arr[i], arr[min_index]);
	}
	cout << "결과적으로 arr[i]와 arr[min_index] 의 자리가 swap이 되므로, 배열은 ";
	copy(begin(arr), end(arr), experimental::make_ostream_joiner(cout, " "));
	cout << " 로 바뀝니다." << endl;

	return 0;
}