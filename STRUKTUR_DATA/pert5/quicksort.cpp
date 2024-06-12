#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quicksort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        cout << "Quick sort ada indexs " << low << " sampai " << high << " : ";
        for (int i = low; i <= high; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

void printarray(const vector<int> &arr)
{
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();

    cout << "Unsorted array: \n";
    printarray(arr);

    cout << "Quick sort: \n";
    quicksort(arr, 0, n - 1);

    cout << "Sorted array: \n";
    printarray(arr);

    return 0;
}