#include <iostream>
using namespace std;

int main() {
    int i, input;

    cout << "Masukkan angka agak besar : ";
    cin >> input;

    for (i = input; i >= 0; i--) {
        if (i % 2 == 1) {
            cout << i << endl;
        }
    }
    return 0;   
}