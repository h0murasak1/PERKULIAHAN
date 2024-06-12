#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    stack<string> tumpukanBuku;
    int operasi;

    while (true)
    {
        cout << "Masukkan operasi (push, pop, peek, isEmpty, size): \n";
        cout << "===================================================" << endl;
        cout << "1. push" << endl;
        cout << "2. pop" << endl;
        cout << "3. peek" << endl;
        cout << "4. isEmpty" << endl;
        cout << "5. size" << endl;
        cout << "6. exit" << endl;
        cin >> operasi;

        if (operasi == 1)
        {
            string judul;
            cout << "Masukkan judul buku: ";
            cin.ignore();
            getline(cin, judul);
            tumpukanBuku.push(judul);
            cout << "Buku dengan judul \"" << judul << "\" berhasil ditambahkan ke dalam tumpukan." << endl;
        }
        else if (operasi == 2)
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
        else if (operasi == 3)
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
        else if (operasi == 4)
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
        else if (operasi == 5)
        {
            cout << "Jumlah buku dalam tumpukan: " << tumpukanBuku.size() << endl;
        }
        else if (operasi == 6)
        {
            return false;
        }
        else
        {
            cout << "Operasi tidak valid. Silakan coba lagi." << endl;
        }
    }

    return 0;
}