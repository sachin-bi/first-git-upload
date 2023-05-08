#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{5,4, 4, 9, 4,6};
    for (auto val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
    int start = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i+1; j < arr.size() ; j++)
        {
            if (arr[i] == arr[j])
            {
                start = arr[i];
            }
        }
    }
    cout << "double is "<<start<<endl;

    return 0;
}