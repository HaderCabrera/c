#include <stdio.h>
#include <stdlib.h>

int main()
{
    int z;//tipo entero __int
    float x; // tipo decimal 2**32
    double y; // tipo double 2**64
    char a; // tipo chart __caracteresASCII
    z = 10;
    x = 9.2334;
    y = 9.34;
    a = '%';
    printf("La variable z tiene un valor de: %i\n", z);
    printf("La variable x tiene un valor de: %f\n", x);
    printf("La variable y tiene un valor de: %f\n", y);
    printf("La variable a tiene un valor de: %c\n", a);

    system("pause");
    return 0;
}
