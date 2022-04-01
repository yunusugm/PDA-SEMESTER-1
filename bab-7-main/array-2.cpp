#include <iostream>
using namespace std;

int main() {
	int day, sesi, cari_hari, cari_sesi;
	string hari, schedule[5][4];

	cout << "Masukkan Jadwalmu Dulu \n";
	//? User Input
	for (day = 0; day <= 4; day++) {
		if(day == 0) {
			hari = "Senin";
		} else if(day == 1) {
			hari = "Selasa";
		} else if(day == 2) {
			hari = "Rabu";
		} else if(day == 3) {
			hari = "Kamis";
		} else if(day == 4) {
			hari = "Jumat";
		}
		for(sesi = 0; sesi <= 3; sesi++) {
			cout << "Hari " << hari << " Sesi " << sesi+1 << " = ";
			getline(cin,schedule[day][sesi]);  
		}
	}
	//? Menampilkan jadwal
	cout << "\tSesi 1\tSesi 2\tSesi 3\tSesi 4\n";
	for (day = 0; day <= 4; day++) {
		if(day == 0) {
			hari = "Senin";
		} else if(day == 1) {
			hari = "Selasa";
		} else if(day == 2) {
			hari = "Rabu";
		} else if(day == 3) {
			hari = "Kamis";
		} else if(day == 4) {
			hari = "Jumat";
		}
		cout << hari << "\t";
    	for (sesi = 0; sesi <= 3; sesi++) {
      cout << schedule[day][sesi] << "\t";
    }
    cout << endl;
  }
	//? Cari Jadwal
	cout << "Cari Jadwal Kuliah\n";
	cout << "Masukkan kode hari (0-4) : ";
	cin >> cari_hari;
	cout << "Masukkan kode sesi (0-3) : ";
	cin >> cari_sesi;
	cout << "Mata kuliah kamu yaitu " << schedule[cari_hari][cari_sesi];
	return 0;
}