#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
	int  B[10], jumlah, ganti, hapus, cari, ketemu = 0;
    string user;

ulangi: //Label untuk goto statement

	// user memasukkan jumlah data yang akan dimasukkan
	cout << "Masukkan jumlah data : "; 
	cin >> user;

	// jumlah data dibatasi 10 data, dari B[0] sampai B[9]
	if (user != "admin" )
	{
		//Jika data melebihi dari batas yang ditentukan maka tampilkan pesan
		cout << "\nMaaf, max jumlah data adalah 10!\n\n";

		//Kemudian meminta user mengulangi memasukkan jumlah data
		goto ulangi;
	} 
    else {
        cout << "ok";
    }
}