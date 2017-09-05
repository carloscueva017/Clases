#include <stdio.h>
#include <stdlib.h>
#define CANT 2

int main()
{
    int estado[CANT];
    int legajo[CANT];
    float sueldo[CANT];
    int x;
    int flag;
    char seguir;

    for(x=0;x<CANT;x++)
    {
        estado[x]=0;
    }

    do{
    for(x=0;x<CANT;x++)
    {
        if(estado[x]==0)
        {
            printf("INGRESE LEGAJO: ");
            scanf("%d",&legajo[x]);

            printf("INGRESE SUELDO: ");
            scanf("%f",&sueldo[x]);

            estado[x]=1;
            flag=1;
            break;
        }

    }
    if(flag==0)
        {
            printf("ESPACIO INSUFICIENTE\n");
        }else{
            printf("DATOS CARGADOS\n");
        }

        printf("Desea ingresar otro dato S/N? ");
        scanf("%c",seguir);


    }while(seguir=='s');

   // for(x=0;x<CANT;x++)
    //{
        //printf("\nLEGAJO: %d - SUELDO: %.2f \n",legajo[x],sueldo[x]);
    //}


    return 0;
}
