#include <stdio.h>

int main(){
	float x1, x2, x3;
	float f;
	
	printf("Ingrese los valores para las variables:\n");
	printf("X1:");
	scanf("%f", &x1);
	printf("X2:");
	scanf("%f", &x2);
	printf("X3:");
	scanf("%f", &x3);
	
	f=(1/((1/x1)+(1/x2)+(1/x3)));
	printf("El resultado es:%f", f);
	
	return 0;
}
