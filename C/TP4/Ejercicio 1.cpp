#include <stdio.h>
#include <math.h>
int main(){
	float arreglo[5], suma, promedio, error, sumaerror, promerror, errormed;
	int k;
	
	printf("\nIngrese 5 medidas:\n");
	for(int i=0;i<5;i++){
		scanf("%f", &arreglo[i]);
	}
	suma = arreglo[0]+arreglo[1]+arreglo[2]+arreglo[3]+arreglo[4];
	promedio = suma/5;
	
	printf("El promedio es de :%f", promedio);
	for(k=0;k<5;k++){
		error = (suma-promedio)*(suma-promedio);
		sumaerror = sumaerror + error;
	}
	promerror = sumaerror / 5;
	errormed = sqrt(promerror);
	printf("\nEl valor cuadrático medio del error respecto al promedio es: %f", errormed);
	return 0;
}
