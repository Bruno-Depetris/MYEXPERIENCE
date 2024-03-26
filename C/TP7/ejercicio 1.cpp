#include <stdio.h>
#include <math.h>

float polrec(float& x, float& y){
	float polrec;
	xr = x*cos()
	
	return polrec;
	
}

int main(){
	float a, b;
	int opcion;
	
	printf("\nIngrese los valores");
	printf("\nParte real:");
	scanf("%f", &a);
	printf("\nParte imaginaria:");
	scanf("%f", &b);
	
	printf("\n                   OPCIONES      			"
		   "\n============================================"
		   "\nCalcular de polar a rectangular....(pulse 1)"
		   "\nCalcular de rectangular a polar....(pulse 2)"
		   "\nOPCION:");
	scanf("%i", &opcion);
	switch(opcion){
	case 1:
		printf("El numero polar es:z=%f+%fi", a, b);
		break;
	case 2:
		printf("");
		break;
	}
}
