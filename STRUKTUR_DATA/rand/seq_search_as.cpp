#include <iostream>
using namespace std;
// secara ascending
int main()
{
    int arr[7] = {1, 3, 5, 7, 9, 11, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 3;

    int i = 0;

    while (i < size && arr[i] != x)
    {
        i++;
    }

    if (i < size)
    {
        cout << "Element found at index " << i << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}