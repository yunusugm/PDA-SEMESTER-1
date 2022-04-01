#include <iostream>
using namespace std;

void determinan(int array[2][2]) {
  int determinan;
  determinan = array[0][0] * array[1][1] - array[0][1] * array[1][0];
  cout << "Determinan = " << determinan << endl;
}
void transpose(int array[2][2]) {
  int transpose[2][2];
  cout << "Transpose \n";
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      transpose[i][j] = array[j][i];
    }
  }
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout << transpose[i][j] << "\t";
    }
    cout << endl;
  }
}
void invers(int array[2][2]) {
  float invers[2][2];
  cout << "Invers \n";
  invers[1][1] = array[0][0];
  invers[0][0] = array[1][1];
  invers[0][1] = array[0][1] * (-1);
  invers[1][0] = array[1][0] * (-1);
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout << invers[i][j] << "\t";
    }
    cout << endl;
  }
}
void penjumlahan(int array_satu[2][2], int array_dua[2][2]) {
  int hasil[2][2];
  cout << "Penjumlahan \n";
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      hasil[i][j] = array_satu[i][j] + array_dua[i][j];
    }
  }
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout << hasil[i][j] << "\t";
    }
    cout << endl;
  }
}
void perkalian(int array_satu[2][2], int array_dua[2][2]) {
  int hasil[2][2],  jumlah = 0;
  cout << "Perkalian \n";
  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
      for(int k = 0; k < 2; k++) {
        jumlah = jumlah + array_satu[i][k] * array_satu[k][j];
      }
      hasil[i][j] = jumlah;
      jumlah = 0;
    }
  }
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout << hasil[i][j] << "\t";
    }
    cout << endl;
  }
}

int main() {
  int matriks[2][2];

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout << "Matriks baris [" << i + 1 << "] kolom [" << j + 1 << "] = ";
      cin >> matriks[i][j];
    }
  }
  determinan(matriks);
  transpose(matriks);
  invers(matriks);
  penjumlahan(matriks, matriks);
  perkalian(matriks, matriks);
  return 0;
}

