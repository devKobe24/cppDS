#include <iostream>

using namespace std;

void MySwapRef(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

// 정렬(sorting)
int main() {
string isSorted = "false";

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			
			if (j <= i) {
				isSorted = "true";
				// cout << j << " " << i << " " << isSorted << endl;
			} else if (j >= i) {
				isSorted = "false";
				// cout << j << " " << i << " " << isSorted << endl;
			}

			if (isSorted == "true") {
				cout << j << " " << i << " " << isSorted << endl;
			} else if (isSorted == "false") {
				isSorted = "true";
				cout << i << " " << j << " " << isSorted << endl;
			}
			
		}
	}
	

	return 0;
}