#include <stdio.h>
#include <stdlib.h>

struct alumno
{
    int legajo;
    char nombre[31];
    int nota1;
    int nota2;
    float promedio;
};


int main()
{
    struct alumno alu;

    printf("Ingrese Legajo: ");
    scanf("%d",&alu.legajo);

    printf("Ingrese Nombre: ");
    fflush(stdin); // o setbuf(stdin,NULL);
    scanf("%[^\n]",alu.nombre);

    printf("Nota 1: ");
    scanf("%d",&alu.nota1);

    printf("Nota 2: ");
    scanf("%d",&alu.nota2);

    alu.promedio=(float)(alu.nota1+alu.nota2)/2;

    system("cls");

    printf("Legajo: %d\n",alu.legajo);
    printf("Nombre: %s\n",alu.nombre);
    printf("Nota 1: %d\n",alu.nota1);
    printf("Nota 2: %d\n",alu.nota2);
    printf("Promedio: %.2f\n",alu.promedio);



    return 0;
}
