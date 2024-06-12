#include <iostream>
using namespace std;

int main()
{
    system("clear");
    int numbers[5] = {10, 20, 30, 40, 50};
    string nama[5] = {"Ambatunat", "Rusdi", "Bagas", "Mamat", "Kapal Karam"};

    cout << "================================================================" << endl;
    cout << "Array dengan tipe data berbeda" << endl;

    cout << "Menampilkan tipe data int" << endl;
    cout << "Elemen-elemen array : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << ", ";
    }
    cout << endl;

    cout << "================================================================" << endl;
    cout << "Menampilkan tipe data string" << endl;
    cout << "Elemen-elemen array : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << nama[i] << ", ";
    }
    cout << endl;
}