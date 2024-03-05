#include <iostream>

using namespace std;

int main() {

	for (int i = 0; i < (5-1); i++) {
		for (int j = i + 1; j < 5; j++) {
			cout << "i가 " << i << "일 때, " << "j는 " << j << "입니다." << endl;
		}
	}
	return 0;
}