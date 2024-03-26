#include <stdio.h>
#include <math.h>

int main () {
	int r, op;
	double PI;
	
	printf("ingrese el radio:");
	scanf("%i", &r);
	
	printf("Seleccione una opcion:\n");
	printf("(1)-Calculo de la longitud de la circunferencia\n");
	printf("(2)-Cálculo del área del círculo \n");
	printf("(3)-Cálculo del volumen de la esfera\n");
	scanf("%i", &op);
	
	PI=3.14159;
	switch(op){
		case 1:
			printf("La longitud de la circunferencia es:%lf",2*r*PI);
			break;
		case 2:
			printf("El area del circulo es:%lf",PI*pow(r,2));
			break;
		case 3:
			printf("El area del circulo es:%lf",2.3561925*pow(r,3));
			break;
			
	}
	return 0;
}
