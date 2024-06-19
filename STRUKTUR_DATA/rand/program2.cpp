#include <iostream>
using namespace std;

int main()
{
    const int sks = 4, nim = 20230801;
    char nama[18] = "Bagas Dribble", matkul[] = "Struktur Data";
    float nilai1, nilai2, nilai3;
    nilai1 = 90;
    nilai2 = 80;
    nilai3 = (nilai1 + nilai2) / 2;
    cout << "Nama Mahasiswa : " << nama << endl;
    cout << "NIM            : " << nim << endl;
    cout << "Mata Kuliah    : " << matkul << endl;
    cout << "SkS            : " << sks << endl;
    cout << "Nilai Teori    : " << nilai1 << endl;
    cout << "Nilai Praktik  : " << nilai2 << endl;
    cout << "Nilai Akhir    : " << nilai3 << endl;

    return 0;
}