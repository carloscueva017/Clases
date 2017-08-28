#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nro,contador=0;
    printf("Ingrese Nro: ");
    scanf("%d",&nro);

    while(contador<nro){
            contador=contador+1;

        printf("\n%d",contador);
    }
    return 0;
}
