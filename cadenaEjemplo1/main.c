#include <stdio.h>
#include <stdlib.h>
#define ESC 27
#define CANT 4


int main()
{
    char nombre[CANT];
    char letra;

    do{
        system("cls");
        printf("INGRESE NOMBRE: ");
        fflush(stdin);
        scanf("%[^\n]",nombre); //PARA TOMAR LOS ESPACIOS

        printf("\nNOMBRE: %s",nombre);

        printf("\nPRESIONE CUALQUIER TECLA PARA CONTINUAR.....ESC PARA SALIR");

        letra=getch();

    }while(letra!=ESC);

    return 0;
}
