#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int hours, pay;
    const int rate = 100000;

    cout << "Masukkan total jam kerja : ";
    cin >> hours;

    if (hours <= 40) {
        pay = hours * rate;
    }
    else {
        pay = 40 * rate + (hours - 40) * 1.5 * rate;
    }
    
    printf("Total gaji kamu : Rp%i", pay);
    return 0;
}
