#include <iostream>
using namespace std;

int main()
{
    char menu_akhir;
    string nama_dpn;
    string nama_tng;
    string nama_blk;
    do
    {
        system("clear");
        cout << "Pilih Menu: \n";
        cout << "1. Input Nama\n";
        cout << "2. Keluar\n";

        int menu;
        cout << "Masukkan pilihan: ";
        cin >> menu;

        switch (menu)
        {
        case 1:
            cout << "Masukkan nama depan: ";
            cin >> nama_dpn;
            cout << "Masukkan nama tengah: ";
            cin >> nama_tng;
            cout << "Masukkan nama belakang: ";
            cin >> nama_blk;
            cout << "Nama lengkap: " << nama_dpn << " " << nama_tng << " " << nama_blk << endl;
            break;

        case 2:
            cout << "Terima kasih\n";
            return 0;
            break;

        default:
            break;
        }

        cout << "Apakah Anda Ingin Lanjut (Y/T) : ";
        cin >> menu_akhir;
    } while (menu_akhir == 'Y' || menu_akhir == 'y');

    return 0;
}