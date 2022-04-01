#include <iostream>

using namespace std;

int main()
{
    // Inisialisasi array
    int daftar[] = {2, 80, 5, 9, 5, 2, 9, 78, 83, 8};

    // Peroleh bilangan terbesar
    int terbesar = daftar[0];

    for (int i = 1; i < sizeof(daftar) / sizeof(int); i++)
        if (terbesar < daftar[i])
            terbesar = daftar[i];

    // Tampilkan isi terbesar
    cout << "Bilangan terbesar di array: " << terbesar;

    return 0;
}
