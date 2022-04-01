#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

  int menuId[] = {1, 2, 3, 4 ,5};
  //! MENU
  string kfcDrink[] = {"Aqua Galon", "Pepsi Can", "Capuccino","Iced Latte","Hot Chocolate"};
  int kfcDrinkCost[] = {5000, 9000, 16500, 19000, 21000};
  string kfcFood[] = {"Yakiniku", "Crispy Strip", "Cream Soup", "Fish Fillet", "Chicken Crispy"};
  int kfcFoodCost[] = {20000, 12500, 5000, 10000, 12000};

  string mcdDrink[] = {"Air Mineral", "Coca Cola", "Coke McFloat", "Iced Coffee", "Orange Drink"};
  int mcdDrinkCost[] = {9500, 8000, 11000, 15000, 9500};
  string mcdFood[] = {"McDouble Burger", "Cheeseburger", "Fish & Fries", "Chicken Burger", "Cheese Steak"};
  int mcdFoodCost[] = {28000, 25000, 35000, 24500, 38500};

  string wendyDrink[] = {"Ades Mineral", "Coca Cola", "Minute Maid", "Teh Botol", "Chocolate Ice"};
  int wendyDrinkCost[] = {9000, 13000, 12000, 8000, 16000};
  string wendyFood[] = {"Baked Potato", "Chili Cheese", "Garden Salad", "Beef Spaghetti", "Chicken Nugget"};
  int wendyFoodCost[] = {35000, 39000, 19000, 32000, 17000};

  string hokbenDrink[] = {"Buavita Orange", "Ocha Lychee", "Cold Ocha", "Aqua Pet", "Jus Jeruk"};
  int hokbenDrinkCost[] = {10000, 18000, 6500, 9000, 18000};
  string hokbenFood[] = {"Chicken Karaage", "Chicken Katsu", "Ebi Furai", "Shrimp Roll", "Shirataki Soup"};
  int hokbenFoodCost[] = {31500, 29000, 36000, 28000, 16000};

  void summaryBelanja(string toko, string nama, string alamat, int total, int totalBayar, int diskon) {
  cout << "=====================INVOICE==================== \n";
  cout << "================================================\n";
  cout << "Hai " << nama << " terimakasih telah berbelanja di " << toko << endl;
  cout << "Pesanan akan dikirim menuju " << alamat << endl;
  cout << "Ongkos kirim ke rumah kamu adalah Rp10000\n";
  cout << "Biaya total : Rp" << total << endl;
  cout << "Diskon : Rp" << diskon << endl;
  cout << "Harga yang dibayarkan : Rp" << totalBayar + 10000;
}

