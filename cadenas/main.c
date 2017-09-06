#include <stdio.h>
#include <stdlib.h>
#define CANT 2

int main()
{
    char nombre[CANT];
    int legajo[CANT];
    int x;

    for(x=0;x<CANT;x++)
    {
        printf("Ingrese Nombre: ");
        fflush(stdin);
        scanf("%s",nombre[x]);

        printf("Ingrese Legajo: ");
        fflush(stdin);
        scanf("%d",&legajo[x]);
    }

    for(x=0;x<CANT;x++)
    {
        printf("\nNombre: %s - Legajo: %d \n",nombre[x],legajo[x]);
    }


    return 0;
}
