#include <iostream>

using namespace std;

int main()
{
    // Buat Variabel
    int hours, pay;
    const int rate = 75000;

    // Ambil Input
    cout << "Masukkan jam kerja kamu = ";
    cin >> hours;

    // Operasi MAtematika
    pay = hours * rate;

    // Output
    cout << "Gaji kamu bulan ini adalah = Rp" << pay;
    return 0;
}
