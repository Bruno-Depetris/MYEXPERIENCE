#include <stdio.h>
#include <string.h>

int main(){
	char cadena[100];
	int l=0, i, e=0, caracteres;
	printf("Ingrese una cadena\n");
	gets(cadena);
	
	l=strlen(cadena);

	for(i=0;i<=l;i++){
		if (cadena[i] == ' '){
			e++;
		}
	}
	caracteres=l - e;
	printf("\n Hay %i caracteres y %i  espacios", caracteres, e);
}
