#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
using namespace std;

struct datamhs {
  char nim[15], nama[25];
  float ipk;
} mhs;

int main()
{
  ofstream file_mhs("datamhs.dat", ios::app);
  if (!file_mhs) {
    cerr << "File could not be opened" << endl;
    exit(1);
  }
  char jwb = 'y';
  cout << "Input Data Mahasiswa" << endl;
  while (jwb == 'Y' || jwb == 'y') {
    cout << "NIM = ";
    cin >> mhs.nim;
    cout << "NAMA = ";
    cin >> mhs.nama;
    cout << "IPK = ";
    cin >> mhs.ipk;
    file_mhs.write((char*)&mhs, sizeof(mhs));
    cout << "Ada Data Lagi [Y/T] = ";
    cin >> jwb;
  }
  file_mhs.close();
}

