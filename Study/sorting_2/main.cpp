#include <iostream>

using namespace std;

bool CheckSorted(int i, int j)
{
  if (i <= j)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  {
    int arr[2];

    for (int j = 0; j < 5; j++)
    {
      for (int i = 0; i < 5; i++)
      {

        arr[0] = i;
        arr[1] = j;
        // Swap 소개
        if (arr[0] > arr[1])
        {
          swap(arr[0], arr[1]);
        }
        cout << boolalpha;
        cout << arr[0] << " " << arr[1] << " " << CheckSorted(arr[0], arr[1]) << endl;
      }
    }
  }
  return 0;
}