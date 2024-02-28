#include <iostream>

using namespace std;

bool CheckSorted(int a, int b) {
	// TODO: ...
	if (a <= b) {
		return true;
	} else {
		return false;
	}
}

// 정렬(sorting)
int main() {
	// 값과 상관 없이 항상 작은 값이 먼저 출력되게 하려면?
	// 두 값이 같을 때는 순서가 상관 없음 -> 큰 값이 먼저 출력되지 않게 하려면?
	int arr[2];

	// TODO:
	for (int j = 0; j < 5; j++) {
		for (int i = 0; i < 5; i++) {
			arr[0] = i;
			arr[1] = j;

			// swap 소개
			if (arr[0] > arr[1]) {
				swap(arr[0], arr[1]);
			}

			cout << boolalpha;
			cout << arr[0] << " " << arr[1] << " "
				<< (CheckSorted(arr[0], arr[1])) << endl;
			
		}
	}
	

	return 0;
}