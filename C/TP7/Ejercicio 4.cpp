#include <stdio.h>

float inter(float&, float&);
int main(){
	float x1, x2;
	printf("\nIngrese un valor para X1 y X2");
	printf("\nX1:");
	scanf("%f", &x1);
	printf("\nX2:");
	scanf("%f", &x2);
	printf("\nLos valores ingresados son:"
		   "\nX1:%5.2f"
		   "\nX2:%5.2f", x1, x2);
	
	inter(x2, x1);
}
float inter(float& a, float& b){
	printf("\nIntercambiando los valores , quedaria:"
		   "\nX1:%5.2f"
		   "\nX2:%5.2f", a, b);
	return a;
	
}
