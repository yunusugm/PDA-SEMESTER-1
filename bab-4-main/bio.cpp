#include <iostream>
using namespace std;

int main()
{
    /* code */
    string name, place, bornDate, address, contact, religion, gender;

    cout << "Biodata Pribadi \n";
    cout << "======================= \n";

    cout << "Nama Lengkap : ";
    getline(cin, name);
    cout << "Tempat Lahir : ";
    getline(cin, place);
    cout << "Tanggal Lahir : ";
    getline(cin, bornDate);
    cout << "Alamat : ";
    getline(cin, address);
    cout << "Nomor Telepon: ";
    getline(cin, contact);
    cout << "Agama : ";
    getline(cin, religion);
    cout << "Jenis Kelamin : ";
    getline(cin, gender);

    return 0;
}
