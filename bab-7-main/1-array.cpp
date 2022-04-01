#include <iostream>

using namespace std;

int main()
{
    int hasil[5]; // Deklarasi array dengan 5 elemen

    // Isi setiap elemen array
    hasil[0] = 70;
	hasil[1] = 80;
	hasil[2] = 75;
	hasil[3] = 90;
	hasil[4] = 65;

    // Tampilkan isi array
    for (int i = 0; i < 5; i++)
        cout << hasil[i] << endl;

    return 0;
}
