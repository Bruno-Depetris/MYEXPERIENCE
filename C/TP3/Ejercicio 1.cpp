#include <stdio.h>
#include <math.h>

int main () {
	int r, a;
	float longitud, area ,volumen;
	double PI;
	
	printf("ingrese el radio:");
	scanf("%i", &r);
	
	printf("Seleccione una opcion:\n");
	printf("1-Calculo de la longitud de la circunferencia\n");
	printf("2-Cálculo del área del círculo \n");
	printf("3-Cálculo del volumen de la esfera\n");
	scanf("%i", &a);
	
	PI=3.14159;
	if(a == 1){
		longitud=2*r*PI;
		printf("La longitud de la circunferencia es:%lf",longitud);
	}
	if(a == 2){
		area=PI*pow(r,2);
		printf("El area del circulo es:%lf",area);
	}
	if(a == 3){
		volumen=2.3561925*pow(r,3);
		printf("El area del circulo es:%lf",volumen);
	}
}
