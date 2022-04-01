#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    float alas, tinggi, miring, luas, derajat, x, y, z, dx, dy, rz, dz = 90;
    const float phi = 3.14;

for (int i = 0; i < 5; i++)
{
    cout << "Masukkan tinggi segitiga : ";
    cin >> tinggi;
    cout << "Masukkan alas segitiga : ";
    cin >> alas;

    miring = sqrt((alas * alas) + (tinggi * tinggi));
    luas = alas * tinggi / 2;

    derajat = dz * phi / 180;
    rz = cos(derajat); //ubah sudut z derajat -> radian
    z = acos(rz);

    x = acos(alas / miring); //sudut x dalam radian
    dx = x / phi * 180; //ubah sudut x radian -> derajat

    y = z - x; //sudut y dalam radian
    dy = y / phi * 180; //ubah sudut y radian -> derajat

    cout << "Sisi miringnya yaitu : " << miring << endl;
    cout << "Luas segitiga yaitu : " << luas << endl;
    cout << "Sudut z segitiga yaitu : " << dz << " derajat \n";
    cout << setprecision(3) << "Sudut x segitiga yaitu : " << dx << " derajat \n";
    cout << setprecision(3) << "Sudut y segitiga yaitu : " << dy << " derajat \n"; 
 }    
}