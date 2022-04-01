#include <iostream>
using namespace std;

int main() {
    int i, j, input;
    string space, ex = "*";

    cout << "Masukkan angka : ";
    cin >> input;
    space = "";
    
    for (i = input; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
           space += ex;
        }
        space += "\n";
    }
    cout << space;
    return 0;
}