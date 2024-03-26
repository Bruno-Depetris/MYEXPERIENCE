#include <stdio.h>
#include <math.h>

int main(){
	float notas[10];
	int i, aprovado, desaprobado, apnodirec;
	aprovado = 0;
	desaprobado = 0;
	apnodirec = 0;
	
	printf("Ingrese las notas de los 10 alumnos\n");
	
	for(i=0;i<10;i++){
		printf(":");
		scanf("%f", &notas[i]);
		if(notas[i] > 10){
			printf("\n!!ERROR¡¡Las notas tienen que ser hasta 10\n");
			
			return 0;
		}
		else if(notas[i] < 4){
			printf("El alumno a desaprobado\n");
			desaprobado++;
		}
		else if(notas[i] < 6){
			printf("El alumno tiene aprovacion NO directa\n");
			apnodirec++;
		}
		else if(notas[i] >= 6){
			printf("El alumno tiene aprovacion DIRECTA\n");
			aprovado++;
		}
	}
	printf("\nLa cantidad de alumnos aprovados son .................:%i"
		   "\nLa cantidad de alumnos con aprovacion NO directa son .:%i"
		   "\nLa cantidad de alumnos desaprobados son ..............:%i", aprovado, apnodirec, desaprobado);
}
