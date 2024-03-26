#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char ultima(char* palabra){
	return palabra[strlen(palabra)-1];
}
int main (){
	char cadena[1000];
	
	printf("Ingrese una cadena\n");
	gets(cadena);
	
	printf("La ultima letra es:%c\n",ultima(cadena));
	
	return 0;
}
