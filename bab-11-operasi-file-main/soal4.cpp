#include <iostream>
#include <fstream>

using namespace std;
void list_barang ();
int file,category;
int jumlah_berat = 1, jumlah_sedang = 1, jumlah_ringan = 1;
struct inputlist 
{char nama_barang[1000]; int jumlah_barang;} list;
int main() 
{
ofstream berat("berat.txt"), sedang("sedang.txt"), ringan("ringan.txt");
char pilihan = 'y';
cout << "Silahkan masukkan data berikut : \n";
cout << "Kategori barang \n";
cout << "1. Berat\n2. Sedang\n3. Ringan\n";
while (pilihan == 'Y' || pilihan == 'y') 	{
		if (jumlah_berat == 6 || jumlah_sedang == 6 || jumlah_ringan == 6)	{
			cout << "Mencapai batas maksimum barang!"; 
			break;
			}
		cout << "Nama barang = "; cin >> list.nama_barang;
		cout << "Jumlah barang = "; cin >> list.jumlah_barang;
		cout << "Masukkan kode jenis barang dengan angka 1-3 : "; cin >> category;
		switch (category)	{
			case 1 : berat.write((char*)&list, sizeof(list));
				jumlah_berat++;
				break;
			case 2 : sedang.write((char*)&list, sizeof(list));
				jumlah_sedang++;
				break;
			case 3 : ringan.write((char*)&list, sizeof(list));
				jumlah_ringan++;
				break;	
			default : cout << "Masukan tidak dikenali!";	
				break;}
		cout << "Ada tambahan? [y/t] = "; cin >> pilihan; }
berat.close(); sedang.close(); ringan.close();
if (pilihan == 'T' || pilihan == 't')	{
		ifstream berat ("berat.txt", ios::in), sedang ("sedang.txt", ios::in); 
		ifstream ringan ("ringan.txt", ios::in);
		cout << "Diarahkan untuk membaca file ";
		cout << "Pilihan file	: \n";
		cout << "1. File jenis barang berat\n2. File jenis barang sedang\n";
		cout << "3. File jenis barang ringan\n";
		cout << "Silahkan masukkan dengan kode angka 1-3 : "; cin >> file;
		cout << endl;
		cout << "No." << "\tNama Barang" << "\t"<< "Jumlah Barang" <<endl;
		cout << "=======================================" << endl;
		switch (file)	{
			case 1 : berat.read((char *)&list,sizeof(list));
					while (!berat.eof()) 	{
						list_barang();
						berat.read((char*)&list, sizeof(list)); }
					cout << endl;
					berat.close();
					break;
			case 2 : sedang.read((char *)&list,sizeof(list));
					while (!sedang.eof()) 	{
						list_barang();
						sedang.read((char*)&list, sizeof(list));}
					cout << endl;
					sedang.close();
					break;
			case 3 : ringan.read((char *)&list,sizeof(list));
					while (!ringan.eof())	{ 
						list_barang();
						ringan.read((char*)&list, sizeof(list)); }
					cout << endl;
					ringan.close();
					break;		
			default : cout << "Masukan tidak dikenali!";
					break;
		}
	}
}
int no = 0;
void list_barang() { 
no++;
cout << no <<"\t"<< list.nama_barang << "\t\t"<< list.jumlah_barang << endl;}