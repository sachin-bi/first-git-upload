#include <iostream>
#include <vector>
using namespace std;

void sort(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (arr[i] >= arr[j])
            {
                /* code */
                swap(arr[i], arr[j]);
            }
        }
    }
    for (int iz = 0; iz < length; iz++)
    {
        cout << arr[iz] << " ";
        /* code */
    }
}

void missing(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] != i + 1)
        {
            cout << i+1 << endl;
        }
    }
    cout << "miss " << endl;
}

int main()
{
    int arr[] = {1, 2, 5, 3, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    // cout << length;
    for (auto val : arr)
    {
        cout << val << " ";
    }
    cout << "before " << endl;

    sort(arr, length);
    cout << "after " << endl
         << endl;

    missing(arr, length);

    return 0;
}
