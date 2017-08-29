#include <stdio.h>
#include <stdlib.h>

int suma(int num1,int num2);

int main()
{
    int operando1,operando2,resultado;

    printf("Ingrese Nro1: ");
    scanf("%d",&operando1);
    printf("\nIngrese Nro2: ");
    scanf("%d",&operando2);

    resultado=suma(operando1,operando2);

    printf("\nLa Suma es: %d",resultado);

    return 0;
}

int suma(int num1,int num2)
{
    int resultado;
    resultado=num1+num2;
    return resultado;
}
