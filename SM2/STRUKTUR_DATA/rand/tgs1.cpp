#include <iostream>
#include <string>
using namespace std;

struct Buku {
    string judul;
    string pengarang;
    int tahun;
};

int main()
{
    system("clear");
    Buku bku1;
    Buku bku2;

    cout << "===============================================" << endl;
    bku1.judul = "Beauty and the Beast";
    bku1.pengarang = "Disney";
    bku1.tahun = 1991;

    cout << "judul          : " << bku1.judul << endl;
    cout << "pengarang      : " << bku1.pengarang << endl;
    cout << "tahun          : " << bku1.tahun << endl;

    cout << "===============================================" << endl;
    bku2.judul = "Mulan";
    bku2.pengarang = "Disney";
    bku2.tahun = 1998;

    cout << "judul          : " << bku2.judul << endl;
    cout << "pengarang      : " << bku2.pengarang << endl;
    cout << "tahun          : " << bku2.tahun << endl;

    return 0;
}