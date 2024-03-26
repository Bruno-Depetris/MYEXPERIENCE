#include <stdio.h>
#include <math.h>
float producto(double [3][3],double [3][3]);


int main(){
	double matriz1[3][3];
	double matriz2[3][3];
	int i,k;
	printf("Completa la primer matriz 3 x 3\n");
	for(i=0;i<3;i++){
		for(k=0;k<3;k++){
			printf("Ingrese numero fila %d columna %d: ", i+1, k+1);
			scanf("%lf", &matriz1[i][k]);
		}
	}
	printf("\n  %lf , %lf  , %lf  "
		   "\n  %lf , %lf  , %lf  "
		   "\n  %lf , %lf  , %lf  ", matriz1[0][0], matriz1[0][1], matriz1[0][2], matriz1[1][0], matriz1[1][1], matriz1[1][2], matriz1[2][0], matriz1[2][1], matriz1[2][2]);
	
	printf("\n\nCompleta la segunda matriz 3 x 3\n");
	for(i=0;i<3;i++){
		for(k=0;k<3;k++){
			printf("Ingrese numero fila %d columna %d: ", i+1, k+1);
			scanf("%lf", &matriz2[i][k]);	
		}
	}
	printf("\n  %lf , %lf  , %lf  "
		   "\n  %lf , %lf  , %lf  "
		   "\n  %lf , %lf  , %lf  ", matriz2[0][0], matriz2[0][1], matriz2[0][2], matriz2[1][0], matriz2[1][1], matriz2[1][2], matriz2[2][0], matriz2[2][1], matriz2[2][2]);
	
	producto(matriz1,matriz1);
}
	
float producto(double a[3][3], double b[3][3]){
	double producto[3][3];
	
	
	
	producto[0][0]=(a[0][0]*b[0][0])+(a[1][0]*b[0][1])+(a[2][0]*b[0][2]);
	producto[0][1]=(a[0][0]*b[1][0])+(a[1][0]*b[1][1])+(a[2][0]*b[1][2]);
	producto[0][2]=(a[0][0]*b[2][0])+(a[1][0]*b[2][1])+(a[2][0]*b[2][2]);
	
	producto[1][0]=(a[0][1]*b[0][0])+(a[1][1]*b[0][1])+(a[2][1]*b[0][2]);
	producto[1][1]=(a[0][1]*b[1][0])+(a[1][1]*b[1][1])+(a[2][1]*b[1][2]);
	producto[1][2]=(a[0][1]*b[2][0])+(a[1][1]*b[2][1])+(a[2][1]*b[2][2]);
	
	producto[2][0]=(a[0][2]*b[0][0])+(a[1][2]*b[0][1])+(a[2][2]*b[0][2]);
	producto[2][1]=(a[0][2]*b[1][0])+(a[1][2]*b[1][1])+(a[2][2]*b[1][2]);
	producto[2][2]=(a[0][2]*b[2][0])+(a[1][2]*b[2][1])+(a[2][2]*b[2][2]);
	
	printf("El producto de las matrizes es :"
		    "\n  %lf , %lf  , %lf  "
			"\n  %lf , %lf  , %lf  "
			"\n  %lf , %lf  , %lf  ", producto[0][0], producto[0][1], producto[0][2], producto[1][0], producto[1][1], producto[1][2], producto[2][0], producto[2][1], producto[2][2]);
	
	return producto[3][3];
	
}
