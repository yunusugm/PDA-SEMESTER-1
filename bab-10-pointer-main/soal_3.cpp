#include <iostream>
#include <conio.h>
using namespace std;

void hari(int *angka) {
  string nama;

  if (*angka % 7 == 1) {
    nama = "Minggu\n";
  } else if (*angka % 7 == 2) {
    nama = "Senin\n";
  } else if (*angka % 7 == 3) {
    nama = "Selasa\n";
  } else if (*angka % 7 == 4) {
    nama = "Rabu\n";
  } else if (*angka % 7 == 5) {
    nama = "Kamis\n";
  } else if (*angka % 7 == 6) {
    nama = "Jumat\n";
  } else if (*angka % 7 == 0) {
    nama = "Sabtu\n";
  }
    cout << nama;
}
int main() {
  int input;
  bool validasi = false;

  while(true) {
    cout << "Cari hari dengan angka: ";
    cin >> input;
    
    hari(&input);
    validasi = true;
}
  return 0;
}
