/* Crear un programa que escriba en cada línea de la pantalla los tres campos de cada una
de las estructuras del array lista[ ]
*/

#include <stdio.h>
#include <stdlib.h>
#define DIM 2

struct persona{
char nombre[20];
char apellido[20];
int edad;
}lista[DIM];

void pedir_datos();
void mostrar_datos();

int main(){
int i;
pedir_datos();
mostrar_datos();

return 0;
}

void pedir_datos(){
int i;
for(i=0;i<DIM;i++){

fflush(stdin);
printf("Nombre de la persona %d:\n",i+1);
gets(lista[i].nombre);

fflush(stdin);
printf("Apellido de la persona %d:\n",i+1);
gets(lista[i].apellido);

fflush(stdin);
printf("Edad de la persona %d:\n",i+1);
scanf("%d",&lista[i].edad);}
}

void mostrar_datos(){
int i;
printf("\n\nMOSTRAR DATOS\n");

for(i=0;i<DIM;i++){

printf("\nNombre de la persona %d: ",i+1);
puts(lista[i].nombre);

printf("\nApellido de la persona:",i+1);
puts(lista[i].apellido);

printf("\nEdad de la persona %d: %d ",i+1,lista[i].edad);
printf("\n\n");}
}
