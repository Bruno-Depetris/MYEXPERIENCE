#include <stdio.h>
#include <math.h>

char may_men(int x1,int x2){
	if(x1<x2){
		printf("El valor %i, es mayor que %i", x2, x1);
	}
	else if(x2<x1){
		printf("El valor %i, es mayor que %i", x1, x2);
	}
	return (x1<x2);
}
int main (){
	int x1, x2;
 	
	printf("ingrese valor 1\n:");
	scanf("%i", &x1);
	printf("ingrese valor 2\n:");
	scanf("%i", &x2);
	
	printf("%c", may_men(x1, x2));
	
}
