#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int code, banyak, status, porsi_pay, diskon, harga, pajak, total;
    string porsi, nama;
    
    printf("Kode \t Makanan \t Kecil \t Sedang\t Besar \n");
    printf("1 \t Mie Goreng \t 15000 \t 20000 \t 25000 \n");
    printf("2 \t Mie Rebus \t 15000 \t 20000 \t 25000 \n");
    printf("3 \t Nasi Goreng \t 18000 \t 23000 \t 26000 \n");
    printf("4 \t Capjay \t 20000 \t 25000 \t 30000 \n");
    
    cout << "Masukkan kode makanan (1-4) : ";
    cin >> code;
    cout << "Masukkan porsi (Kecil/Sedang/Besar) : ";
    cin >> porsi;
    cout << "Masukkan jumlah pesanan : ";
    cin >> banyak;
    cout << "Ingin makan dimana \n 1. Dine In \n 2. Take Away \n (1/2) = ";
    cin >> status;
    cout << endl;
    
    if (code == 1) {
        nama = "Mie Goreng";
        if (porsi == "Kecil" || porsi == "kecil") {
            porsi_pay = 15000;
            harga = banyak * porsi_pay;
        }
        else if (porsi == "Sedang" || porsi == "sedang") {
            porsi_pay = 20000;
            harga = banyak * porsi_pay;
        }
        else if (porsi == "Besar" || porsi == "besar") {
            porsi_pay = 25000;
            diskon = porsi_pay * 0.05;
            harga = banyak * (porsi_pay - diskon);
        }  
    }  else if (code == 2) {
        nama = "Mie Rebus";
        if (porsi == "Kecil" || porsi == "kecil") {
            porsi_pay = 15000;
            harga = banyak * porsi_pay;
        }
        else if (porsi == "Sedang" || porsi == "sedang") {
            porsi_pay = 20000;
            harga = banyak * porsi_pay;
        }
        else if (porsi == "Besar" || porsi == "besar") {
            porsi_pay = 25000;
            harga = banyak * porsi_pay;
        }  
    }  else if (code == 3) {
        nama = "Nasi Goreng";
        if (porsi == "Kecil" || porsi == "kecil") {
            porsi_pay = 18000;
            harga = banyak * porsi_pay;
        }
        else if (porsi == "Sedang" || porsi == "sedang") {
            porsi_pay = 23000;
            diskon = porsi_pay * 0.05;
            harga = banyak * (porsi_pay - diskon);
        }
        else if (porsi == "Besar" || porsi == "besar") {
            porsi_pay = 26000;
            diskon = porsi_pay * 0.05;
            harga = banyak * (porsi_pay - diskon);
        }  
    }  else if (code == 4) {
        nama = "Capjay";
        if (porsi == "Kecil" || porsi == "kecil") {
            porsi_pay = 20000;
            harga = banyak * porsi_pay;
        }
        else if (porsi == "Sedang" || porsi == "sedang") {
            porsi_pay = 25000;
            harga = banyak * porsi_pay;
        }
        else if (porsi == "Besar" || porsi == "besar") {
            porsi_pay = 30000;
            harga = banyak * porsi_pay;
        }  
    } else {
        cout << "Masukkan kode yang sesuai! \n";
    }
    if (status == 1) {
        pajak = harga * 0.1;
        total = harga + pajak;
    } else {
        total = harga;
    }
    
    cout << "Data Pesanan \n";
    cout << "================ \n";
    cout << "Pilihan menu  = " << nama << endl;
    cout << "Jumlah diskon = " << diskon << endl;
    cout << "Jumlah pajak  = " << pajak << endl;
    cout << "Total         = " << total;
    return 0;
}
