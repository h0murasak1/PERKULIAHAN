#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct User
{
    string username;
    string password;
};

struct MenuItem
{
    string name;
    double price;
};

struct Order
{
    string username;
    vector<MenuItem> items;
    double total;
};

vector<User> users;
vector<MenuItem> menu = {
    {"Salad", 10000},
    {"Jus Buah", 7000},
    {"Smoothie", 8000}};
vector<Order> orders;

bool registerUser(const string &username, const string &password)
{
    for (const auto &user : users)
    {
        if (user.username == username)
        {
            return false; // User already exists
        }
    }
    users.push_back({username, password});
    return true;
}

bool loginUser(const string &username, const string &password)
{
    for (const auto &user : users)
    {
        if (user.username == username && user.password == password)
        {
            return true;
        }
    }
    return false;
}

void viewMenu()
{
    cout << "Menu:\n";
    for (size_t i = 0; i < menu.size(); ++i)
    {
        cout << i + 1 << ". " << menu[i].name << " - Rp. " << menu[i].price << "\n";
    }
}

void placeOrder(const string &username)
{
    vector<MenuItem> orderItems;
    int choice;
    char continueOrder;
    double total = 0.0;

    do
    {
        viewMenu();
        cout << "Pilih Menu Yang Ingin Kamu Order: ";
        cin >> choice;
        if (choice > 0 && choice <= menu.size())
        {
            orderItems.push_back(menu[choice - 1]);
            total += menu[choice - 1].price;
        }
        else
        {
            cout << "Pilihan Invalid. Coba lagi.\n";
        }
        cout << "Apakah kamu ingin memesan lagi? (y/n): ";
        cin >> continueOrder;
    } while (continueOrder == 'y');

    orders.push_back({username, orderItems, total});
    cout << "Order Berhasil. Total: Rp. " << total << "\n";
}

void viewOrders(const string &username)
{
    cout << "Orders for " << username << ":\n";
    for (const auto &order : orders)
    {
        if (order.username == username)
        {
            for (const auto &item : order.items)
            {
                cout << item.name << " - Rp. " << item.price << "\n";
            }
            cout << "Total: Rp. " << order.total << "\n";
        }
    }
}

int main()
{
    string username, password;
    int choice;
    bool loggedIn = false;

    while (true)
    {
        cout << "Tekan Enter untuk lanjut...";
        fflush(stdin);
        getchar();
        system("clear");
        cout << "1. Register\n2. Login\n3. Tampilkan Menu\n4. Buat Orderan\n5. Tampilkan Orderan\n6. Exit\n";
        cout << "Masukkan Pilihan: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter username: ";
            cin >> username;
            cout << "Enter password: ";
            cin >> password;
            if (registerUser(username, password))
            {
                cout << "User registered successfully.\n";
            }
            else
            {
                cout << "Username Sudah Ada. Coba yang lain.\n";
            }
            break;
        case 2:
            cout << "Enter username: ";
            cin >> username;
            cout << "Enter password: ";
            cin >> password;
            if (loginUser(username, password))
            {
                cout << "Login Berhasil.\n";
                loggedIn = true;
            }
            else
            {
                cout << "User / Pass Salah.\n";
            }
            break;
        case 3:
            viewMenu();
            break;
        case 4:
            if (loggedIn)
            {
                placeOrder(username);
            }
            else
            {
                cout << "Kamu Harus Login Dahulu.\n";
            }
            break;
        case 5:
            if (loggedIn)
            {
                viewOrders(username);
            }
            else
            {
                cout << "Kamu Harus Login Dahulu.\n";
            }
            break;
        case 6:
            return 0;
        default:
            cout << "Pilihan tidak valid.\n";
        }
    }

    return 0;
}
