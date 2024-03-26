#include <stdio.h>
#include <math.h>

double Determinante33(double&,double&,double&,double&,double&,double&,double&,double&,double&);
double Determinante22(double&,double&,double&,double&);

int main(){
	double matriz1[3][3];
	double matriz2[2][2];
	int opcion;
	int i,k,f,c;
	
	printf("\nVa a ingresar una matriz de 3 x 3 o 2 x 2 ?\n"
		   "\nMatriz 3 x 3.....(Pulse 1)"
		   "\nMatriz 2 x 2.....(pulse 2)"
		   "\n:");
	scanf("%i", &opcion);
	
	switch(opcion){
	case 1 :
		printf("Completa la matriz 3 x 3\n");
		for(i=0;i<3;i++){
			for(k=0;k<3;k++){
				printf("Ingrese numero fila %d columna %d: ", i+1, k+1);
				scanf("%lf", &matriz1[i][k]);
				
				
			}
		}
		printf("\n  %lf , %lf  , %lf  "
			   "\n  %lf , %lf  , %lf  "
			   "\n  %lf , %lf  , %lf  ", matriz1[0][0], matriz1[0][1], matriz1[0][2], matriz1[1][0], matriz1[1][1], matriz1[1][2], matriz1[2][0], matriz1[2][1], matriz1[2][2]);
		Determinante33(matriz1[0][0], matriz1[0][1], matriz1[0][2], matriz1[1][0], matriz1[1][1], matriz1[1][2], matriz1[2][0], matriz1[2][1], matriz1[2][2]);
		break;
	case 2:
		printf("Completa la matriz 2 x 2\n");
		for(f=0;f<2;f++){
			for(c=0;c<2;c++){
			printf("Ingrese numero fila %d columna %d: ", f+1, c+1);
			scanf("%lf",  &matriz2[f][c]);
			}
		}
		printf("\n  %lf , %lf "
			   "\n  %lf , %lf ", matriz2[0][0], matriz2[0][1], matriz2[1][0], matriz2[1][1]);
		Determinante22(matriz2[0][0], matriz2[0][1], matriz2[1][0], matriz2[1][1]);
		break;
	}
	
}

double Determinante33(double& a,double& b,double& c,double& d,double& e,double& f,double& g,double& h,double& i){
	double Determinante33;
	
	Determinante33 = (a * e * i)+(d * h * c)+(g * b * f)-(c * e * g)+(f * h * a)+(i * b* d);
	
	printf("La determinante de la matriz 3 x 3 es : %lf", Determinante33);
	return Determinante33;
	
}
double Determinante22(double& a,double& b,double& c,double& d){
	double Determinante22;
	
	Determinante22 = (a * d)-(c * d);
	printf("La determinante de la matriz 2 x 2 es : %lf", Determinante22);
	return Determinante22;
}
