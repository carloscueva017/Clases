#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define CANT 10

int main()
{
    int h;
    int j;
    int codigo[CANT];
    int auxCodi;
    char descripcion [CANT][31];
    char auxDescr[31];

    for(h=0;h<CANT;h++)
    {
        printf("Codigo:");
        scanf("%d",&codigo);

        printf("Descripcion: ");
        fflush(stdin);
        scanf("%[^\n]",descripcion);
    }

    for(h=0;h<CANT;h++)
    {
        for(j=0;j<CANT;j++)
        {
            if(strcmp(descripcion[h],descripcion[j]>0))
            {
                strcpy(auxDescr,descripcion[h]);
                strcpy(descripcion[h],descripcion[j]);
                strcpy(descripcion[j],auxDescr);

                auxCodi=codigo[h];
                codigo[h]=codigo[j];
                codigo[j]=auxCodi;
            }
        }

    }

    return 0;
}
