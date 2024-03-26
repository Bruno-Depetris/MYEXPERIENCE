#include <stdio.h>
#include <math.h>
double calculoP(double&,double&,double&);
double calculoN(double&,double&,double&);

double calculoP(double& a, double& b, double& c){
	double calculoP;
	calculoP = (-b+sqrt(pow(b,2)-4*a*c)/2*a);
	printf("\nX1 equivale a %lf", calculoP );
	return calculoP;
}
	double calculoN(double& a, double& b, double& c){
		double calculoN;
		calculoN = (-b-sqrt(pow(b,2)-4*a*c)/2*a);
		printf("\nX2 equivale a %lf", calculoN );
		return calculoN;
	}	
		
		

int main(){
	double a, b, c;
	
	printf("\nIngrese los valores para ax2+bx+c");
	printf("\nValor A....:");
	scanf("%lf", &a);
	printf("\nValor B....:");
	scanf("%lf", &b);
	printf("\nValor C....:");
	scanf("%lf", &c);
	calculoP(a,b,c);
	calculoN(a,b,c);
}
		
