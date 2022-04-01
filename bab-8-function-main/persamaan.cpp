#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
int main() {
	int a, b, c, diskriminan;
	float x1, x2;
	
for (int i = 0; i < 5; i++)
{
	cout << "Masukan nilai a : ";
	cin >> a;
	cout << "Masukan nilai b : ";
	cin >> b;
	cout << "Masukan nilai c : ";
	cin >> c;

    if (a == 0) {
        cout << "Bukan persamaan kuadrat \n";
    } else {

	diskriminan = (b * b) - (4 * a * c);
	cout << "D = " << diskriminan << endl;

	if (diskriminan > 0){
		x1 = (-b + sqrt(diskriminan)) / (2 * a);
      	x2 = (-b - sqrt(diskriminan)) / (2 * a);	
			cout << setprecision(2) << "Akar x1 = "<< x1 << endl;
		  cout << setprecision(2) << "Akar x2 = "<< x2 << endl;
	} else if (diskriminan == 0){
		x1 = (-b + sqrt(diskriminan)) / (2 * a);
      	x2 = x1;
		  cout << setprecision(2) <<  "Akar x1 = "<< x1 << endl;
		  cout << setprecision(2) << "Akar x2 = "<< x2 << endl;
	} else {
      	cout << "Akar Imajiner" << endl;
	}
  }
 }		
}