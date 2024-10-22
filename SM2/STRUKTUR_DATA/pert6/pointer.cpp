#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int;
    *ptr = 10;

    cout << "Nilai yang disimpan dalam variabel ptr: " << *ptr << endl;

    delete ptr;

    return 0;
}