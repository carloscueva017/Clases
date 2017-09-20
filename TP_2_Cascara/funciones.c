#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "funciones.h"
#define CANT 19

//int inicializacion(EPersona lista[])
//{
  //  int x;
   // for (x=0;x<CANT;x++)
    //{
     //   lista[x].estado=0;
    //}
//}

int agregarPersona(EPersona lista[])
{
    int z;
    for(z=0;z<CANT;z++)
    {
        if(lista[z].estado==0)
        {
            printf("Ingrese Nombre: ");
            fflush(stdin);
            scanf("%[^\n]",lista[z].nombre);

            printf("Ingrese Edad: ");
            scanf("%d",lista[z].edad);

            printf("Ingrese D.N.I: ");
            scanf("%ld",lista[z].dni);

            lista[z].estado=1;
            break;
            }

    }
}

int borrarPersona(EPersona lista[])
{
    EPersona auxiliar;
    int y;

    printf("Ingrese DNI de Persona a Eliminar:\n");
    scanf("%ld",&auxiliar.dni);

    for(y=0;y<CANT;y++)
    {
        if(auxiliar.dni == lista[y].dni)
        {
            lista[y].estado=0;
            printf("La Persona fue Eliminada Correctamente.\n");
            break;
        }
        else
        {
            printf("No Se encontro DNI.\n");
            break;
        }
    }
}

int obtenerEspacioLibre(EPersona lista[],int pos)
{
    for (pos=0;pos<CANT;pos++)
    {
        if(lista[pos].estado == 0)
        {
            break;
        }
    }
    return pos;
}


