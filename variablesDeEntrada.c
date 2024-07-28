// Operaciones con variables de entrada

#include <stdio.h>
#include <stdlib.h>

//Macro : variables constantes
#define PI 3.1416

int main()
{
    float x;
    int y;
    x = PI;

    //Tomar varibale de entrada
    printf("Ingrese la edad de su padre: ");
    scanf("%i", &y);
    printf("La edad del papá es: %i\n", y);

    //Operaciones
    printf("El valor de x es: %f\n", x);
    x = x * y;
    printf("El valor de actualizado es: %f\n", x);

    system("pause");
    return 0;
}
