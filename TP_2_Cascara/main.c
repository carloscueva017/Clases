#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "funciones.h"


int main()
{
    EPersona xxx[20];

    //inicializacion(listaPersonas);

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
                agregarPersona(xxx);
                continue;
            case 2:
                borrarPersona(xxx);
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
