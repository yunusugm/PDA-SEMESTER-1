#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Inisialisasi array
    int hasil[] = {70, 80, 75, 90, 65, 66, 72, 81, 82};

    // Peroleh jumlah data
    int jum_data = sizeof(hasil) / sizeof(int);

    // Hitung jumlah untuk semua nilai di hasil
    int total = 0;
    for (int i = 0; i < jum_data; i++)
        total += hasil[i];

    // Hitung nilai rata-rata
    double rerata = (double) total / jum_data;

    // Hitung standar deviasi
    double sigma = 0;
    for (int i = 0; i < jum_data; i++)
        sigma += (hasil[i] - rerata) * (hasil[i] - rerata);

    double ds = sqrt(sigma/(jum_data - 1));

    // Tampilkan nilai deviasi standar
    cout << "Deviasi standar = " << ds << endl;

    return 0;
}
