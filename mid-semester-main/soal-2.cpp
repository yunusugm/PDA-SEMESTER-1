// Output tabel
// Input nama dan kelengkapan (1-5)
// Jika kelengkapan tidak sesuai ulangi dari input nama
// Ada 5 data
// Rekap data bebas

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    string nama1, nama2, nama3, nama4, nama5, rekap;
    int kelengkapan1, kelengkapan2, kelengkapan3, kelengkapan4, kelengkapan5;
    int denda1, denda2, denda3, denda4, denda5;


    cout << "\tATURAN DENDA PELANGGARAN \n";
    cout << "============================================ \n";
    cout << "Jenis Kelengkapan \t\t Denda \n";
    cout << "============================================ \n";
    cout << "1. Tidak Membawa SIM \t\t Rp.150.000 \n";
    cout << "2. Tidak Membawa STNK \t\t Rp.100.000 \n";
    cout << "3. Tidak Membawa SIM dan STNK \t Rp.250.000 \n";
    cout << "4. Tidak Membawa Helm \t\t Rp.75.000 \n";
    cout << "5. Membawa SIM dan STNK \t Rp.0 \n";

    repeat1:
    cout << "Masukkan nama orang pertama : ";
    cin >> nama1;
    cout << "Masukkan jenis kelengkapan (1-5) : ";
    cin >> kelengkapan1;
    if (kelengkapan1 == 1) {
        denda1 = 150000;
    }
    else if (kelengkapan1 == 2) {
        denda1 = 100000;
    }
    else if (kelengkapan1 == 3) {
        denda1 = 250000;
    }
    else if (kelengkapan1 == 4) {
        denda1 = 75000;
    }
    else if (kelengkapan1 == 5) {
        denda1 = 0;
    }
    else {
        goto repeat1;
    }

    repeat2:
    cout << "Masukkan nama orang kedua : ";
    cin >> nama2;
    cout << "Masukkan jenis kelengkapan (1-5) : ";
    cin >> kelengkapan2;
    if (kelengkapan2 == 1) {
        denda2 = 150000;
    }
    else if (kelengkapan2 == 2) {
        denda2 = 100000;
    }
    else if (kelengkapan2 == 3) {
        denda2 = 250000;
    }
    else if (kelengkapan2 == 4) {
        denda2 = 75000;
    }
    else if (kelengkapan2 == 5) {
        denda2 = 0;
    }
    else {
        goto repeat2;
    }
    
    repeat3:
    cout << "Masukkan nama orang ketiga : ";
    cin >> nama3;
    cout << "Masukkan jenis kelengkapan (1-5) : ";
    cin >> kelengkapan3;
    if (kelengkapan3 == 1) {
        denda3 = 150000;
    }
    else if (kelengkapan3 == 2) {
        denda3 = 100000;
    }
    else if (kelengkapan3 == 3) {
        denda3 = 250000;
    }
    else if (kelengkapan3 == 4) {
        denda3 = 75000;
    }
    else if (kelengkapan3 == 5) {
        denda3 = 0;
    }
    else {
        goto repeat3;
    }

    repeat4:
    cout << "Masukkan nama orang keempat : ";
    cin >> nama4;
    cout << "Masukkan jenis kelengkapan (1-5) : ";
    cin >> kelengkapan4;
    if (kelengkapan4 == 1) {
        denda4 = 150000;
    }
    else if (kelengkapan4 == 2) {
        denda4 = 100000;
    }
    else if (kelengkapan4 == 3) {
        denda4 = 250000;
    }
    else if (kelengkapan4 == 4) {
        denda4 = 75000;
    }
    else if (kelengkapan4 == 5) {
        denda4 = 0;
    }
    else {
        goto repeat4;
    }

    repeat5:
    cout << "Masukkan nama orang kelima : ";
    cin >> nama5;
    cout << "Masukkan jenis kelengkapan (1-5) : ";
    cin >> kelengkapan5;
    if (kelengkapan5 == 1) {
        denda5 = 150000;
    }
    else if (kelengkapan5 == 2) {
        denda5 = 100000;
    }
    else if (kelengkapan5 == 3) {
        denda5 = 250000;
    }
    else if (kelengkapan5 == 4) {
        denda5 = 75000;
    }
    else if (kelengkapan5 == 5) {
        denda5 = 0;
    }
    else {
        goto repeat5;
    }

    cout << "Rekap data? y/n : ";
    cin >> rekap;
    cout << endl;

    if (rekap == "y") {
        cout << "Tabel Denda Pengemudi \n";
        cout << "========================== \n";
        cout << "Nama \t\tDenda \n";
        cout << "========================== \n";
        cout << nama1 << "\t\t" << denda1 << endl;
        cout << nama2 << "\t\t" << denda2 << endl;
        cout << nama3 << "\t\t" << denda3 << endl;
        cout << nama4 << "\t\t" << denda4 << endl;
        cout << nama5 << "\t\t" << denda5 << endl;
    }
    
    return 0;
}
