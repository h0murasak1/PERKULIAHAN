#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

// Struct untuk data Buku
struct Buku
{
    string buku;
    int kodeProduk;
};

// Algoritma pencarian linear
Buku *linearSearch(Buku arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i].kodeProduk == target)
        {
            return &arr[i];
        }
    }
    return nullptr;
}

// Algoritma pengurutan menggunakan bubble sort
void bubbleSort(Buku arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j].kodeProduk > arr[j + 1].kodeProduk)
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printData(Buku data[], int size)
{
    cout << "Buku & Kode Buku" << endl;
    cout << endl;
    cout << setfill('-') << setw(20) << "-" << endl; // Mencetak garis pemisah
    cout << setfill(' ');                            // Mengembalikan pengisian ke spasi

    for (int i = 0; i < size; i++)
    {
        cout << data[i].buku << "   " << data[i].kodeProduk << endl;
    }
    cout << endl;
}

int main()
{
    const int MAX_SIZE = 5;
    Buku data[MAX_SIZE] = {
        {"Asmara Cinta", 12},
        {"Perkara Penguasa", 34},
        {"Cinta Jajar Genjang", 56},
        {"Jauhi Cinta", 78},
        {"Samudra Cinta", 90}};

    cout << "List Buku sebelum diurutkan:" << endl;
    printData(data, MAX_SIZE);

    // Mengurutkan data menggunakan bubble sort
    bubbleSort(data, MAX_SIZE);

    // Menampilkan data setelah diurutkan
    cout << "List Buku setelah diurutkan:" << endl;
    printData(data, MAX_SIZE);

    int target;
    cout << "Masukkan Kode Produk yang ingin dicari: ";
    cin >> target;

    Buku *found = linearSearch(data, MAX_SIZE, target);
    if (found != nullptr)
    {
        cout << "Buku ditemukan pada indeks " << found - data << endl;
        cout << "Judul Buku " << found->buku << endl;
    }
    else
    {
        cout << "Buku tidak ditemukan" << endl;
    }

    return 0;
}