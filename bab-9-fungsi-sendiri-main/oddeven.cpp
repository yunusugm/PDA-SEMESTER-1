#include <iostream>
using namespace std;

void ganjil_genap(int *angka) {
    int nilai;
    
    nilai = (*angka % 2 == 0) ? 1 : 0;
    cout << nilai;
}

int main() {
    int input;

    cout << "Masukkan sembarang angka = ";
    cin >> input;
    ganjil_genap(&input);
}

// 1a ke gnd 1b ke pin arduino 2a ke 5v
// attachInterrupt
