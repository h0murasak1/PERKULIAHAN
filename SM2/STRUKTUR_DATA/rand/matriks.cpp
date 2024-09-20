#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // program menghitung 2 matriks
    int matriks1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int matriks2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}};

    int hasil[3][3];

    cout << "Aplikasi menghitung 2 matriks 3x3" << endl;
    cout << "Matriks 1" << endl;
    // Input matriks 1
    cout << "Masukkan elemen-elemen matriks 1 (atau tekan Enter untuk menggunakan nilai default):" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int input;
            if (cin >> input)
            {
                matriks1[i][j] = input;
            }
            else
            {
                break;
            }
        }
    }

    // Input matriks 2
    cout << "Masukkan elemen-elemen matriks 2 (atau tekan Enter untuk menggunakan nilai default):" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int input;
            if (cin >> input)
            {
                matriks2[i][j] = input;
            }
            else
            {
                break;
            }
        }
    }
    cout << "Matriks yang anda input" << endl;
    cout << "Matriks 1" << endl;
    // Output matriks 1
    for (int i = 0; i < 3; i++)
    {
        cout << "| ";
        for (int j = 0; j < 3; j++)
        {
            cout << matriks1[i][j] << " ";
        }
        cout << "|" << endl;
    }
    // Output matriks 2
    cout << "Matriks 2" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "| ";
        for (int j = 0; j < 3; j++)
        {
            cout << matriks2[i][j] << " ";
        }
        cout << "|" << endl;
    }

    cout << "Hasil penjumlahan matriks" << endl;
    // Hitung penjumlahan matriks
    for (int i = 0; i < 3; i++)
    {
        cout << "| ";
        for (int j = 0; j < 3; j++)
        {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
            cout << setw(3) << hasil[i][j] << " ";
        }
        cout << "|" << endl;
    }

    // hitung determinan matriks
    int det = hasil[0][0] * (hasil[1][1] * hasil[2][2] + hasil[1][2] * hasil[2][0]) -
              hasil[0][1] * (hasil[1][0] * hasil[2][2] + hasil[1][2] * hasil[2][0]) +
              hasil[0][2] * (hasil[1][0] * hasil[2][1] + hasil[1][1] * hasil[2][0]);

    cout << "Determinan matriks hasil penjumlahan: " << det << endl;
}