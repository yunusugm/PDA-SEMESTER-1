#include <iostream>

using namespace std;

int main()
{
    // Buat Variabel
    float celcius, reamur, fahrenheit, kelvin;

    // Ambil Input
    cout << "Masukkan suhu dalam celcius = ";
    cin >> celcius;

    // Operasi Matematika
    reamur = celcius * 4 / 5;
    fahrenheit = celcius * 9 / 5 + 32;
    kelvin = celcius + 273;

    // Output
    cout << "Konversi ke reamur = " << reamur << "R \n"; 
    cout << "Konversi ke fahrenheit = " << fahrenheit << "F \n"; 
    cout << "Konversi ke kelvin = " << kelvin << "K \n"; 
    return 0;
}
