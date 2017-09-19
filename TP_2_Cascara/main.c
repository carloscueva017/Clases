#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    EPersona personas[5];

    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {
        printf("1- Agregar Persona\n");
        printf("2- Borrar Persona\n");
        printf("3- Imprimir Lista Ordenada por Nombre\n");
        printf("4- Imprimir Grafico de Edades\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingrese nombre:");
                fflush(stdin);
                scanf("%[^\n]",pers.nombre);
                printf("\nIngrese DNI:");
                scanf("%d",pers.dni);
                continue;
            case 2:
                printf("Nombre: %s \t Edad: %d",pers.nombre,pers.dni);
                break;
            case 3:

                break;
            case 4:
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
