#include <iostream>
using namespace std;

int main()
{
    /* code */
    int i, limit;
    cout << "Masukkan limit angka : ";
    cin >> limit;

    i = 1;
    while (i < limit)
    {     
        if (i % 2 == 1 && i != 1)
        {
            cout << i << endl;
        }
        i++;
    }
    return 0;
}
