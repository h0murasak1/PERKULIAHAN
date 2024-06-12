#include <iostream>

using namespace std;

void menu()
{
    cout << "Pilihan Operasi Matematika:\n";
    cout << "1. Penjumlahan\n";
    cout << "2. Pengurangan\n";
    cout << "3. Perkalian\n";
    cout << "4. Pembagian\n";
}

void tambah()
{
    int angka1, angka2;
    cout << "Masukkan angka pertama : ";
    cin >> angka1;
    cout << "Masukkan angka kedua : ";
    cin >> angka2;
    cout << "Penjumlahan : " << angka1 + angka2 << endl;
}

void kurang()
{
    int angka1, angka2;
    cout << "Masukkan angka pertama : ";
    cin >> angka1;
    cout << "Masukkan angka kedua : ";
    cin >> angka2;
    cout << "Pengurangan : " << angka1 - angka2 << endl;
}

void kali()
{
    int angka1, angka2;
    cout << "Masukkan angka pertama : ";
    cin >> angka1;
    cout << "Masukkan angka kedua : ";
    cin >> angka2;
    cout << "Perkalian : " << angka1 * angka2 << endl;
}

void bagi()
{
    int angka1, angka2;
    cout << "Masukkan angka pertama : ";
    cin >> angka1;
    cout << "Masukkan angka kedua : ";
    cin >> angka2;
    if (angka2 == 0)
    {
        cout << "Tidak dapat melakukan pembagian oleh 0.\n";
        return;
    }
    cout << "Pembagian : " << angka1 / angka2 << endl;
}

int main()
{
    menu();
    tambah();
    kurang();
    kali();
    bagi();
    return 0;
}