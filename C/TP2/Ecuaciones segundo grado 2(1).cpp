#include<stdio.h>
#include<math.h>
int main(int argc, char** args){
	float a, b, c, disc, x1, x2, xi, xr;
	printf("\n\n\t Programa en C para resolver una ecuación de segundo grado\n\n\n");
	printf("\t\t\tEscribe el valor de a = ");	
	scanf("%f", &a);
	printf("\t\t\tEscribe el valor de b = ");
	scanf("%f", &b);
	printf("\t\t\tEscribe el valor de c = ");
	scanf("%f", &c);
	disc=pow(b, 2.0)-4*a*c;

	if(disc>90000){
		printf("\t\t\terror");
	}
	else{
		if(disc==0.0){
			x1=(-b)/(2.0*a);
			printf("\n\t\t\tLa ecuacion tiene una raiz %.2f", x1);
		}
		else{
			xr=(-b/(2.0*a));
			xi=(sqrt(-disc)/(2.0*a));
			printf("\n\t\t x1 es %.2f y la x2 es %.2f", xr, xi);
		}
	}
	printf("\n\n\t\t\t");
}
