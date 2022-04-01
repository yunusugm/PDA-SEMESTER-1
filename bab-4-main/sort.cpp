#include <iostream>
using namespace std;

int main() {
    int i, number, limit, biggest, smallest;

    cout << "Masukkan jumlah angka yang diinginkan : ";
    cin >> limit;

    for (i = 1; i <= limit; i++)
    {
        cout << "Masukkan bilangan ke " << i << " : ";
        cin >> number;

        if (i == 1)
        {
            biggest = number;
            smallest = number;
        }
        else if (number < smallest)
        {
            smallest = number;
        }
        else if (number > biggest)
        {
            biggest = number;
        }
    }

    cout << "Angka Terbesar = " << biggest << endl;
    cout << "Angka Terkecil = " << smallest << endl;
    return 0;
}