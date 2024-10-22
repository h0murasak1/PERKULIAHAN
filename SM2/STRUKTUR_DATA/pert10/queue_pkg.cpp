#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> antrian; // membuat antrian kosong
    antrian.push(10);   // menambahkan elemen 10 ke antrian
    antrian.push(20);   // menambahkan elemen 20 ke antrian
    antrian.push(30);   // menambahkan elemen 30 ke antrian

    cout << "Ukuran Antriannya : " << antrian.size() << endl; // output: "Ukuran Antriannya : 3"
    cout << "Elemen Depan : " << antrian.front() << endl;     // output: "Elemen Depan : 10"
    antrian.pop();
    cout << "Elemen Depan (setelah pop) : " << antrian.front() << endl; // output: "Elemen Depan (setelah pop) : 20"
    return 0;
}