#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct Pasien
{
    string nama;
    int nomorAntrian;
    // tambahkan atribut lain jika diperlukan
};

int main()
{
    queue<Pasien> antrian;
    int nomorAntrianTerakhir = 0; // nomor antrian terakhir yang diberikan

    while (true)
    {
        cout << "Menu: " << endl;
        cout << "1. Tambah Pasien" << endl;
        cout << "2. Panggil Pasien" << endl;
        cout << "3. Tampilkan Antrian" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilihan: ";

        int pilihan;
        cin >> pilihan;

        if (pilihan == 1)
        {
            Pasien pasienBaru;
            cout << "Nama: ";
            cin >> pasienBaru.nama;
            pasienBaru.nomorAntrian = ++nomorAntrianTerakhir;
            antrian.push(pasienBaru);
            cout << "Nomor Antrian Anda: " << pasienBaru.nomorAntrian << " Berhasil Di Tambahkan " << endl;
        }
        else if (pilihan == 2)
        {
            if (antrian.empty())
            {
                cout << "Antrian Kosong" << endl;
            }
            else
            {
                Pasien pasienDiPanggil = antrian.front();
                antrian.pop();
                cout << "Pasien yang dipanggil: " << pasienDiPanggil.nama << endl;
            }
        }
        else if (pilihan == 3)
        {
            if (antrian.empty())
            {
                cout << "Antrian Kosong" << endl;
            }
            else
            {
                cout << "Antrian: " << endl;
                queue<Pasien> temp = antrian;
                while (!temp.empty())
                {
                    Pasien pasien = temp.front();
                    temp.pop();
                    cout << pasien.nomorAntrian << ". " << pasien.nama << endl;
                }
            }
        }
        else if (pilihan == 4)
        {
            break;
        }
        else
        {
            cout << "Pilihan tidak valid" << endl;
        }
    }

    return 0;
}