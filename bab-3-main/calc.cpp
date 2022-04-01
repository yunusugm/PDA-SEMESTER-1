#include <iostream>

using namespace std;

int main()
{
    // Buat Variabel
    int numOne, numTwo;
    int sumAdd, sumSubstract, sumMultiply, sumDivide, sumModulus;

    // Ambil Input
    cout << "Ketik angka pertama kamu gan ";
    cin >> numOne;
    cout << "Ketik angka kedua kamu gan ";
    cin >> numTwo;

    // Operasi Matematika
    sumAdd = numOne + numTwo;
    sumSubstract = numOne - numTwo;
    sumMultiply = numOne * numTwo;
    sumDivide = numOne / numTwo;
    sumModulus = numOne % numTwo;

    // Output
    cout << "Hasil penambahan = " << sumAdd << endl;
    cout << "Hasil pengurangan = " << sumSubstract << endl;
    cout << "Hasil perkalian = " << sumMultiply << endl;
    cout << "Hasil pembagian = " << sumDivide << endl;
    cout << "Hasil modulus = " << sumModulus;
    return 0;
}
