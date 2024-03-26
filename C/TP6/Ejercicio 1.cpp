#include <stdio.h>

int main() {
	char nombre[20];
	FILE *fptr = fopen("Nombre.txt", "w");
	
	
	if(fptr == NULL) {
		printf("Error al abrir el archivo.");
		return -1;
	}
	
	printf("ingrese Nombre y Apellido:");
	scanf("%[^\n]", &nombre);
	printf("El nombre ingresado es: \n%s", nombre);
	
	fprintf(fptr, "%s", nombre);
	fclose(fptr);
}
