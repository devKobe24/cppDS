#include <iostream>

using namespace std;

// MySwapRef function
void MySwapRef(int &i, int &j)
{
  int temp[] = {};
  temp[0] = i;
  i = j;
  j = temp[0];
}

int main()
{
  // 정렬(sorting)
  {
    int arr[] = {9, 3};

    cout << arr[0] << " " << arr[1] << endl;

    // TODO:
    if (arr[0] > arr[1]) {
      MySwapRef(arr[0], arr[1]);
    }
      

    cout << arr[0] << " " << arr[1] << endl;
  }

  return 0;
}
