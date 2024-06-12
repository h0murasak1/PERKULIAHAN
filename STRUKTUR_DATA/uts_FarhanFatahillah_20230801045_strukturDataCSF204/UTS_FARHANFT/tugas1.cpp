#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

// Algoritma pencarian linear
int linearSearch(string arr[], int n, string target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

// Algoritma pengurutan menggunakan bubble sort
void bubbleSort(string arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printData(string data[], int size)
{
    cout << endl;
    cout << setfill('-') << setw(20) << "-" << endl; // Mencetak garis pemisah
    cout << setfill(' ');                            // Mengembalikan pengisian ke spasi

    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << ". " << data[i] << endl;
        if (i != size - 1) // Jangan mencetak garis setelah baris terakhir
        {
            cout << setfill(' '); // Mengembalikan pengisian ke spasi
        }
    }
    cout << endl;
}

int main()
{
    const int MAX_SIZE = 5;
    string data[MAX_SIZE] = {
        "Asmara Cinta",
        "Perkara Penguasa",
        "Cinta Jajar Genjang",
        "Jauhi Cinta",
        "Samudra Cinta"};

    cout << "List Buku sebelum diurutkan:" << endl;
    printData(data, MAX_SIZE);

    // Mengurutkan data menggunakan bubble sort
    bubbleSort(data, MAX_SIZE);

    // Menampilkan data setelah diurutkan
    cout << "List Buku setelah diurutkan:" << endl;
    printData(data, MAX_SIZE);

    int target;
    cout << "Masukkan Nomor buku yang ingin dicari: ";
    cin >> target;

    if (target > 0 && target <= MAX_SIZE)
    {
        cout << "Buku ditemukan pada indeks " << target - 1 << endl;
        cout << "Judul Buku " << data[target - 1] << endl;
    }
    else
    {
        cout << "Buku tidak ditemukan" << endl;
    }

    return 0;
}