int main()
{
  // ! DEKLARASI VARIABEL
  string username, password, tokoPilihan, namaPenerima, alamat;
  string toko[] = {"KFC", "McD", "Wendys", "Hokben"};
  string order = "y";
  string again = "y";
  int kategoriPilihan, menuPilihan, harga, total, voucher, payment, discount;
  
  // ! LOGIN FLOW
login:
  cout << "Input username : ";
  cin >> username;
  cout << "Input password : ";
  cin >> password;
  cout << endl;

  // ? CEK PASS KALO SALAH
  if (password != "admin") {
    cout << "Password salah silahkan ulangi \n";
    goto login;
  // ? PASS BENAR LANJUT
  } else {
  // ! ORDER FLOW
    while (again == "y" || again == "Y") {
  // ? RESET NILAI TOTAL HARGA
  total = 0;
  // todo PILIH TOKO
  cout << "Pilih Toko Yang Ingin Dibeli\n";
  for (int i = 0; i < sizeof(toko)/sizeof(toko[0]); i++) {
    cout << i + 1 << "." << " " << toko[i] << endl;
      }
    cout << "Masukkan nama toko pilihan : ";
    cin >> tokoPilihan;

    order = "y";

  // todo PILIH KATEGORI
    while (order == "y" || order == "Y") {
      cout << "1. Makanan\n2. Minuman\n";
      cout << "Pilih kategori : ";
      cin >> kategoriPilihan;
      cout << endl;

  // todo PILIH MENU
    if (tokoPilihan == "KFC" && kategoriPilihan == 1) {
    cout << "Nama Makanan\t\tHarga\t\tKode Menu\n";
    cout << "----------------------------------------------------\n";
    for (int i = 0; i < sizeof(kfcFood)/sizeof(kfcFood[0]); i++) {
    cout << kfcFood[i] << "\t\t" << kfcFoodCost[i] << "\t\t" << menuId[i] << endl;
  } 
} else if (tokoPilihan == "KFC" && kategoriPilihan == 2) {
    cout << "Nama Minuman\t\tHarga\t\tKode Menu\n";
    cout << "----------------------------------------------------\n";
    for (int i = 0; i < sizeof(kfcDrink)/sizeof(kfcDrink[0]); i++) {
    cout << kfcDrink[i] << "\t\t" << kfcDrinkCost[i] << "\t\t" << menuId[i] << endl;
  }
}

  if (tokoPilihan == "McD" && kategoriPilihan == 1) {
    cout << "Nama Makanan\t\tHarga\t\tKode Menu\n";
    cout << "----------------------------------------------------\n";
    for (int i = 0; i < sizeof(mcdFood)/sizeof(mcdFood[0]); i++) {
    cout << mcdFood[i] << "\t\t" << mcdFoodCost[i] << "\t\t" << menuId[i] << endl;
  } 
} else if (tokoPilihan == "McD" && kategoriPilihan == 2) {
    cout << "Nama Minuman\t\tHarga\t\tKode Menu\n";
    cout << "----------------------------------------------------\n";
    for (int i = 0; i < sizeof(mcdDrink)/sizeof(mcdDrink[0]); i++) {
    cout << mcdDrink[i] << "\t\t" << mcdDrinkCost[i] << "\t\t" << menuId[i] << endl;
  }
}

  if (tokoPilihan == "Wendys" && kategoriPilihan == 1) {
    cout << "Nama Makanan\t\tHarga\t\tKode Menu\n";
    cout << "----------------------------------------------------\n";
    for (int i = 0; i < sizeof(wendyFood)/sizeof(wendyFood[0]); i++) {
    cout << wendyFood[i] << "\t\t" << wendyFoodCost[i] << "\t\t" << menuId[i] << endl;
  } 
} else if (tokoPilihan == "Wendys" && kategoriPilihan == 2) {
    cout << "Nama Minuman\t\tHarga\t\tKode Menu\n";
    cout << "----------------------------------------------------\n";
    for (int i = 0; i < sizeof(wendyDrink)/sizeof(wendyDrink[0]); i++) {
    cout << wendyDrink[i] << "\t\t" << wendyDrinkCost[i] << "\t\t" << menuId[i] << endl;
  }
}

  if (tokoPilihan == "Hokben" && kategoriPilihan == 1) {
    cout << "Nama Makanan\t\tHarga\t\tKode Menu\n";
    cout << "----------------------------------------------------\n";
    for (int i = 0; i < sizeof(hokbenFood)/sizeof(hokbenFood[0]); i++) {
    cout << hokbenFood[i] << "\t\t" << hokbenFoodCost[i] << "\t\t" << menuId[i] << endl;
  } 
} else if (tokoPilihan == "Hokben" && kategoriPilihan == 2) {
    cout << "Nama Minuman\t\tHarga\t\tKode Menu\n";
    cout << "----------------------------------------------------\n";
    for (int i = 0; i < sizeof(hokbenDrink)/sizeof(hokbenDrink[0]); i++) {
    cout << hokbenDrink[i] << "\t\t" << hokbenDrinkCost[i] << "\t\t" << menuId[i] << endl;
  }
}

  cout << "Pilih menu yang diinginkan(1 - 5) : ";
  cin >> menuPilihan;

  // ? PERHITUNGAN HARGA TOTAL
  harga = 0;
  for (int i = 0; i < sizeof(menuId)/sizeof(menuId[0]); i++) {
    if (tokoPilihan == "KFC" && kategoriPilihan == 1) {
        if (menuPilihan == menuId[i]) {
            harga += kfcFoodCost[i];
        }
    } else if (tokoPilihan == "KFC" && kategoriPilihan == 2) {
        if (menuPilihan == menuId[i]) {
            harga += kfcDrinkCost[i];
        }
    }
    if (tokoPilihan == "McD" && kategoriPilihan == 1) {
        if (menuPilihan == menuId[i]) {
            harga += mcdFoodCost[i];
        }
    } else if (tokoPilihan == "McD" && kategoriPilihan == 2) {
        if (menuPilihan == menuId[i]) {
            harga += mcdDrinkCost[i];
        }
    }
    if (tokoPilihan == "Wendys" && kategoriPilihan == 1) {
        if (menuPilihan == menuId[i]) {
            harga += wendyFoodCost[i];
        }
    } else if (tokoPilihan == "Wendys" && kategoriPilihan == 2) {
        if (menuPilihan == menuId[i]) {
            harga += wendyDrinkCost[i];
        }
    }
    if (tokoPilihan == "Hokben" && kategoriPilihan == 1) {
        if (menuPilihan == menuId[i]) {
            harga += hokbenFoodCost[i];
        }
    } else if (tokoPilihan == "Hokben" && kategoriPilihan == 2) {
        if (menuPilihan == menuId[i]) {
            harga += hokbenDrinkCost[i];
        }
    }
}
    total += harga;
  cout << "Total Biaya Sementara : " << total << endl;

  // ? CEK USER MAU TAMBAH PESENAN LAGI?
  cout << "Tambah lagi ? (y / n) : ";
  cin >> order;
      }

  cout << endl;
  // ! CHECKOUT FLOW
  cout << "Pilihan Voucher\n";
  cout << "1. 20% Off\n2. 30% Off\n";
  cout << "Pilih voucher : ";
  cin >> voucher;
  // ? PERHITUNGAN DISKON
  if (voucher == 1) {
    payment = total - total * 0.2;
    discount = total * 0.2;
  } else if (voucher == 2) {
    payment = total - total * 0.3;
    discount = total * 0.3;
  } else {
    payment = total;
    discount = total * 0;
  }
  cout << endl;

  // todo INPUT NAMA ALAMAT
  cout << "Masukkan nama penerima(Nama Panggilan) : ";
  cin >> namaPenerima;
  cout << "Masukkan daerah pengiriman : ";
  cin >> alamat;
  cout << endl;

  // ? PRINT SUMMARY
  summaryBelanja(tokoPilihan, namaPenerima, alamat, total, payment, discount);
  cout << endl;
  // ? CEK USER MAU BELANJA LAGI?
  cout << "Ingin belanja lagi? (y / n) : ";
  cin >> again;
  cout << endl;
    }
  cout << "Terimakasih kepada " << namaPenerima << " karena telah menggunakan program ini, Have a nice day 🥰";
  }
}
