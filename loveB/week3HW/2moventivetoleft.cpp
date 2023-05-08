#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{5, 0, -6, 4, 8, -9, 4};
    for (auto val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
    int start = 0;
    int end = arr.size() - 1;
    int i = 0;

    while (i < end)
    {
        if (arr[i] >= 0)
        {
            swap(arr[i], arr[end]);
            end--;
        }
        // else if (arr[i] == 0)
        // {
        //     swap(arr[i], arr[end]);
        //     end--;
        // }

        else
        {
            i++;
        }
    }

    for (auto val : arr)
    {
        cout << val << " ";
    }

    return 0;
}