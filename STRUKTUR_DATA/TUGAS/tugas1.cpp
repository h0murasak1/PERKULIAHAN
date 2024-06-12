#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// Membuat struct untuk barang
struct Barang
{
    string item;
    int jumlah;
    double harga;
};

// Membuat vector untuk menyimpan stock barang
vector<Barang> stock;

// Fungsi untuk menambah stock barang
void tambahBarang(string item, int jumlah, double harga)
{
    Barang barangBaru;
    barangBaru.item = item;
    barangBaru.jumlah = jumlah;
    barangBaru.harga = harga;
    stock.push_back(barangBaru);
}

// Fungsi untuk mencetak barang yang tersedia
void cetakBarang()
{
    cout << left << setw(20) << "item Barang" << setw(10) << "Jumlah" << setw(10) << "Harga" << endl;
    for (const auto &barang : stock)
    {
        cout << left << setw(20) << barang.item << setw(10) << barang.jumlah << setw(10) << barang.harga << endl;
    }
}

// Fungsi untuk mengupdate jumlah barang
void updateJumlahBarang(string item, int jumlahBaru)
{
    for (auto &barang : stock)
    {
        if (barang.item == item)
        {
            barang.jumlah = jumlahBaru;
            cout << "Jumlah barang " << item << " berhasil diperbarui.\n";
            return;
        }
    }
    cout << "Notifikasi: Barang dengan item " << item << " kaga ada.\n";
}

int main()
{
    int pilihan;
    string item;
    int jumlah;
    double harga;

    cout << "=========================================\n";
    cout << "= SELAMAT DATANG DI PROGRAM STOK BARANG =\n";
    cout << "=========================================\n";
    cout << "MADE BY KELOMPOK 5\n";
    cout << "Press enter to continue... ";
    getchar();
    fflush(stdin);

    do
    {
        system("clear");
        cout << "Menu:\n";
        cout << "1. Input barang\n";
        cout << "2. Update jumlah barang\n";
        cout << "3. Cetak stok\n";
        cout << "4. Keluar\n";
        cout << "Pilih opsi: ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan)
        {
        case 1:
            system("clear");
            cout << "Masukkan item barang       : ";
            getline(cin, item);
            cout << "Masukkan jumlah barang     : ";
            while (!(cin >> jumlah))
            {
                cout << "Input Tidak Valid. Input harus berupa angka. Silahkan coba lagi.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            cout << "Masukkan harga per barang  : ";
            while (!(cin >> harga))
            {
                cout << "Input Tidak Valid. Input harus berupa angka. Silahkan coba lagi.\n ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            cin.ignore();
            tambahBarang(item, jumlah, harga);
            system("clear");
            break;
        case 2:
            system("clear");
            cout << "Masukkan item barang yang ingin diupdate   : ";
            getline(cin, item);
            cout << "Masukkan jumlah barang baru                : ";
            while (!(cin >> jumlah))
            {
                cout << "Input Tidak Valid. Input harus berupa angka. Silahkan coba lagi.\n ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            cin.ignore();
            updateJumlahBarang(item, jumlah);
            system("clear");
            break;
        case 3:
            system("clear");
            cetakBarang();
            fflush(stdin);
            cout << "\nPress enter to continue...";
            getchar();
            break;
        case 4:
            system("clear");
            cout << "Keluar dari program.\n";
            break;
        default:
            cout << "Sorry bang menu cuma sampe 4.\n";
            break;
        }
    } while (pilihan != 4);

    return 0;
}