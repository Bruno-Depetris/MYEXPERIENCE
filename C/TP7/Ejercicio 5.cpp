#include <stdio.h>
#include <math.h>

float calculo(float&,float&,float&,float&,float&,float&,char&);
int main(){
	float a, b, c, d, e, f;
	char opcion;
	printf("   __"
		  "\n  /"
		  "\n | (a)X +/- (b)Y=c	"
		  "\n<"
		  "\n | (d)X +/- (e)Y=f "
		   "\n  \\__");
	
	
	printf("\nIngrese los valores para a, b, c, d, e, f\n");
	scanf("%f" "%f" "%f" "%f" "%f" "%f", &a, &b, &c, &d, &e, &f);
	
	printf("La ecuacion es una resta o suma?");
	printf("\n-----Opciones------"
		   "\nSUMA------->(Pulse +)"
		   "\nRESTA------>(pulse -)"
		   "\n:");
	scanf("%s", &opcion);
	
	switch(opcion){
	case '+':
		printf("   __"
			   "\n  /"
			   "\n | (%5.3f)X + (%5.3f)Y = %5.3f	"
			   "\n<"
			   "\n | (%5.3f)X + (%5.3f)Y = %5.3f "
			   "\n  \\__", a, b, c, d, e, f);
		break;
	case '-':
		printf("   __"
			   "\n  /"
			   "\n | (%5.3f)X - (%5.3f)Y = %5.3f "
			   "\n<"
			   "\n | (%5.3f)X - (%5.3f)Y = %5.3f "
			   "\n  \\__", a, b, c, d, e, f);
		break;
	}
	calculo(a,b,c,d,e,f,opcion);
}
float  calculo(float& a1,float& b1,float& x1,float& a2,float& b2,float& x2, char& opcion){
	float x, y, z, xr, yr, zr;
	switch(opcion){
	case '+':
		x = -a2*a1;
		y = -a2*b1;
		z = -a2*x1;
		xr=a1*a2;
		yr=a1*b2;
		zr=a1*x2;
		x=x+xr;
		y=y+yr;
		z=z+zr;
		y=z/y;
		
		z=x1-y*b1;
		x=z/a1;
		printf("\nEl valor de x es de : %5.3f", x);
		printf("\nEl valor de y es de : %5.3f", y);
		break;
	case '-':
		x =-a2*a1;
		y =-a2*-b1;
		z =-a2*x1;
		xr=a1*a2;
		yr=a1*-b2;
		zr=a1*x2;
		x=x+xr;
		y=y+yr;
		z=z+zr;
		y=z/y;
		
		z=x1-y*b1;
		x=z/a1;
		
		printf("\nEl valor de x es de : %5.3f", x);
		printf("\nEl valor de y es de : %5.3f", y);
		break;
		
	}
	return 0;
}
