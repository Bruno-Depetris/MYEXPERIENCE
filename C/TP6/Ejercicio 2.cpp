#include <stdio.h>

int main() {
	char nombre[20];
	FILE *fptr;
	if((fptr = fopen("Nombre.txt","r")) == NULL) {
		printf("Error abriendo el archivo.");
		return -1;
	}
	fscanf(fptr, "%[^\n]", &nombre);
	printf("Valor del entero: %s", nombre);
	fclose(fptr);
	return 0;
}
