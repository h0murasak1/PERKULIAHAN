#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Masukkan panjang array: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Masukkan elemen-elemen array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    cout << "\nArray setelah di urutkan: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}