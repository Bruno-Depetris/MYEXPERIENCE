#include <stdio.h>
#include <math.h>

int main(){
	double x, y;
	
	printf("ingrese valor de X para realizar la derivada\n");
	scanf("%lf",&x);
	
	for(int k=0; k<1; k++){
		y=2*cos(x)*sin(x);
		printf("su derivada es:%lf", y);
	}
}
