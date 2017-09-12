#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	char nombre[31];
	char apellido[31];
	char apellidoNombre[62];
	int i;

    printf("Nombre: ");
    fflush(stdin);
    scanf("%[^\n]", nombre);

    printf("Apellido: ");
    fflush(stdin);
    scanf("%[^\n]", apellido);

	system("cls");

	printf("El nombre ingresado es: %s", nombre);
	printf("\nEl apellido ingresado es: %s", apellido);

	strlwr(nombre);
	strlwr(apellido);

    nombre[0] = toupper(nombre[0]);
    apellido[0] = toupper(apellido[0]);

	for(i=0; i<30; i++){
        if(nombre[i] == ' ' && nombre[i+1] != ' '){
            nombre[i+1] = toupper(nombre[i+1]);
        }
	}

	for(i=0; i<30; i++){
        if(apellido[i] == ' ' && apellido[i+1] != ' '){
            apellido[i+1] = toupper(apellido[i+1]);
        }
	}

	strcpy(apellidoNombre, apellido);
	strcat(apellidoNombre, " ");
	strcat(apellidoNombre, nombre);

	printf("\n\nEl apellido y nombre ingresado es: %s", apellidoNombre);

	return 0;
}
