#include <stdio.h>
#include <stdlib.h>
#define CANT 2 //la cantidad

int main()
{
    int z;
    int estado[2];
    int edad[2];
    char seguir;


    for(z=0;z<CANT;z++)
    {
        estado[z]=0;
    }

    do{
        int flag=0; //BANDERA
        for(z=0;z<CANT;z++)
        {
            if(estado[z]==0)
            {
                printf("EDAD: ");
                scanf("%d",&edad[z]);

                estado[z]=1;
                flag=1;
                break;
            }
        }

        if(flag==0)
        {
            printf("ESPACIO INSUFICIENTE");
        }else{
            printf("DATOS CARGADOS");
        }

        printf("Desea ingresar otro dato S/N? ");
        scanf("%c",seguir);


    }while(seguir=='s');


    return 0;
}
