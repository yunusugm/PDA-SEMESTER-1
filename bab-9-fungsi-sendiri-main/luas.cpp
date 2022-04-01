#include <iostream>
#include <cmath>
using namespace std;

void luas_segitiga(int *alas, int *tinggi) {
    int luas;
    luas = 0.5 * *alas * *tinggi;
    cout << "Luas segitiga = " << luas << endl;
}
void luas_persegi(int *sisi) {
    int luas;
    luas = pow(*sisi, 2);
    cout << "Luas persegi = " << luas;
}
int main() {
    int alas, tinggi, sisi;

    cout << "Masukkan nilai alas : ";
    cin >> alas;
    cout << "Masukkan nilai tinggi : ";
    cin >> tinggi;
    luas_segitiga(&alas, &tinggi);

    cout << "Masukkan sisi : ";
    cin >> sisi;
    luas_persegi(&sisi);
    return 0;
}