#include <iostream>
using namespace std;

void tampilkanNilai(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int hitungTotal(int *arr, int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += *(arr + i);
    }
    return total;
}

int cariNilaiMaksimum(int *arr, int size)
{
    int maksimum = *arr;
    for (int i = 1; i < size; i++)
    {
        if (*(arr + i) > maksimum)
        {
            maksimum = *(arr + i);
        }
    }
    return maksimum;
}

int cariNilaiMinimum(int *arr, int size)
{
    int minimum = *arr;
    for (int i = 1; i < size; i++)
    {
        if (*(arr + i) < minimum)
        {
            minimum = *(arr + i);
        }
    }
    return minimum;
}

void urutkanArrayAscending(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

void urutkanArrayDescending(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (*(arr + j) < *(arr + j + 1))
            {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main()
{
    int size;
    cout << "Masukkan jumlah elemen dalam array: ";
    cin >> size;

    int *arr = new int[size];

    cout << "Masukkan nilai-nilai dalam array: \n";
    for (int i = 0; i < size; i++)
    {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> *(arr + i);
    }

    tampilkanNilai(arr, size);

    int total = hitungTotal(arr, size);
    cout << "Jumlah total nilai dalam array: " << total << endl;

    int maksimum = cariNilaiMaksimum(arr, size);
    cout << "Nilai maksimum dalam array: " << maksimum << endl;

    int minimum = cariNilaiMinimum(arr, size);
    cout << "Nilai minimum dalam array: " << minimum << endl;

    urutkanArrayDescending(arr, size);
    cout << "Array dalam urutan descending: ";
    tampilkanNilai(arr, size);

    urutkanArrayAscending(arr, size);
    cout << "Array dalam urutan ascending: ";
    tampilkanNilai(arr, size);

    delete[] arr;

    return 0;
}