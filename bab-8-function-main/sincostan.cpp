#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{
    int sudut;
    cout << "\t Tabel Sinus dan Cosinus \n";
    cout << "\t=========================\n";
    
    printf("\t%3s%12s%12s\n", "X", "Sinus(X)", "Cosinus(X)");
    sudut = 0;

    while (sudut <= 360)
    {
        printf("\t%03d%11.5f%11.5f\n", sudut, sin(sudut / 57.2958), cos(sudut / 57.2958));
        sudut += 30;
    }
    return 0;
}