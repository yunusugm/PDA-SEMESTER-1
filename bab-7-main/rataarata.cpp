#include <iostream>

using namespace std;

int main()
{
    int daftar[] = { 1, 2, 3, 4, 5, 6 };

    int jumlah_elemen = sizeof(daftar) / sizeof (int);
    cout << "Jumlah elemen = " << jumlah_elemen << endl;

    return 0;
}