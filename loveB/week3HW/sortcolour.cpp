#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> arr{1, 0, 2, 1, 2, 0, 1, 0};
  int start = 0;
  int end = arr.size() - 1;
  int i = 0;
  while ( i <=end)
  {
    if (arr[i] == 0)
    {
      swap(arr[i], arr[start]);
      i++;
      start++;
    }
    else if (arr[i] == 1)
    {
      i++;
    }
    else
    {
      swap(arr[i], arr[end]);
      end--;
     
    }
  }

  for (auto val : arr)
  {
    cout << val << " ";
  }

  return 0;
}
