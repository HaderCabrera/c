// Uso de variables y operaciones

#include <stdio.h>
#include <stdlib.h>

#include <math.h>

int main()
{
    int x,y;

    x = 5;
    y = 5;

    //Operaciones basicas
    x += y; // x = x + y
    printf("La suma de las variables x y y es: %i\n", x);

    x -= y; // x = x - y
    printf("La resta de las variables x y y es: %i\n", x);

    x *= y; // x = x* y
    printf("La multiplicacion de las variables x y y es: %i\n", x);

    x /= y; // x = x / y
    printf("La division de las variables x y y es: %i\n", x);

    //x = x % y;
    //printf("El resto de la division es: %i\n", x);

    //Operaciones con libreria math
    x = pow(x,y);
    printf("Elevar un numero X a la Y: %i\n", x);

    x = sqrt(x);
    printf("Raiz cuadrada de un numero X: %i\n", x);

    //Operadores de incremento
    x++;
    printf("El valor de X mas 1 es: %i\n", x);

    x--;
    printf("El valor de X menos 1 es: %i\n", x);


    system("pause");
    return 0;
}

