#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

int main()
{
    int ope1,ope2,resultado;

    printf("Ingrese Numero 1: ");
    scanf("%d",&ope1);

    printf("Ingrese Numero 2: ");
    scanf("%d",&ope2);

    system("cls");

    resultado=suma(ope1,ope2);
    printf("La Suma es: %d \n",resultado);

    resultado=resta(ope1,ope2);
    printf("La Resta es: %d",resultado);

    return 0;
}
