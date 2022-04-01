#include <stdio.h>
using namespace std;

int main()
{
    /* code */
    float radius, luas;
    const float phi = 3.14;

    printf("Masukkan radius lingkaran : ");
    scanf("%f", &radius);

    luas = phi * radius * radius;
    printf("Luas lingkaran : %g", luas);
    return 0;
}
