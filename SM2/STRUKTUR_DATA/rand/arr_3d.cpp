#include <iostream>
using namespace std;

int main()
{
    system("clear");
    int i, s;
    char h = 'A';
    char nama[4][5][22] = {
        {"Bagascar", "Ambatunat", "Amboyd", "Rusdi", "Rambo"},
        {"Simaloa", "mantis", "budicrous", "Djambreti", "Dcopeti"},
        {"pandi", "jarez", "Pai", "Bima", "radit"},
        {"epone", "virsey", "aqla", "idam", "ibal"}};

    cout << "Daftar Nama Kelompok: " << endl;
    for (i = 0; i < 4; i++)
    {
        cout << endl;
        cout << "Kelompok: " << h++;
        for (s = 0; s < 5; s++)
        {
            cout << endl
                 << s + 1 << ". " << nama[i][s];
        }
        cout << endl;
    }

    return 0;
}