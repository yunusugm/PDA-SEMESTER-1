#include <iostream> 
using namespace std; 

int main()  { 
    int kode;
    string text;
    char old [50];
    char news [50];

    cout << "Ini nama file lama : ";
    cin >> old;
    cout << "Ini nama file baru : ";
    cin >> news;

    kode = rename(old, news);
    text = (kode == 0) ? "Nama File Terganti" : "Gagal Ganti Nama File";
    cout << text;
}