#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

// Struct untuk data mahasiswa
struct Mahasiswa
{
    string buku;
    int kodeProduk;
};

// Algoritma pencarian linear
Mahasiswa *linearSearch(Mahasiswa arr[], int n, int target)
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
void bubbleSort(Mahasiswa arr[], int n)
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

void printData(Mahasiswa data[], int size)
{
    cout << setw(20) << left << "Buku" << setw(10) << left << "Kode Produk" << endl;
    cout << setfill('-') << setw(30) << "-" << endl; // Mencetak garis pemisah
    cout << setfill(' ');                            // Mengembalikan pengisian ke spasi

    for (int i = 0; i < size; i++)
    {
        cout << setw(20) << left << data[i].buku << setw(10) << left << data[i].kodeProduk << endl;
        if (i != size - 1) // Jangan mencetak garis setelah baris terakhir
        {
            cout << setfill('-') << setw(30) << "-" << endl; // Mencetak garis pemisah
            cout << setfill(' ');                            // Mengembalikan pengisian ke spasi
        }
    }
    cout << endl;
}

int main()
{
    const int MAX = 5;
    Mahasiswa data[MAX] = {
        {"Marmut Merah Jambu", 1},
        {"Perahu Kertas", 2},
        {"Laskar Pelangi", 3},
        {"Negeri 5 Menara", 4},
        {"Ayat-Ayat Cinta", 5}};

    int choice;
    do
    {
        cout << "\nMenu:\n";
        cout << "1. Tampilkan buku\n";
        cout << "2. Urutkan buku\n";
        cout << "3. Cari buku\n";
        cout << "4. Keluar\n";
        cout << "Pilih opsi: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "List Buku:" << endl;
            printData(data, MAX);
            break;
        case 2:
            bubbleSort(data, MAX);
            cout << "List Buku setelah diurutkan:" << endl;
            printData(data, MAX);
            break;
        case 3:
            int target;
            cout << "Masukkan Kode Produk yang ingin dicari: ";
            cin >> target;

            Mahasiswa *found = linearSearch(data, MAX, target);
            if (found != nullptr)
            {
                cout << "Buku ditemukan pada indeks " << found - data << endl;
                cout << "Judul Buku " << found->buku << endl;
            }
            else
            {
                cout << "Buku tidak ditemukan" << endl;
            }
            break;
        case 4:
            cout << "Keluar dari program.\n";
            break;
        default:
            cout << "Opsi tidak valid. Coba lagi.\n";
            break;
        }
    } while (choice != 4);

    return 0;
}