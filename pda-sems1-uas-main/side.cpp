#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
// #include <stack>

using namespace std;
  //! MENU
  string kfcDrink[] = {"AquaGalon", "PepsiCan", "Capuccino","IcedLatte","HotChocolate"};
  int kfcDrinkCost[] = {5000, 9000, 16500, 19000, 21000};
  string kfcFood[] = {"Yakiniku", "CrispyStrip", "CreamSoup", "FishFillet", "ChickenCrispy"};
  int kfcFoodCost[] = {20000, 12500, 5000, 10000, 12000};

  string mcdDrink[] = {"AirMineral", "CocaCola", "CokeMcFloat", "IcedCoffee", "OrangeDrink"};
  int mcdDrinkCost[] = {9500, 8000, 11000, 15000, 9500};
  string mcdFood[] = {"McDoubleBurger", "Cheeseburger", "Fish&Fries", "ChickenBurger", "CheeseSteak"};
  int mcdFoodCost[] = {28000, 25000, 35000, 24500, 38500};

  string wendyDrink[] = {"AdesMineral", "CocaCola", "MinuteMaid", "TehBotol", "ChocolateFrosty"};
  int wendyDrinkCost[] = {9000, 13000, 12000, 8000, 16000};
  string wendyFood[] = {"BakedPotato", "ChiliCheese", "GardenSalad", "BeefSpaghetti", "ChickenNugget"};
  int wendyFoodCost[] = {35000, 39000, 19000, 32000, 17000};

  string hokbenDrink[] = {"BuavitaOrange", "OchaLychee", "ColdOcha", "AquaPet", "JusJeruk"};
  int hokbenDrinkCost[] = {10000, 18000, 6500, 9000, 18000};
  string hokbenFood[] = {"ChickenKaraage", "ChickenKatsu", "EbiFurai", "ShrimpRoll", "ShiratakiSoup"};
  int hokbenFoodCost[] = {31500, 29000, 36000, 28000, 16000};

string pilihToko() {
  string tokoPilihan;
  string toko[] = {"KFC", "McD", "Wendys", "Hokben"};

  cout << "Pilih Toko Yang Ingin Dibeli\n";
  for (int i = 0; i < sizeof(toko)/sizeof(toko[0]); i++) {
    cout << i + 1 << "." << " " << toko[i] << endl;
  }
  cout << "Masukkan nama toko pilihan : ";
  getline(cin, tokoPilihan);

  return tokoPilihan;
}

int pilihKategori() {
  int kategoriPilihan;

  cout << "1. Makanan\n2. Minuman\n";
  cout << "Pilih kategori : ";
  cin >> kategoriPilihan;

  return kategoriPilihan;
}

