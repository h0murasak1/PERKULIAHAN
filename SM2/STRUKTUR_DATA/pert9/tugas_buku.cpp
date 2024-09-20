#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    stack<string> tumpukanBuku;
    string operasi;

    while (true)
    {
        fflush(stdin);
        cout << "Tekan tombol apa saja untuk melanjutkan...";
        cin.ignore();
        system("clear");
        cout << "Masukkan operasi (push, pop, peek, isEmpty, size): \n";
        cout << "===================================================" << endl;
        cout << "1. push" << endl;
        cout << "2. pop" << endl;
        cout << "3. peek" << endl;
        cout << "4. isEmpty" << endl;
        cout << "5. size" << endl;
        cout << "6. exit" << endl;
        cout << "Masukkan Pilihan : ";
        cin >> operasi;

        if (operasi == "1")
        {
            string judul;
            cout << "Masukkan judul buku: ";
            cin.ignore();
            getline(cin, judul);
            tumpukanBuku.push(judul);
            cout << "Buku dengan judul \"" << judul << "\" berhasil ditambahkan ke dalam tumpukan." << endl;
        }
        else if (operasi == "2")
        {
            if (tumpukanBuku.empty())
            {
                cout << "Tumpukan buku kosong." << endl;
            }
            else
            {
                string judul = tumpukanBuku.top();
                tumpukanBuku.pop();
                cout << "Buku dengan judul \"" << judul << "\" berhasil dihapus dari tumpukan." << endl;
            }
        }
        else if (operasi == "3")
        {
            if (tumpukanBuku.empty())
            {
                cout << "Tumpukan buku kosong." << endl;
            }
            else
            {
                string judul = tumpukanBuku.top();
                cout << "Buku paling atas dalam tumpukan memiliki judul \"" << judul << "\"." << endl;
            }
        }
        else if (operasi == "4")
        {
            if (tumpukanBuku.empty())
            {
                cout << "Tumpukan buku kosong." << endl;
            }
            else
            {
                cout << "Tumpukan buku tidak kosong." << endl;
            }
        }
        else if (operasi == "5")
        {
            cout << "Jumlah buku dalam tumpukan: " << tumpukanBuku.size() << endl;
        }
        else if (operasi == "6")
        {
            break;
        }
        else
        {
            cout << "Operasi tidak valid. Silakan coba lagi." << endl;
        }
    }

    cout << "Terima kasih telah menggunakan program ini.";

    return 0;
}