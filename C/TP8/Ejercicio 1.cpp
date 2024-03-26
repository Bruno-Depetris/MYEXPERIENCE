#include <stdio.h>
#include <math.h>

int main() {
	float mediciones[10], suma=0, promedio, error, suma_error_cuad=0, prom_error_cuad, desv;
	float *punt_med;
	int k, i;
	
	
	punt_med=mediciones;
	for(k=0; k<10; k++){
		printf("ingrese la medicion %d\n", k+1);
		scanf("%f",&mediciones[k]);
		suma=suma+mediciones[k];
	}
	promedio=suma/10;
	i=0;
	for (i++; i<10; i++){
		error=*mediciones-promedio;
		error=error*error;
		suma_error_cuad=suma_error_cuad+error;
		punt_med++;
	}
	prom_error_cuad=suma_error_cuad/10;
	desv=sqrt(prom_error_cuad);
	printf("la desviacion media= +-%f\n", desv);
	return 0;
}
