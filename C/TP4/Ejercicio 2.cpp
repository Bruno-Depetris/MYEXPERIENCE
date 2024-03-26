#include <stdio.h>
#include <math.h>
int main(){
	int num[10], par, impar, contpar, contimpar;
	float resto, prompar, promimpar;
	int i;
	par = 0; 
	impar = 0; 
	contpar = 0; 
	contimpar = 0; 
	printf("Ingrese 10 numeros reales\n");
	for(i=0; i<10; i++){
		printf("\n:");
		scanf("%i", &num[i]);
		resto = num[i]%2;
		if (resto == 0){
			par = par + num [i];
			contpar++;
		}
		else{
			impar = impar + num[i];
			contimpar++;
		}
	}
	prompar = par/contpar;
	promimpar= impar/contimpar;
	printf("\nEl promedio de los numeros ingresados es de"
		   "\npar: %10.3f"
		   "\nimpar: %10.3f", prompar, promimpar);
}
