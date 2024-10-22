#include <iostream>
using namespace std;

void bubblesort(int arr[], int n)
{
    bool swapped;
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
            cout << "Pass ke-" << i + 1 << ", Iterasi " << j + 1 << " : ";
            for (int k = 0; k < n; k++)
                cout << arr[k] << " ";
            cout << endl;
        }
        if (!swapped)
            break;
    }
}

int main()
{
    int arr[] = {7, 4, 5, 2, 1, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // function bubble sort
    bubblesort(arr, n);

    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}