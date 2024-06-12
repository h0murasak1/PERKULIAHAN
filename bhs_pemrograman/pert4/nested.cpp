#include <iostream>
using namespace std;

void nestedif()
{
    int a = 10;
    int b = 20;

    if (a == 10)
    {
        if (b == 20)
        {
            cout << "Nilai a dan b sama" << endl;
        }
    }
    else
    {
        cout << "Nilai a dan b tidak sama" << endl;
    }
}

void nestedfor()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << "Nilai i: " << i << " Nilai j: " << j << endl;
        }
    }
}

void postfix_prefix()
{
    int a = 10;
    int b = 20;

    cout << "Nilai a: " << a << endl;
    cout << "Nilai b: " << b << endl;
    cout << "Nilai a++: " << a++ << endl; // postfix
    cout << "Nilai ++b: " << ++b << endl; // prefix
    cout << "Nilai a: " << a << endl;
    cout << "Nilai b: " << b << endl;
}

int main()
{
    nestedif();
    nestedfor();
    postfix_prefix();

    return 0;
}