#include <iostream>
using namespace std;

int main()
{
    int odd, total = 0, even, jumlah = 0;

    for (odd = 0; odd < 10; odd++) {
        odd += 1;
        cout << odd << " ";
        total = total + odd;
    }
    cout << ": " << total;

    cout << endl;

    for (even = 1; even < 10; even++) {
        even += 1;
        cout << even << " ";
        jumlah = jumlah + even;
    }
    cout << ": " << jumlah;
    return 0;
}
