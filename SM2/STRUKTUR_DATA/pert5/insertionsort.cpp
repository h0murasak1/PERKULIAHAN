#include <iostream>
using namespace std;

void insertionsort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;

        cout << "Pass ke-" << i << " : ";
        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[] = {7, 4, 5, 2, 1, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Proses insertion sort: \n";
    insertionsort(arr, n);

    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}