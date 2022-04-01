#include <iostream>
#include <conio.h>
#include <algorithm>
#include <cstdlib>
#include <cstring>


using namespace std;

int main() {
    string username, password, is_palindrome = "";
    int cek;
    bool validasi = false;

    while (true)
    {
repeat:
    cout << "Input username : ";
    cin >> username;

    if (username.length() < 6)
    {
        cout << "Username minimal 6 karakter \n";
        goto repeat;
    } else {
input:
        cout << "Input password : ";
        cin >> password;
    
        for(int i = password.length() - 1; i >= 0; i--) {
        //balik huruf
        is_palindrome = is_palindrome + password[i];  
     }
        if (password == username) {
            cout << "Password tidak boleh sama dengan username \n";
            goto input;
        } else if (password.length() < 6 || password.length() > 8) {
            cout << "Jumlah karakter tidak memenuhi \n";
            goto input;
        } else if (password[0] != toupper(password[0])) {
            cout << "Huruf pertama harus kapital \n";
            goto input; 
        } else if (password == is_palindrome) {
            cout << "Password merupakan palindrome";
        } 
        cek = atoi(password.c_str());
        if (cek <= 0 ) {
            cout << "Minimal ada 1 angka \n";
            goto input;
        }
        else {
            cout << " Layak \n";
            validasi = true;
        }  
      } 
    }
    return 0;
}