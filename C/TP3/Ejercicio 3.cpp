#include <stdio.h>
#include <math.h>

int main (){
	double x, y, d, k, PI;
	
	PI = 3.14159;
	d = 4.0*PI/50;
	
	for(k=0;k<=50;k++){
		x=k*d;
		y=(sin(x))+ (0.7*cos(2*x))+(0.5*sin(3*x));
		printf("x = %lf     y = %lf\n", x, y);
	}
}
