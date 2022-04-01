#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

// FUNGSI PILIH TOKO
int pilih_toko() {
  int toko_input;
  cout << "1. KFC\n2. MCD\n";
  cout << "Pilih toko (masukan angka) : ";
  cin >> toko_input;
  return toko_input;
}
// FUNGSI PILIH KATEGORI
int pilih_kategori(int toko_pilihan) {
  int kategori_input;
  switch (toko_pilihan) {
  case 1:
  case 2:
    cout << "1. Makanan\n2. Minuman\n";
    cout << "Pilih kategori : ";
    cin >> kategori_input;
    break;
  default:
    cout << "Masukkan input yang sesuai!\n";
    break;
}
  return kategori_input;
}
// FUNGSI PILIH MENU
int pilih_menu(int toko_pilihan, int kategori_pilihan) {
  int menu_input;
  if (toko_pilihan == 1 && kategori_pilihan == 1) {
    cout << "1. French Fries\n2. Fish Fillet Combo\n";
    cout << "Pilih menu : ";
    cin >> menu_input;
  } else if (toko_pilihan == 1 && kategori_pilihan == 2) {
    cout << "1. Hazelnut Coffee Combo\n2. Mocha Float Boba\n";
    cout << "Pilih menu : ";
    cin >> menu_input;
  } else if (toko_pilihan == 2 && kategori_pilihan == 1) {
    cout << "1. Cheese Spicy Chicken Rice\n2. Beef Prosperity Burger\n";
    cout << "Pilih menu : ";
    cin >> menu_input;
  } else if (toko_pilihan == 2 && kategori_pilihan == 2) {
    cout << "1. Iced Coffee Jelly Float\n2. Fruit Tea Blackcurrant\n";
    cout << "Pilih menu : ";
    cin >> menu_input;
  } else {
    cout << "Wrong input!\n";
}
  return menu_input;
}
// FUNGSI PILIH VOUCHER
int pilih_voucher(int harga) {
  int voucher, payment;
  cout << "1. 20% Off\n2. 50% Off\n";
  cout << "Pilih voucher : ";
  cin >> voucher;
  switch (voucher) {
  case 1:
    payment = harga - harga * 0.2;
    break;
  case 2:
    payment = harga - harga * 0.5;
    break;
  default:
    cout << "Wrong input!\n";
    break;
  }
  return voucher;
}
// FUNGSI ONGKOS KIRIM
int ongkos_kirim(int toko_pilihan) {
  int ongkir;
  switch (toko_pilihan) {
  case 1:
    ongkir = 12000;
    break;
  case 2:
    ongkir = 17500;
    break;
  default:
    cout << "Wrong input!\n";
    break;
  }
  return ongkir;
}
// FUNGSI SUMMARY BELANJA
void summary_belanja(int toko_pilihan, int kategori_pilihan, int menu_pilihan, int voucher_pilihan, string alamat) {
  cout << "----- SUMMARY BELANJA -----\n";
  cout << "Pesanan akan dikirimkan menuju " << alamat << ". Mohon ditunggu :)\n";
  if (toko_pilihan == 1 && kategori_pilihan == 1 && menu_pilihan == 1) {
    cout << "Terimakasih telah berbelanja di KFC :)\nBerikut daftar pesanan kamu sayang :*\n";
    cout << "---French Fries\n";
  } else if (toko_pilihan == 1 && kategori_pilihan == 1 && menu_pilihan == 2) {
    cout << "Terimakasih telah berbelanja di KFC :)\nBerikut daftar pesanan kamu sayang :*\n";
    cout << "---Fish Fillet Combo\n";
  }
  switch (voucher_pilihan) {
  case 1:
    cout << "Selamat! Kamu dapat potongan 20%\n";
    break;
  case 2:
    cout << "Selamat! Kamu dapat potongan 50%\n";
    break;
  }
  switch (toko_pilihan) {
  case 1:
    cout << "Ongkos kirim kamu sebesar 12000\n";
    break;
  case 2:
    cout << "SOngkos kirim kamu sebesar 17500\n";
    break;
  }
}



// FUNGSI MAIN EKSEKUSI KODE
int main()
{
  string username, password, address, summary;
  int shop, category, menu, voucher, ongkir;
// LOGIN FLOW
login:
  cout << "Input username : ";
  cin >> username;
  cout << "Input password : ";
  cin >> password;

// CEK PASS KALO SALAH
  if (password != "ujicoba") {
    cout << "Password salah silahkan ulangi \n";
    goto login;
// CEK PASS KALO BENAR LANJUT
  } else {
    // PILIH TOKO
    shop = pilih_toko();
    // PILIH KATEGORI
    category = pilih_kategori(shop);
    // PILIH MENU
    menu = pilih_menu(shop, category);
    // PILIH VOUCHER
    voucher = pilih_voucher(50000); // pakai angka lgsg dulu masih bingung
    // INPUT ALAMAT
    cout << "Masukkan alamat pengiriman makanan : ";
    cin >> address;
    cout << endl << endl;
    // ONGKIR
    ongkir = ongkos_kirim(shop);
    // SUMMARY BELANJA
    summary_belanja(shop, category, menu, voucher, address);
  }
  return 0;
}
