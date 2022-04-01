#include <iostream>
using namespace std;

int main() {
    int i, number, biggest;

    for (i = 1; i <= 5; i++) {
        cout << "Masukkan bilangan ke " << i << " : ";
        cin >> number;

        if (i == 1) {
            biggest = number;
        }
        else if (number > biggest) {
            biggest = number;
        }
    }
    cout << "Angka Terbesar = " << biggest << endl;
    return 0;
}