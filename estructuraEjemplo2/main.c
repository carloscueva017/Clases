#include <stdio.h>
#include <stdlib.h>

struct fecha
{
    int dia,mes,anio;
};
struct gente
{
    char nombre[20];
    struct fecha f_nacimiento;
};

    int main()
{
    struct gente pers;
    struct fecha fn;
    printf("Ingrese Nombre: ");
    gets(pers.nombre);
    printf("Ingrese Dia de Nacimiento: ");
    scanf("%d",&fn.dia);
    printf("Ingrese Mes de Nacimiento: ");
    scanf("%d",&fn.mes);
    printf("Ingrese A¤o de Nacimiento: ");
    scanf("%d",&fn.anio);
    pers.f_nacimiento=fn;

    system("CLS");

    printf("La Fecha de Nacimiento es: %d-%d-%d",fn.dia,fn.mes,fn.anio);
}