string pilihMenu(string tokoPilihan, int kategoriPilihan) {
  string menuPilihan;

  if (tokoPilihan == "KFC" && kategoriPilihan == 1) {
    cout << "Nama Makanan\t\tHarga\n";
    cout << "-----------------------------\n";
    for (int i = 0; i < sizeof(kfcFood)/sizeof(kfcFood[0]); i++) {
    cout << kfcFood[i] << "\t\t" << kfcFoodCost[i] << endl;
  } 
} else if (tokoPilihan == "KFC" && kategoriPilihan == 2) {
    cout << "Nama Minuman\t\tHarga\n";
    cout << "-----------------------------\n";
    for (int i = 0; i < sizeof(kfcDrink)/sizeof(kfcDrink[0]); i++) {
    cout << kfcDrink[i] << "\t\t" << kfcDrinkCost[i] << endl;
  }
}

  if (tokoPilihan == "McD" && kategoriPilihan == 1) {
    cout << "Nama Makanan\t\tHarga\n";
    cout << "-----------------------------\n";
    for (int i = 0; i < sizeof(mcdFood)/sizeof(mcdFood[0]); i++) {
    cout << mcdFood[i] << "\t\t" << mcdFoodCost[i] << endl;
  } 
} else if (tokoPilihan == "McD" && kategoriPilihan == 2) {
    cout << "Nama Minuman\t\tHarga\n";
    cout << "-----------------------------\n";
    for (int i = 0; i < sizeof(mcdDrink)/sizeof(mcdDrink[0]); i++) {
    cout << mcdDrink[i] << "\t\t" << mcdDrinkCost[i] << endl;
  }
}

  if (tokoPilihan == "Wendys" && kategoriPilihan == 1) {
    cout << "Nama Makanan\t\tHarga\n";
    cout << "-----------------------------\n";
    for (int i = 0; i < sizeof(wendyFood)/sizeof(wendyFood[0]); i++) {
    cout << wendyFood[i] << "\t\t" << wendyFoodCost[i] << endl;
  } 
} else if (tokoPilihan == "Wendys" && kategoriPilihan == 2) {
    cout << "Nama Minuman\t\tHarga\n";
    cout << "-----------------------------\n";
    for (int i = 0; i < sizeof(wendyDrink)/sizeof(wendyDrink[0]); i++) {
    cout << wendyDrink[i] << "\t\t" << wendyDrinkCost[i] << endl;
  }
}

  if (tokoPilihan == "Hokben" && kategoriPilihan == 1) {
    cout << "Nama Makanan\t\tHarga\n";
    cout << "-----------------------------\n";
    for (int i = 0; i < sizeof(hokbenFood)/sizeof(hokbenFood[0]); i++) {
    cout << hokbenFood[i] << "\t\t" << hokbenFoodCost[i] << endl;
  } 
} else if (tokoPilihan == "Hokben" && kategoriPilihan == 2) {
    cout << "Nama Minuman\t\tHarga\n";
    cout << "-----------------------------\n";
    for (int i = 0; i < sizeof(hokbenDrink)/sizeof(hokbenDrink[0]); i++) {
    cout << hokbenDrink[i] << "\t\t" << hokbenDrinkCost[i] << endl;
  }
}

  cout << "Pilih menu yang diinginkan (Copas saja namanya): ";
  getline(cin, menuPilihan);
    
  return menuPilihan;
}

int hargaMenu(string menuPilihan) {
  int harga;

  for (int i = 0; i < 5; i++) {
    if (menuPilihan == kfcDrink[i]) {
      harga = kfcDrinkCost[i];
    }
    if (menuPilihan == kfcFood[i]) {
      harga = kfcFoodCost[i];
    }
    if (menuPilihan == mcdDrink[i]) {
      harga = mcdDrinkCost[i];
    }
    if (menuPilihan == mcdFood[i]) {
      harga = mcdFoodCost[i];
    }
    if (menuPilihan == wendyDrink[i]) {
      harga = wendyDrinkCost[i];
    }
    if (menuPilihan == wendyFood[i]) {
      harga = wendyFoodCost[i];
    }
    if (menuPilihan == hokbenDrink[i]) {
      harga = hokbenDrinkCost[i];
    }
    if (menuPilihan == hokbenFood[i]) {
      harga = hokbenFoodCost[i];
    }
  }

  return harga;
}


int main() {
  string username, password, shop, menu, address, summary;
  string order = "y";
  int category, price, total, voucher, ongkir;
// LOGIN FLOW
login:
  cout << "Input username : ";
  getline(cin, username);
  cout << "Input password : ";
  getline(cin, password);

// CEK PASS KALO SALAH
  if (password != "admin") {
    cout << "Password salah silahkan ulangi \n";
    goto login;
// CEK PASS KALO BENAR LANJUT
  } else {
    // PILIH TOKO
    shop = pilihToko();
    // while (order == "y" || order == "Y") {
    // PILIH KATEGORI
    category = pilihKategori();
    // PILIH MENU
    menu = pilihMenu(shop, category);

    price = hargaMenu(menu);
    cout << price << endl;

    total += price;

    cout << "order lagi? : ";
    getline(cin, order);
    // }
  }
}

