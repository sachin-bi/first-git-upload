#include <iostream>
using namespace std;
void findmissing(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int index = abs(arr[i]);
        if (arr[index - 1] > 0)
        {
            arr[index - 1] *= -1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}


int main()
{

    int arr[] = {1, 2, 5, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    cout << size << " size" << endl;
    findmissing(arr, size);

    return 0;
}