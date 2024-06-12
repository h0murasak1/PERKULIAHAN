#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

struct Transaksi
{
    string jenis;
    int jumlah;
    string keterangan;
};

void displayTransaction(const Transaksi &t)
{
    cout << setw(15) << left << t.jenis << setw(15) << "Rp. " + to_string(t.jumlah) << setw(15) << t.keterangan << endl;
}

double hitungTotalPemasukan(const vector<Transaksi> &transaksi)
{
    double totalPemasukan = 0.0;
    for (const auto &t : transaksi)
    {
        if (t.jenis == "Pemasukan")
        {
            totalPemasukan += t.jumlah;
        }
    }
    return totalPemasukan;
}

double hitungTotalPengeluaran(const vector<Transaksi> &transaksi)
{
    double totalPengeluaran = 0.0;
    for (const auto &t : transaksi)
    {
        if (t.jenis == "Pengeluaran")
        {
            totalPengeluaran += t.jumlah;
        }
    }
    return totalPengeluaran;
}

int main()
{
    vector<Transaksi> transaksi;
    string jenis;
    string keterangan;
    double jumlah;
    char input;
    cout << "===================================================" << endl;
    cout << "= SELAMAT DATANG DI APLIKASI MANAJEMEN TRANSAKSI! =" << endl;
    cout << "===================================================" << endl;
    cout << "MADE BY KELOMPOK 5" << endl;
    cout << "press any key to continue...";
    cin.get();

    do
    {
        system("clear");
        fflush(stdin);
        do
        {
            cout << "Masukkan data transaksi (jenis, jumlah, keterangan): " << endl;
            cout << "Jenis : " << endl;
            cout << "1. Pemasukan" << endl;
            cout << "2. Pengeluaran" << endl;
            cout << "Pilih jenis transaksi (1/2)    : ";
            getline(cin, jenis);
            if (jenis == "1")
            {
                jenis = "Pemasukan";
            }
            else if (jenis == "2")
            {
                jenis = "Pengeluaran";
            }
            else
            {
                cout << "Input Tidak Valid. Input harus berupa angka. Silahkan coba lagi.\n";
                fflush(stdin);
                cout << "Press any key to continue...";
                getchar();
                system("clear");
            }
        } while (jenis != "Pemasukan" && jenis != "Pengeluaran");
        cout << "Jumlah                         : ";
        while (!(cin >> jumlah))
        {
            cout << "Input Tidak Valid. Input harus berupa angka. Silahkan coba lagi.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        fflush(stdin);
        cout << "Keterangan                     : ";
        getline(cin, keterangan);
        Transaksi t = {jenis, jumlah, keterangan};
        transaksi.push_back(t);

        cout << "Apakah ada transaksi lain? (y/n): ";
        cin >> input;
    } while (input == 'y' || input == 'Y');

    // Menampilkan detail transaksi
    cout << endl
         << "Detail Transaksi:" << endl;
    cout << setw(15) << left << "Jenis" << setw(15) << "Jumlah" << setw(15) << "Keterangan" << endl;
    for (const auto &t : transaksi)
    {
        displayTransaction(t);
    }

    // Menampilkan total pemasukan dan pengeluaran
    cout << endl
         << "Total Pemasukan: " << hitungTotalPemasukan(transaksi) << endl;
    cout << "Total Pengeluaran: " << hitungTotalPengeluaran(transaksi) << endl;

    return 0;
}
