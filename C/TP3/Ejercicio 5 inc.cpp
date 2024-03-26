#include <stdio.h>
#include <math.h>

int main (){
	double x[51], y[51], d, PI;
	int k, h;
	h=0.00001;
	PI=3.14159;
	d=4.0*PI/50;
	for(k=0;k<=50;k++){
		x[k] = k*d;
		y[k] = sin(x[k]);
		printf("x = %lf  y = %lf\n ", x[k], y[k]);
	}
	for(k=0;k<=50;k++){
		d= (sin (4*(x[k] + h))- sin(4*x[k]))/h;
		printf(":%lf\n", d);
	}
}
