#include <iostream>
#include <cmath>
using namespace std;

const float phi = 3.14;
void volume_kubus(int *sisi) {
    float volume;
    volume = pow(*sisi, 3);
    cout << "Volume kubus = " << volume << endl;
}
void volume_balok(int *panjang, int *lebar, int *tinggi) {
    float volume;
    volume = *panjang * *lebar * *tinggi;
    cout << "Volume balok = " << volume << endl;
}
void volume_tabung(int *radius, int *tinggi) {
    float volume;
    volume = phi * pow(*radius, 2) * *tinggi;
    cout << "Volume tabung = " << volume << endl;
}
void volume_kerucut(int *radius, int *tinggi) {
    float volume;
    volume = (phi * pow(*radius, 2) * *tinggi) / 3;
    cout << "Volume kerucut = " << volume << endl;
}

int main() {
    int sisi, panjang, lebar, radius_tabung, radius_kerucut;
    int tinggi_balok, tinggi_tabung, tinggi_kerucut;

    // HITUNG KUBUS
    cout << "Masukkan sisi kubus = ";
    cin >> sisi;
    volume_kubus(&sisi);

    // HITUNG BALOK
    cout << "Masukkan panjang balok = ";
    cin >> panjang;
    cout << "Masukkan lebar balok = ";
    cin >> lebar;
    cout << "Masukkan tinggi balok = ";
    cin >> tinggi_balok;
    volume_balok(&panjang, &lebar, &tinggi_balok);

    // HITUNG TABUNG
    cout << "Masukkan radius tabung = ";
    cin >> radius_tabung;
    cout << "Masukkan tinggi tabung = ";
    cin >> tinggi_tabung;
    volume_tabung(&radius_tabung, &tinggi_tabung);

    // HITUNG KERUCUT
    cout << "Masukkan radius kerucut = ";
    cin >> radius_kerucut;
    cout << "Masukkan tinggi kerucut = ";
    cin >> tinggi_kerucut;
    volume_kerucut(&radius_kerucut, &tinggi_kerucut);
}