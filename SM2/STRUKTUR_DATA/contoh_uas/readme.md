### Deskripsi Program

Program ini adalah aplikasi konsol berbasis C++ yang mengelola sistem toko sederhana dengan menggunakan database MySQL. Aplikasi ini memungkinkan pengguna untuk mendaftarkan akun, login, dan melakukan operasi CRUD (Create, Read, Update, Delete) pada tabel `barang` di database `toko`. Terdapat dua jenis pengguna: admin dan user. Admin memiliki hak untuk membuat, mengubah, dan menghapus barang, sementara user hanya dapat melihat daftar barang.

### Struktur Program

Program ini terdiri dari beberapa fungsi utama yang menangani koneksi ke database, pendaftaran pengguna, login, dan operasi CRUD pada barang. Berikut adalah struktur program:

1. **Koneksi Database**

   - Fungsi `connect_db()`: Menginisialisasi koneksi ke database MySQL.

2. **Fungsi Pengguna**

   - Fungsi `register_user()`: Mendaftarkan pengguna baru ke database.
   - Fungsi `login()`: Memeriksa kredensial pengguna dan mengembalikan peran pengguna (admin atau user).

3. **Fungsi Barang**

   - Fungsi `create_barang()`: Menambahkan barang baru ke database (hanya untuk admin).
   - Fungsi `get_barang()`: Mengambil dan menampilkan semua barang dari database.
   - Fungsi `update_barang()`: Memperbarui informasi barang di database (hanya untuk admin).
   - Fungsi `delete_barang()`: Menghapus barang dari database berdasarkan ID (hanya untuk admin).

4. **Menu**

   - Fungsi `display_admin_menu()`: Menampilkan menu khusus admin untuk mengelola barang.
   - Fungsi `display_user_menu()`: Menampilkan menu khusus user untuk melihat barang.
   - Fungsi `main_login()`: Menangani proses login dan mengarahkan pengguna ke menu yang sesuai.

5. **Fungsi Utama**
   - Fungsi `main()`: Menyediakan antarmuka utama untuk registrasi, login, dan keluar dari aplikasi.

### Penjelasan Detail Setiap Fungsi

#### Koneksi Database

```cpp
MYSQL *connect_db()
{
    MYSQL *conn = mysql_init(0);
    if (conn)
    {
        conn = mysql_real_connect(conn, hostname, user, pass, dbname, port, unixsocket, clientflag);
        if (conn)
        {
            cout << "Connected to the database successfully." << endl;
        }
        else
        {
            cerr << "Connection failed: " << mysql_error(conn) << endl;
        }
    }
    else
    {
        cerr << "mysql_init failed" << endl;
    }
    return conn;
}
```

Fungsi ini menginisialisasi koneksi ke database MySQL menggunakan parameter yang telah ditentukan (hostname, user, password, dll). Jika koneksi berhasil, pesan berhasil ditampilkan; jika tidak, pesan kesalahan ditampilkan.

#### Fungsi Pengguna

```cpp
bool register_user(string username, string password, string role = "user")
{
    MYSQL *conn = connect_db();
    if (conn)
    {
        string query = "INSERT INTO users (username, password, role) VALUES ('" + username + "', '" + password + "', '" + role + "')";
        if (mysql_query(conn, query.c_str()))
        {
            cerr << "INSERT failed: " << mysql_error(conn) << endl;
        }
        else if (role == "admin")
        {
            cout << "Admin successfully added." << endl;
        }
        else
        {
            cout << "User successfully added." << endl;
        }
        mysql_close(conn);
    }
    return true;
}
```

Fungsi ini mendaftarkan pengguna baru dengan username, password, dan peran (role) ke database `users`. Default peran adalah `user`.

```cpp
bool login(string username, string password, string &userRole)
{
    MYSQL *conn = connect_db();
    if (conn)
    {
        string query = "SELECT role FROM users WHERE username = '" + username + "' AND password = '" + password + "'";
        if (mysql_query(conn, query.c_str()) == 0)
        {
            MYSQL_RES *res = mysql_store_result(conn);
            if (mysql_num_rows(res) > 0)
            {
                MYSQL_ROW row = mysql_fetch_row(res);
                userRole = row[0];
                cout << "Login success." << endl;
                mysql_free_result(res);
                mysql_close(conn);
                return true;
            }
            else
            {
                cout << "Login failed." << endl;
                mysql_free_result(res);
                mysql_close(conn);
                return false;
            }
        }
        return false;
    }
    return false;
}
```

Fungsi ini memeriksa apakah username dan password yang diberikan ada di database. Jika ada, peran pengguna dikembalikan melalui parameter `userRole` dan login dinyatakan berhasil.

#### Fungsi Barang

```cpp
void create_barang(string nama_barang, int jumlah_barang, string harga_barang)
{
    MYSQL *conn = connect_db();
    if (conn)
    {
        string query = "INSERT INTO barang (nama_barang, jumlah_barang, harga_barang) VALUES ('" + nama_barang + "', '" + to_string(jumlah_barang) + "', '" + harga_barang + "')";
        if (mysql_query(conn, query.c_str()))
        {
            cerr << "INSERT failed: " << mysql_error(conn) << endl;
        }
        else
        {
            cout << "Barang successfully added." << endl;
        }
        mysql_close(conn);
    }
}
```

Fungsi ini menambahkan barang baru ke tabel `barang` di database.

