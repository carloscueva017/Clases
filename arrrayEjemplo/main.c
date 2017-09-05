#include <stdio.h>
#include <stdlib.h>
#define CANT 2
int main()
{
    int x;
    int edad[5];
    float sueldo[5];
    char legajo[5];

    for(x=0;x<CANT;x++)
    {
        printf("INGRESE LA EDAD: ");
        scanf("%d",&edad[x]);

        printf("INGRESE EL SUELDO: ");
        scanf("%f",&sueldo[x]);

        printf("INGRESE LEGAJO: ");
        scanf("%s",&legajo[x]);
    }


    system("cls");
    for(x=0;x<CANT;x++)
    {
        printf("EDAD: %d SUELDO: %.2f LEGAJO: %s\n",edad[x],sueldo[x],legajo[x]);

    }
    return 0;
}
