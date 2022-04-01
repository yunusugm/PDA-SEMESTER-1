#include <conio.h>
#include <iostream>

using namespace std;

int main() {
    string user, pilihan, change, deletes, add;
    string food[5] = {"Ayam", "Bebek", "Kadal", "Jangkrik", "Sate"}, drink[5] = {"Teh", "Jeruk", "Kopi", "Jahe", "Susu"};
    int i, navigation;
    int length_food = sizeof(food) / sizeof(food[0]), length_drink = sizeof(drink) / sizeof(drink[0]);
repeat:
    cout << "Masukkan username : ";
    cin >> user;

    if (user != "admin") {
        cout << "Maaf anda tidak dapat mengakses menu \n";
        goto repeat;
    }
    else {
        cout << "Makanan : ";
        for (i = 0; i < length_food; i++) {
            cout << food[i] << "  ";
        }
        cout << endl;
        cout << "Minuman : ";
        for (i = 0; i < length_drink; i++) {
            cout << drink[i] << "  ";
        }
        cout << endl;
        cout << "Navigasi Menu (Masukkan Angka)\n1. Ganti Menu\t2. Hapus Menu\t3. Tambah Menu\n";
        cin >> navigation;
        if (navigation == 1) {
           cout << "Ganti menu makanan atau minuman? : ";
           cin >> pilihan;
           if(pilihan == "makanan") {
               cout << "Masukkan nama makanan yang akan diubah : ";
               cin >> change;
               for(i = 0; i < length_food; i++) {
                   if(food[i] == change) {
                       cout << "Masukkan nama makanan baru : ";
                       cin >> food[i]; }
                    }
                 }
           else if(pilihan == "minuman") {
               cout << "Masukkan nama minuman yang akan diubah : ";
               cin >> change;
               for(i = 0; i < length_drink; i++) {
                   if(drink[i] == change) {
                       cout << "Masukkan nama minuman baru : ";
                       cin >> drink[i]; }
                   }
               }
           }
        else if (navigation == 2) {
            cout << "Hapus menu makanan atau minuman? : ";
            cin >> pilihan;
            if(pilihan == "makanan") {
                cout << "Masukkan nama makanan yang mau dihapus : ";
                cin >> deletes;
                for(i = 0; i < length_food; i++){
                    if(food[i] == deletes) {
                        cout << "Menu " << deletes << " telah dihapus \n";
                        food[i] = " ";
                    }
                }
            }
            else if(pilihan == "minuman") {
                cout << "Masukkan nama minuman yang mau dihapus : ";
                cin >> deletes;
                for(i = 0; i < length_drink; i++){
                    if(drink[i] == deletes) {
                        cout << "Menu " << deletes << " telah dihapus";
                        drink[i] = " ";
 }
            }
        } 
     }
        else if (navigation == 3) {
            cout << "Masukkan nama makanan : ";
            cin >> add;
            food[length_food - 1] = add;
        }
        else {
            cout << "Masukkan angka yang sesuai";
        }
        cout << "Menu Update \n";
        cout << "Makanan : ";
        for (i = 0; i < length_food; i++) {
            cout << food[i] << "  ";
        }
        cout << endl;
        cout << "Minuman : ";
        for (i = 0; i < length_drink; i++) {
            cout << drink[i] << "  ";
        }
         return 0;
    }
} 


