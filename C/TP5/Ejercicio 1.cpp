#include <stdio.h>

int main(){
	char cadena[99];
	int i = 0;
	int j;
	printf("Ingrese una cadena\n");
	gets(cadena);
	printf("\nLa cadena introducida es: %s\n\n", cadena);
	while(cadena[i]!='\0'){
		i++;
	}
	printf("La cadena invertida es:\n\t");
	for (j=i-1; j>=0; j--){
		printf("%c", cadena[j]);
	}
	return 0;
}
