#include <stdio.h>
#include <math.h>
int main(void){
	int na;
	int nb;
	int nc;
	int disc;
	int x1;
	int x2;
	int xr;
	int xi;
	printf("\n\t\tSolucion de una ecuacion de segundo grado");
	printf("\n\tvariable a: ");
	scanf("%d", &na);
	printf("\n\tvariable b: ");
	scanf("%d", &nb);
	printf("\n\tvariable c: ");
	scanf("%d", &nc);
	disc=(-nb+((nb*nb)-(4*na*nc)))/(2*na);
	if(disc>0.0){
		printf("\t\t\tLas dos raices son reales");
		x1=((-nb+sqrt(disc))/(2.0*na));
		x2=((-nb-sqrt(disc))/(2.0*na));
		printf("\n\t\t\tx1=%.2d   x2=%.2d", x1, x2);
	}
	else{
		xr=(-nb/(2.0*na));
		xi=(+nb/(2.0*na));
		printf("\n\t\tLa raiz real es %.2d y la imaginaria es %.2d", xr, xi);
	}
	printf("\n\n\t\t\t");
	
}
