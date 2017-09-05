#include <stdio.h>
#include <stdlib.h>
#define CANT 3

int main()
{
    int num[CANT];
    int h,maximo,minimo;

    for(h=0;h<CANT;h++)
    {
        printf("INGRESE NUMERO");
        scanf("%d",&num[h]);

        if(h==0 || num[h]>maximo)
        {
            maximo=num[h];
        }

        if(h==0 || num[h]<minimo)
        {
            minimo=num[h];
        }

    }

    for(h=0;h<CANT;h++)
    {
        printf("MAXIMO: %d MINIMO: %d \n",maximo,minimo);
    }
    return 0;
}
