#include <iostream>
using namespace std;

struct film
{
    string judul;
    string strdr;
    int thnRls;
    int rating;
};

void isiDatafilm(film &film)
{
    cout << "Masukkan judul          : ";
    getline(cin, film.judul);

    cout << "Masukkan sutradara      : ";
    getline(cin, film.strdr);

    cout << "Masukkan thnRls         : ";
    cin >> film.thnRls;
    do
    {
        cout << "Masukkan rating (1/10)  : ";
        cin >> film.rating;
        if (film.rating > 10)
        {
            cout << "Rating tidak boleh lebih dari 10. Silahkan masukkan lagi." << endl;
        }
    } while (film.rating > 10);

    cin.ignore();
}

int main()
{
    system("clear");
    film film1;
    film film2;

    cout << "===============================================" << endl;
    isiDatafilm(film1);

    cout << "===============================================" << endl;
    isiDatafilm(film2);
    system("clear");

    cout << "===============================================" << endl;
    cout << "Data film 1" << endl;
    cout << "judul    : " << film1.judul << endl;
    cout << "strdr    : " << film1.strdr << endl;
    cout << "thnRls   : " << film1.thnRls << endl;
    cout << "rating   : " << film1.rating << endl;

    cout << "===============================================" << endl;
    cout << "Data film 2" << endl;
    cout << "judul    : " << film2.judul << endl;
    cout << "strdr    : " << film2.strdr << endl;
    cout << "thnRls   : " << film2.thnRls << endl;
    cout << "rating   : " << film2.rating << endl;

    return 0;
}