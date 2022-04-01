#include <iostream>

using namespace std;

int main()
{
    char tigad[2][2][2] =
    {
        {{'A', 'B'}, {'C', 'D'}},
        {{'E', 'F'}, {'G', 'H'}}
    };

    // Tampilkan isi elemen array
    cout << tigad[0][0][0] << endl;
    cout << tigad[0][0][1] << endl;
    cout << tigad[0][1][0] << endl;
    cout << tigad[0][1][1] << endl;
    cout << tigad[1][0][0] << endl;
    cout << tigad[1][0][1] << endl;
    cout << tigad[1][1][0] << endl;
    cout << tigad[1][1][1] << endl;

    return 0;
}
