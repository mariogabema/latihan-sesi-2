#include <iostream>
using namespace std;

int main()
{
    float jumlah, total;

    cout << "Masukan jumlah barang = ";
    cin >> jumlah;
    total = harga * jumlah;

    cout << "\nYang harus di bayar = " << total;
    return 0;
}