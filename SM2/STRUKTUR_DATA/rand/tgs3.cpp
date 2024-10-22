#include <iostream>
#include <vector>
using namespace std;

enum Produk
{
    Elektronik,
    Pakaian,
    Makanan,
    Minuman,
    AlatTulis
};

struct Barang
{
    string nama_barang;
    string kode_barang;
    string jenis_barang;
    Produk tipe_produk;
    double harga_barang;
};

void isiDataBarang(Barang &barang)
{
    cout << "Masukkan Nama Barang    : ";
    getline(cin, barang.nama_barang);

    cout << "Masukkan Kode Barang    : ";
    getline(cin, barang.kode_barang);

    cout << "Masukkan Jenis Barang   : ";
    getline(cin, barang.jenis_barang);

    cout << "Pilih Tipe Produk (0: Elektronik, 1: Pakaian, 2: Makanan, 3: Minuman, 4: Alat Tulis) : ";
    int pilihan;
    cin >> pilihan;
    barang.tipe_produk = static_cast<Produk>(pilihan);

    cout << "Masukkan Harga Barang   : ";
    cin >> barang.harga_barang;

    cin.ignore();
}

void tampilkanBarang(const vector<Barang> &barangList)
{
    cout << "===============================================" << endl;
    for (const auto &barang : barangList)
    {
        cout << "Nama Barang    : " << barang.nama_barang << endl;
        cout << "Kode Barang    : " << barang.kode_barang << endl;
        cout << "Jenis Barang   : " << barang.jenis_barang << endl;
        cout << "Tipe Produk    : " << barang.tipe_produk << endl;
        cout << "Harga Barang   : " << barang.harga_barang << endl;
        cout << "===============================================" << endl;
    }
}

int main()
{
    vector<Barang> barangList;
    char lanjut;
    int pilihan;

    do
    {
        cout << "1. Tambah Barang" << endl;
        cout << "2. Tampilkan Barang" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;
        cin.ignore();

        if (pilihan == 1)
        {
            do
            {
                Barang barang;
                isiDataBarang(barang);
                barangList.push_back(barang);

                cout << "Ingin menambah barang lagi? (y/n) ";
                cin >> lanjut;
                cin.ignore();
            } while (lanjut == 'y' || lanjut == 'Y');
        }
        else if (pilihan == 2)
        {
            tampilkanBarang(barangList);
        }

        cout << "Lanjut Ke Menu Awal? (y/n) ";
        cin >> lanjut;
        cin.ignore();
    } while (lanjut == 'y' || lanjut == 'Y');

    return 0;
}