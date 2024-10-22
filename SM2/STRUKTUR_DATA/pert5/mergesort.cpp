#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int left, int middle, int right)
{
    int n1 = middle - left + 1;
    int n2 = right - middle;

    vector<int> L(n1), R(n2);
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = arr[middle + 1 + j];
    }

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergesort(vector<int> &arr, int left, int right)
{
    if (left < right)
    {
        int middle = left + (right - left) / 2;

        mergesort(arr, left, middle);
        mergesort(arr, middle + 1, right);
        merge(arr, left, middle, right);
        cout << "Merge sort ada indexs " << left << " sampai " << right << " : ";
        for (int i = left; i <= right; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
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
    std::vector<int> arr = {7, 4, 5, 2, 1, 3, 6};
    int n = arr.size();

    cout << "Unsorted array: \n";
    printarray(arr);

    cout << "Proses merge sort: \n";
    mergesort(arr, 0, n - 1);

    cout << "Sorted array: \n";
    printarray(arr);

    return 0;
}