#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

// Algoritma pencarian
int cariBuku(string arr[], int n, string target)
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

// Algoritma pengurutan
void urutBuku(string arr[], int n)
{
    sort(arr, arr + n);
}

void cetakData(string data[], int size)
{
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << data[i] << endl;
        if (i != size - 1) // Jangan mencetak garis setelah baris terakhir
        {
            cout << setfill(' '); // Mengembalikan pengisian ke spasi
        }
    }
    cout << endl;
}

int main()
{
    const int MAX = 5;
    string data[MAX] = {
        "1. Marmut Merah Jambu",
        "2. Perahu Kertas",
        "3. Laskar Pelangi",
        "4. Negeri 5 Menara",
        "5. Ayat-Ayat Cinta"};

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
            cout << "Data buku: " << endl;
            cetakData(data, MAX);
            break;
        case 2:
            urutBuku(data, MAX);
            cout << "Data buku setelah diurutkan: " << endl;
            cetakData(data, MAX);
            break;
        case 3:
            int cari;
            cout << "Masukkan nomor buku yang ingin dicari: ";
            cin >> cari;

            if (cari > 0 && cari <= MAX)
            {
                cout << "Buku ditemukan!" << endl;
                cout << "Judul Buku: " << data[cari - 1] << endl;
            }
            else
            {
                cout << "Buku tidak ditemukan!" << endl;
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