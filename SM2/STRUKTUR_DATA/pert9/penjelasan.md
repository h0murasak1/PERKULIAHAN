# Penjelasan Program Manajemen Tumpukan Buku

Program ini adalah implementasi sederhana dari manajemen tumpukan (stack) buku menggunakan bahasa pemrograman C++. Program ini memungkinkan pengguna untuk melakukan beberapa operasi dasar pada tumpukan buku, seperti menambahkan buku (push), menghapus buku paling atas (pop), melihat buku paling atas (peek), memeriksa apakah tumpukan kosong (isEmpty), dan melihat jumlah buku dalam tumpukan (size).

## Struktur Program

### Library yang Digunakan

```cpp
#include <iostream>
#include <stack>
#include <string>
```

Library yang digunakan adalah:

- `iostream` untuk input dan output.
- `stack` untuk menggunakan struktur data stack.
- `string` untuk memanipulasi string.

### Fungsi Utama `main`

```cpp
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
```

### Penjelasan Bagian-Bagian Kode

1. **Inisialisasi Tumpukan Buku**

   ```cpp
   stack<string> tumpukanBuku;
   string operasi;
   ```

2. **Loop Utama Program**

   ```cpp
   while (true)
   {
       fflush(stdin);
       cout << "Tekan tombol apa saja untuk melanjutkan...";
       cin.ignore();
       system("clear");
       // Menampilkan menu operasi
       // Input operasi dari pengguna
       cin >> operasi;

       // Blok if-else untuk menentukan operasi yang diinginkan
   }
   ```

3. **Operasi `push`**

   - Meminta input judul buku dari pengguna.
   - Menambahkan buku ke tumpukan.

   ```cpp
   if (operasi == "1")
   {
       string judul;
       cout << "Masukkan judul buku: ";
       cin.ignore();
       getline(cin, judul);
       tumpukanBuku.push(judul);
       cout << "Buku dengan judul \"" << judul << "\" berhasil ditambahkan ke dalam tumpukan." << endl;
   }
   ```

4. **Operasi `pop`**

   - Memeriksa apakah tumpukan kosong.
   - Jika tidak kosong, menghapus buku paling atas dari tumpukan.

   ```cpp
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
   ```

5. **Operasi `peek`**

   - Memeriksa apakah tumpukan kosong.
   - Jika tidak kosong, menampilkan buku paling atas dalam tumpukan.

   ```cpp
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
   ```

6. **Operasi `isEmpty`**

   - Memeriksa dan menampilkan apakah tumpukan kosong atau tidak.

   ```cpp
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
   ```

7. **Operasi `size`**

   - Menampilkan jumlah buku dalam tumpukan.

   ```cpp
   else if (operasi == "5")
   {
       cout << "Jumlah buku dalam tumpukan: " << tumpukanBuku.size() << endl;
   }
   ```

8. **Operasi `exit`**

   - Menghentikan loop dan keluar dari program.

   ```cpp
   else if (operasi == "6")
   {
       break;
   }
   ```

9. **Pesan Terima Kasih**
   - Menampilkan pesan terima kasih saat keluar dari program.
   ```cpp
   cout << "Terima kasih telah menggunakan program ini.";
   ```

## Kesimpulan

Program ini memberikan contoh sederhana tentang bagaimana menggunakan stack dalam C++ untuk mengelola data buku. Dengan operasi-operasi dasar seperti `push`, `pop`, `peek`, `isEmpty`, dan `size`, pengguna dapat dengan mudah menambahkan, menghapus, melihat, dan memeriksa buku dalam tumpukan.
