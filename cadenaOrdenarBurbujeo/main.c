#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define CANT 4

int main()
{
    int i;
    int j;
    int nota[CANT];
    int notaAux;
    char nombre[CANT][31];
    char nombreAux[31];

    for(i=0;i<CANT;i++)
    {
        printf("Nota:");
        scanf("%d",&nota);

        printf("Nombre: ");
        fflush(stdin);
        scanf("%[^\n]",nombre);
    }

    for(i=0;i<CANT;i++)
    {
        for(j=0;j<CANT;j++)
        {
            if(nota[i]<nota[j])
            {
                strcpy(nombreAux,nombre[i]);
                strcpy(nombre[i],nombre[j]);
                strcpy(nombre[j],nombreAux);

                notaAux=nota[i];
                nota[i]=nota[j];
                nota[j]=notaAux;

                printf("Nombre: %s - Nota: %d",nombre[j],nota[j]);
            }
        }

    }



    return 0;
}
