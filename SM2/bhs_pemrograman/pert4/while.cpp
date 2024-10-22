#include <iostream>
using namespace std;
void penggunaanDowhile()
{
    cout << "Penggunaan DO WHILE" << endl;
    int a = 1;
    int b = 2;
    do
    {
        cout << "Nilai a: " << a << endl;
        a++;
    } while (a <= b);
}

void penggunaanWhile()
{
    cout << "Penggunaan WHILE" << endl;
    int a = 1;
    int b = 2;

    while (a <= b)
    {
        cout << "Nilai a: " << a << endl;
        a++;
    }
}

void penggunaanWhilebreak()
{
    cout << "Penggunaan WHILE dengan BREAK" << endl;
    int a = 1;
    int b = 10;

    while (a <= b)
    {
        cout << "Nilai a: " << a << endl;
        a++;
        if (a == 5)
        {
            cout << "Looping while berhenti" << endl;
            break;
        }
    }
    cout << "Looping di luar while berhenti" << endl;
}

int main()
{
    penggunaanDowhile();
    penggunaanWhile();
    penggunaanWhilebreak();

    return 0;
}