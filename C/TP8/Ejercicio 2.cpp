#include <stdio.h>
#include <math.h>
int main (){
	char texto[20];
	char *punt_cadena;
	int k, tamanio;
	
	punt_cadena=texto;
	printf("ingrese una cadena\n");
	scanf("%s",texto);
	
	for(k=0;k<50;k++){
		if(*punt_cadena==0) break;
		punt_cadena++;
	}
	punt_cadena--;
	tamanio=k;
	for(k=0;k<tamanio;k++){
		printf("%c", *punt_cadena);
		punt_cadena--;
	}
	printf("\n");
	return 0;
}
