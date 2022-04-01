#include <iostream>

using namespace std;

int main()
{
  int a = 10;
  int *pointer_a = &a;
  cout << "Nilai = " << a << endl;
  cout << "Alamat = " << pointer_a << endl;
  cout << "Ambil nilai = " << *pointer_a << endl;
  return 0;
}

// int tambah(void) {

// }

// int main(void) {
//   int hasil, x;
//   cin >> x;
//   hasil = x + x;
//   cout << hasil;
// }
