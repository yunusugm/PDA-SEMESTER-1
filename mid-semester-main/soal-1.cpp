//! Input nama, nim, tugas(ada 3), uts, uas.
//! Rumus nilai akhir = (NirataTGS + NiUTS + NiUAS )/3
//! A: Nilai >= 85 B: 85 > Nilai >=70 C: 70 > Nilai >= 45  D: 45 > Nilai >= 20  E: Nilai < 20
//! A: Selamat dan Sukses! B: Josss! C: Semangat Lagi! D: Keep Spirit! E: Tenang, Masing Bisa Ujian Perbaikan!
//! Output  Nama, NIM, NILAI DAN STATUS

#include <iostream>

using namespace std;

int main()
{
    string nama, nim, grade, status;
    int tugas[3], uts, uas, rata_tugas, nilai_akhir;

    cout << "Masukkan nama : ";
    getline(cin, nama);
    cout << "Masukkan NIM : ";
    cin >> nim;
    cout << "Masukkan nilai tugas" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Tugas " << i + 1 << " : ";
        cin >> tugas[i];
    }
    cout << "Masukkan nilai uts : ";
    cin >> uts;
    cout << "Masukkan nilai uas : ";
    cin >> uas;
    cout << endl;

    rata_tugas = (tugas[0] + tugas[1] + tugas[2]) / 3;
    nilai_akhir = (rata_tugas + uts + uas) / 3;

    // Cari Grade
    if (nilai_akhir >= 85) {
        grade = "A";
    }
    else if (nilai_akhir < 85 || nilai_akhir >= 70) {
        grade = "B";
    }
    else if (nilai_akhir < 70 || nilai_akhir >= 45) {
        grade = "C";
    }
    else if (nilai_akhir < 45 || nilai_akhir >= 20) {
        grade = "D";
    }
    else {
        grade = "E";
    }
    
    // Cari Status
    if (grade == "A") {
        status = "Selamat dan Sukses!";
    }
    else if (grade == "B") {
        status = "Josss!";
    }
    else if (grade == "C") {
        status = "Semangat Lagi!";
    }
    else if (grade == "D") {
        status = "Keep Spirit!";
    }
    else if (grade == "E") {
        status = "Tenang, Masih Bisa Ujian Perbaikan!";
    }
    
    cout << "========================= \n";
    cout << "Nama Lengkap :" << nama << endl;
    cout << "NIM :" << nim << endl;
    cout << "Rata-rata tugas :" << rata_tugas << endl;
    cout << "Nilai UTS :" << uts << endl;
    cout << "Nilai UAS :" << uas << endl;
    cout << "Nilai Akhir :" << nilai_akhir << endl;
    cout << "Status :" << status << endl;

    return 0;
}

