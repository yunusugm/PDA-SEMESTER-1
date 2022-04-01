#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
  string nama;
 
    ofstream objek_mhs;
    objek_mhs.open("nama_mhs.txt");
 
    cout << "Menulis nama mahasiswa" << endl;
 
 for (int i = 0; i < 5; i++) {
   cout << "Masukkan nama : ";
   getline(cin, nama);
   objek_mhs << nama << endl;
 }
    objek_mhs.close();

}

