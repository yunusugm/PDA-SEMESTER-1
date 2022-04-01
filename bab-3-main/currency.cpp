#include <iostream>

using namespace std;

int main()
{
    // Buat Variabel
    float rupiah, dollar, poundsterling, euro;

    // Ambil Input
    cout << "Masukkan nominal rupiah = ";
    cin >> rupiah;

    // Operasi Matematika
    dollar = rupiah * 0.000070;
    poundsterling = rupiah * 0.000051;
    euro = rupiah * 0.000059;

    // Output
    cout << "Konversi ke dollar = " << dollar << "$ \n";
    cout << "Konversi ke poundsterling = " << poundsterling << "£ \n";
    cout << "Konversi ke euro = " << euro << "€ \n";
    return 0;
}
