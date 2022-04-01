#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  string nik, name, education, gender, religion, bornDate;
  long fullPay, family, position, transport, basicPay;

  cout << "Biodata Pribadi \n";
  cout << "================\n";
  cout << "NIK : ";
  getline(cin, nik);
  cout << "Nama Lengkap : ";
  getline(cin, name);
  cout << "Tanggal Lahir: ";
  getline(cin, bornDate);
  cout << "Pendidikan : ";
  getline(cin, education);
  cout << "Agama : ";
  getline(cin, religion);
  cout << "Jenis Kelamin : ";
  getline(cin, gender);

  cout << endl;

  cout << "Jumlah Gaji \n";
  cout << "=========== \n";
  printf("Gaji Pokok : ");
  scanf("%ld", &basicPay);
  printf("Tunjangan Keluarga : ");
  scanf("%ld", &family);
  printf("Tunjangan Jabatan : ");
  scanf("%ld", &position);
  printf("Tunjangan Transportasi : ");
  scanf("%ld", &transport);
  
  fullPay = basicPay + family + position + transport;
  printf("Total Gaji = Rp%ld", fullPay);
  return 0;
}