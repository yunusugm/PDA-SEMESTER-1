#include <iostream>
using namespace std;

int main() {
  //! Deklarasi Variabel
  int matriks_a [3][3], matriks_b [3][3], hasil [3][3] ;
  int row, col, i, jumlah = 0;

  cout << "Perkalian matriks 3 x 3 \n";
  //? Isi matriks 1
  for (row = 0; row < 3; row++) {
    for (col = 0; col < 3; col++) {
      cout << "Matriks satu baris [" << row + 1 << "] kolom [" << col + 1 << "] = ";
      cin >> matriks_a[row][col]; 
    }
  }
 //? Isi Matriks 2
  for (row = 0; row < 3; row++) {
    for (col = 0; col < 3; col++) {
      cout << "Matriks dua baris [" << row + 1 << "] kolom [" << col + 1 << "] = ";
      cin >> matriks_b[row][col]; 
    }
  }
 //? Perkalian Matriks
  for (row = 0; row < 3; row++) {
    for (col = 0; col < 3; col++) {
      for (i = 0; i < 3; i++) {
        jumlah = jumlah + matriks_a[row][i] * matriks_b[i][col];
      }
      hasil[row][col] = jumlah;
      jumlah = 0;
    }
  }
  cout << "Hasil Perkalian \n";
  for (row = 0; row < 3; row++) {
    for (col = 0; col < 3; col++) {
      cout << hasil[row][col] << "\t";
    }
    cout << endl;
  }
  return 0;
}
