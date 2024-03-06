#include <iostream>
#include <cassert>
#include <stdio.h>
#include <experimental/iterator>

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
			// size == 9 -> 8까지 -> 앞에 1자리를 픽스하기 위해 -> 어짜피 마지막 자리는 가장 큰 수라서 괜찮음.
			// TODO:
			// cout << "i는 " << i << "입니다" << endl;
			cout << " " << endl;
			min_index = i;
			for (int j = i + 1; j < size; j++) {
				// size == 10 -> 9까지 -> 배열의 모든 요소를 다 돌리기 위해
				cout << "i(min_index)가 " << i << "일 때, " << "j는 " << j << "입니다." << endl;
				
				if (arr[j] < arr[min_index]) {
					cout << "arr[j] 값은 " << arr[j] << "이고, " << "arr[min_index] 값은 " << arr[min_index] << "이므로";
					cout << " min_index값은 j가 됩니다 즉, j의 값은 " << j << " 이므로, " << "min_index = j; 와 같이 로직을 만들어야 합니다." << endl;
					min_index = j;
				}
			}
			swap(arr[i], arr[min_index]);
			cout << "결과적으로 arr[i]와 arr[min_index] 의 자리가 swap이 되므로, 배열은 ";
			copy(begin(arr), end(arr), experimental::make_ostream_joiner(cout, " "));
			cout << " 로 바뀝니다." << endl;
			

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