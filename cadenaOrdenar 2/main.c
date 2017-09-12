#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define CANT 50


int main()
{
    char nombre[CANT];
    char apellido[CANT];
    char apellidoNombre[CANT];
    int x;

    printf("Ingrese Nombre: ");
    fflush(stdin);
    scanf("%[^\n]",nombre);

    printf("Ingrese Apellido: ");
    fflush(stdin);
    scanf("%[^\n]",apellido);

    system("cls");

    printf("Nombre: %s \n",nombre);
    printf("Apellido: %s",apellido);

    strlwr(nombre);
    strlwr(apellido);

    nombre[0]=toupper(nombre[0]);
    apellido[0]=toupper(apellido[0]);

    for(x=0;x<CANT;x++)
    {
        if(nombre[x]==' ' && nombre[x+1]!=' ')
        {
            nombre[x+1]=toupper(nombre[x+1]);
        }
    }

    for(x=0;x<CANT;x++)
    {
        if(apellido[x]==' ' && apellido[x+1]!=' ')
        {
            apellido[x+1]=toupper(apellido[x+1]);
        }
    }


    strcpy(apellidoNombre,apellido);
    strcat(apellidoNombre," ");
    strcat(apellidoNombre,nombre);

    printf("\nApellido y Nombre: %s",apellidoNombre);

    return 0;
}
