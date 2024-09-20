#include <iostream>
using namespace std;

void tambah(int angka1, int angka2, int &hasil)
{
    cout << "Tambah" << endl;
    hasil = angka1 + angka2;
    cout << angka1 << " + " << angka2 << " = " << hasil << endl;
    cout << "" << endl;
}

void kurang(int angka1, int angka2, int &hasil)
{
    cout << "Kurang" << endl;
    hasil = angka1 - angka2;
    cout << angka1 << " - " << angka2 << " =" << hasil << endl;
    cout << "" << endl;
}

void kali(int angka1, int angka2, int &hasil)
{
    cout << "Kali" << endl;
    hasil = angka1 * angka2;
    cout << angka1 << " * " << angka2 << " = " << hasil << endl;
    cout << "" << endl;
}

void bagi(int angka1, int angka2, int &hasil)
{
    cout << "Bagi" << endl;
    hasil = angka1 / angka2;
    cout << angka1 << " / " << angka2 << " = " << hasil << endl;
    cout << "" << endl;
}

void semua(int angka1, int angka2, int &hasil)
{
    tambah(angka1, angka2, hasil);
    kurang(angka1, angka2, hasil);
    kali(angka1, angka2, hasil);
    bagi(angka1, angka2, hasil);
}

int main()
{
    int angka1;
    int angka2;
    int hasil;
    int pilihan;
    char lanjut;
    do
    {

        cout << "Menu Matematika" << endl;
        cout << "Masukkan angka pertama :";
        cin >> angka1;
        cout << "Masukkan angka kedua :";
        cin >> angka2;

        cout << "Pilih Menu" << endl;
        cout << "1. Tambah" << endl;
        cout << "2. Kurang" << endl;
        cout << "3. Kali" << endl;
        cout << "4. Bagi" << endl;
        cout << "5. Semua" << endl;
        cout << "Masukkan Inputan antara (1-5) : ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            tambah(angka1, angka2, hasil);
            break;

        case 2:
            kurang(angka1, angka2, hasil);
            break;

        case 3:
            kali(angka1, angka2, hasil);
            break;

        case 4:
            bagi(angka1, angka2, hasil);
            break;

        case 5:
            cout << "Semua Output" << endl;
            semua(angka1, angka2, hasil);
            break;

        default:
            cout << "Input tidak valid!" << endl;
            break;
        }

        cout << "Apakah anda ingin lanjut (y/t) : ";
        cin >> lanjut;

    } while (lanjut == 'y' || lanjut == 'Y');

    return 0;
}
