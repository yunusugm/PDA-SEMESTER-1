#include <iostream>
using namespace std;
int main()
{ float *x1, *x2, y; y = 13.45;
x1 = &y; /* Alamat dari y disalin ke variabel x1 */
x2 = x1; /* Isi variabel x1 disalin ke variabel x2 */
cout<<"Nilai variabel y = "<<y<<" ada di alamat "<< x1;
cout<<"\nNilai variabel y = "<<y<<" ada di alamat "<< x2; }