```cpp
void get_barang()
{
    MYSQL *conn = connect_db();
    if (conn)
    {
        string query = "SELECT * FROM barang";
        if (mysql_query(conn, query.c_str()))
        {
            cerr << "SELECT failed: " << mysql_error(conn) << endl;
        }
        else
        {
            MYSQL_RES *res = mysql_store_result(conn);
            MYSQL_ROW row;
            while ((row = mysql_fetch_row(res)) != NULL)
            {
                cout << "ID: " << row[0] << "\nNama Barang: " << row[1] << "\nJumlah: " << row[2] << "\nHarga: " << row[3] << endl;
            }
            mysql_free_result(res);
        }
        mysql_close(conn);
    }
}
```

Fungsi ini mengambil semua data barang dari tabel `barang` dan menampilkannya.

```cpp
void update_barang(int id, string nama_barang, int jumlah_barang, double harga_barang)
{
    MYSQL *conn = connect_db();
    if (conn)
    {
        string query = "UPDATE barang SET nama_barang='" + nama_barang + "', jumlah_barang=" + to_string(jumlah_barang) + ", harga_barang=" + to_string(harga_barang) + " WHERE id=" + to_string(id);
        if (mysql_query(conn, query.c_str()))
        {
            cerr << "UPDATE failed: " << mysql_error(conn) << endl;
        }
        else
        {
            cout << "Barang updated successfully." << endl;
        }
        mysql_close(conn);
    }
}
```

Fungsi ini memperbarui informasi barang berdasarkan ID barang.

```cpp
void delete_barang(int id)
{
    MYSQL *conn = connect_db();
    if (conn)
    {
        string query = "DELETE FROM barang WHERE id=" + to_string(id);
        if (mysql_query(conn, query.c_str()))
        {
            cerr << "DELETE failed: " << mysql_error(conn) << endl;
        }
        else
        {
            cout << "Barang deleted successfully." << endl;
        }
        mysql_close(conn);
    }
}
```

Fungsi ini menghapus barang berdasarkan ID barang.

#### Menu

```cpp
void display_admin_menu()
{
    int choice;
    do
    {
        cout << "1. Create Barang" << endl;
        cout << "2. Get Barang" << endl;
        cout << "3. Update Barang" << endl;
        cout << "4. Delete Barang" << endl;
        cout << "5. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            string nama_barang, harga_barang;
            int jumlah_barang;
            cout << "Nama Barang: ";
            cin >> nama_barang;
            cout << "Jumlah Barang: ";
            cin >> jumlah_barang;
            cout << "Harga Barang: ";
            cin >> harga_barang;
            create_barang(nama_barang, jumlah_barang, harga_barang);
            break;
        }
        case 2:
        {
            get_barang();
            break;
        }
        case 3:
        {
            int id, jumlah_barang;
            string nama_barang;
            double harga_barang;
            cout << "ID: ";
            cin >> id;
            cout << "Nama Barang: ";
            cin >> nama_barang;
            cout << "Jumlah Barang: ";
            cin >> jumlah_barang;
            cout << "Harga Barang: ";
            cin >> harga_barang;
            update_barang(id, nama_barang, jumlah_barang, harga_barang);
            break;
        }
        case 4:
        {
            int id;
            cout << "ID: ";
            cin >> id;
            delete_barang(id);
            break;
        }
        case 5:
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
        }
    } while (choice != 5);
}
```

Menu ini digunakan oleh admin untuk mengelola barang. Admin dapat menambah, melihat, memperbarui, dan menghapus barang.

```cpp
void display_user_menu

()
{
    int choice;
    do
    {
        cout << "1. Get Barang" << endl;
        cout << "2. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            get_barang();
            break;
        }
        case 2:
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
        }
    } while (choice != 2);
}
```

Menu ini digunakan oleh user untuk melihat daftar barang.

```cpp
void main_login()
{
    string username, password, userRole;
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;
    if (login(username, password, userRole))
    {
        cout << "Welcome, " << username << "!" << endl;
        if (userRole == "admin")
        {
            cout << "You are an admin." << endl;
            display_admin_menu();
        }
        else
        {
            cout << "You are a user." << endl;
            display_user_menu();
        }
    }
    else
    {
        cout << "Login failed." << endl;
    }
}
```

Fungsi ini menangani proses login dan mengarahkan pengguna ke menu yang sesuai berdasarkan peran mereka.

#### Fungsi Utama

```cpp
int main()
{
    string username, password;
    cout << "1. Register" << endl;
    cout << "2. Login" << endl;
    cout << "3. Exit" << endl;
    int choice;
    cout << "Choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Username: ";
        cin >> username;
        cout << "Password: ";
        cin >> password;
        register_user(username, password);
        break;
    case 2:
        main_login();
        break;
    case 3:
        break;
    default:
        cout << "Invalid choice." << endl;
        break;
    }
    while (choice != 3)
        ;

    return 0;
}
```

Fungsi utama menyediakan antarmuka utama bagi pengguna untuk mendaftar, login, atau keluar dari aplikasi.

### Kesimpulan

Program ini menyediakan dasar yang baik untuk aplikasi manajemen toko dengan fitur registrasi, login, dan pengelolaan data barang yang lengkap. Dengan penambahan fitur keamanan seperti hashing password dan penggunaan prepared statements, aplikasi ini dapat lebih aman dan siap untuk digunakan dalam skenario dunia nyata.
