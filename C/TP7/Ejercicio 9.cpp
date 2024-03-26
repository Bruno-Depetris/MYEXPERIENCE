#include <stdio.h>
#include <string.h>
#define C 100
#define D 100
char cal(char*,char&);
int main(){
	char cad[C];
	char letra;
	printf("\nIngrese una cadena\n");
	gets(cad);
	
	printf("\nQue letra desea saber cuantas veces se repite?\n");
	scanf("%s", &letra);
	
	cal(cad,letra);
	
}
char cal(char c[ ], char& l){
	int i;
	int cant;
	cant = 0;
	for(i=0;i<100;i++){
		if(c[i] == l){
			cant++;
		}
	}
	printf("El carracter se repite %i veces\n", cant);
	return i;
}
