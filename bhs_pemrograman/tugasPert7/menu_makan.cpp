#include <iostream>
#include <iomanip> // Untuk manipulasi output seperti setprecision

using namespace std;

// Deklarasi fungsi
void tampilkanMenuMakanan();
void tampilkanMenuMinuman();
void pilihMakanan(double &totalHarga);
void pilihMinuman(double &totalHarga);
double hitungTotal(double harga, int jumlah);

int main()
{
    double totalHarga = 0.0;
    int pilihanMenu;

    do
    {
        cout << "\n=========== Pilih Menu ===========\n";
        cout << "1. Menu Makanan\n";
        cout << "2. Menu Minuman\n";
        cout << "3. Exit\n";
        cout << "==================================\n";
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihanMenu;

        switch (pilihanMenu)
        {
        case 1:
            tampilkanMenuMakanan();
            pilihMakanan(totalHarga);
            break;
        case 2:
            tampilkanMenuMinuman();
            pilihMinuman(totalHarga);
            break;
        case 3:
            cout << "Selesai memilih.\n";
            break;
        default:
            cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }

    } while (pilihanMenu != 3);

    cout << fixed << setprecision(2);
    cout << "Total harga yang harus dibayar: Rp " << totalHarga << endl;
    cout << "Terima kasih telah menggunakan layanan kami!" << endl;
    return 0;
}

// Fungsi untuk menampilkan menu makanan
void tampilkanMenuMakanan()
{
    cout << "\n=========== Menu Makanan ===========\n";
    cout << "1. Nasi Goreng       - Rp 15000\n";
    cout << "2. Mie Goreng        - Rp 13000\n";
    cout << "3. Kembali\n";
    cout << "=====================================\n";
}

// Fungsi untuk menampilkan menu minuman
void tampilkanMenuMinuman()
{
    cout << "\n=========== Menu Minuman ===========\n";
    cout << "1. Teh Manis         - Rp 5000\n";
    cout << "2. Jus Jeruk         - Rp 10000\n";
    cout << "3. Kembali\n";
    cout << "====================================\n";
}

// Fungsi untuk memilih makanan
void pilihMakanan(double &totalHarga)
{
    int pilihan, jumlah;
    bool validChoice;

    do
    {
        validChoice = true;
        cout << "Masukkan nomor pilihan makanan Anda: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "Jumlah Nasi Goreng yang dipesan: ";
            cin >> jumlah;
            totalHarga += hitungTotal(15000, jumlah);
            break;
        case 2:
            cout << "Jumlah Mie Goreng yang dipesan: ";
            cin >> jumlah;
            totalHarga += hitungTotal(13000, jumlah);
            break;
        case 3:
            return; // Kembali ke menu utama tanpa validasi tambahan
        default:
            cout << "Pilihan tidak valid. Silakan coba lagi.\n";
            validChoice = false;
        }
    } while (!validChoice);
}

// Fungsi untuk memilih minuman
void pilihMinuman(double &totalHarga)
{
    int pilihan, jumlah;
    bool validChoice;

    do
    {
        validChoice = true;
        cout << "Masukkan nomor pilihan minuman Anda: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "Jumlah Teh Manis yang dipesan: ";
            cin >> jumlah;
            totalHarga += hitungTotal(5000, jumlah);
            break;
        case 2:
            cout << "Jumlah Jus Jeruk yang dipesan: ";
            cin >> jumlah;
            totalHarga += hitungTotal(10000, jumlah);
            break;
        case 3:
            return; // Kembali ke menu utama tanpa validasi tambahan
        default:
            cout << "Pilihan tidak valid. Silakan coba lagi.\n";
            validChoice = false;
        }
    } while (!validChoice);
}

// Fungsi untuk menghitung total harga berdasarkan harga per item dan jumlah
double hitungTotal(double harga, int jumlah)
{
    return harga * jumlah;
}
