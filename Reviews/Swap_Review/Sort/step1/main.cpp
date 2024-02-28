#include <iostream>

using namespace std;

int main() {
	int arr[2];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			arr[0] = j;
			arr[1] = i;

			cout << boolalpha;
			cout << arr[0] << " " << arr[1] << " " << (arr[0] <= arr[1]) << endl;
		}
	}
	


	return 0;
}