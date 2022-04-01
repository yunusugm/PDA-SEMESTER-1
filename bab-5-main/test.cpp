#include <iostream>
using namespace std;

int main() {
    int code;
    string hari;

    cout << "Masukkan kode hari (0 - 6) : ";
    cin >> code;

    if (code == 0)
    {
        hari = "Minggu";
    }
    else if (code == 1)
    {
        hari = "Senin";
    }
    else if (code == 2)
    {
        hari = "Selasa";
    }
    else if (code == 3)
    {
        hari = "Rabu";
    }
    else if (code == 4)
    {
        hari = "Kamis";
    }
    else if (code == 5)
    {
        hari = "Jum'at";
    }
    else if (code == 6)
    {
        hari = "Sabtu";
    }
    else {
        cout << "Tolong masukkan kode yang sesuai! \n";
        hari = "Tidak ada \n";
    }

    cout << "Kode hari = " << code << endl;
    cout << "Nama Hari = " << hari;
    
    return 0;
}