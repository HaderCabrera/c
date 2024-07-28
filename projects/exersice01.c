/*Se nos pide ingresar la edad del padre y del hijo
Luego mosotrar la diferencia por consola */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int edadPadre, edadHijo, diferencia;

    printf("Digite la edad del padre: ");
    scanf("%i",&edadPadre);

    printf("Digite la edad del hijo: ");
    scanf("%i",&edadHijo);
    
    diferencia = edadPadre - edadHijo;
    printf("El padre tuvo hizo el pelado a los : %i años\n", diferencia);

    //Limpriar buffer de memoria
    fflush(stdin);
    
    system("pause");
    return 0;
}