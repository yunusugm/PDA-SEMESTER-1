#include <iostream>
#include <fstream>

using namespace std;

int main() {
  cout << "Mulai rekaman \n";
  ofstream data ("cekdata.txt");

  for (int i = 0; i < 9; i++) {
    data << "Cek data file \n";
  }

  cout << "Selesai rekaman\n";
  data.close();
}