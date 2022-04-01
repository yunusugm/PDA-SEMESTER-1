#include <iostream>

using namespace std;

void tambah2(int mat[][3], int baris, int kolom)
{
    int i, j;
    for (i = 0; i < baris; i++)
        for (j = 0; j < kolom; j++)
            mat[i][j] += 2;
}

int main()
{
    int matriks[2][3] =
    {
        {1, 2, 3},
        {4, 5, 6}
    };

    tambah2(matriks, 2, 3);

    // Tampilkan isi elemen array
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            cout << matriks[i][j] << ' ';

        cout << endl; // Pindah baris`
    }

    return 0;
}
