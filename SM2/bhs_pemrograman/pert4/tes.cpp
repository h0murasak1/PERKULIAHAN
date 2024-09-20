#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    while (a <= 10)
    {
        a++;
        cout << "Nilai a: " << a << endl;

        if (a == 11)
        {
            cout << "Nilai a: " << a << endl;
            break;
        }
    }
}