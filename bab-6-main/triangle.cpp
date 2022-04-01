#include <iostream>
using namespace std;

int main() {
    int i, j, k, height;
    string space, ex = "*";

    cout << "Masukkan tinggi : ";
    cin >> height;
    space = "";

    for (i = 1; i <= height; i++) {
        for (j = height; j > i; j--) {
            space += " ";
        }
        for (k = 1; k - i < i; k++) {
            space += ex;
        }
        space += "\n";
    }
    cout << space;
    return 0;
}