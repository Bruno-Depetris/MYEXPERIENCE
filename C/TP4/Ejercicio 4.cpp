#include <stdio.h>
#include <math.h>

int main(){
	int notas[15];
	int  i, cero, uno , dos, tres, cuatro, cinco, seis, siete, ocho, nueve, diez;
	cero = 0;
	uno = 0;
	dos = 0;
	tres = 0;
	cuatro = 0;
	cinco = 0;
	seis = 0;
	siete = 0;
	ocho = 0;
	nueve = 0;
	diez = 0;
	
	printf("Ingrese las notas de los 15 alumnos\n");
	
	for(i=0;i<=15;i++){
		printf("alumno %i:", i);
		scanf("%i", &notas[i]);
		
		if(notas[i] > 10){
			printf("\n!!ERROR¡¡Las notas tienen que ser hasta 10\n");
			return 0;
		}
		else if(notas[i] == 0){
			cero++;
		}
		else if(notas[i] == 1){
			uno++;
		}
		else if(notas[i] == 2){
			dos++;
		}
		else if(notas[i] == 3){
			tres++;
		}
		else if(notas[i] == 4){
			cuatro++;
		}
		else if(notas[i] == 5){
			cinco++;
		}
		else if(notas[i] == 6){
			seis++;
		}
		else if(notas[i] == 7){
			siete++;
		}
		else if(notas[i] == 8){
			ocho++;
		}
		else if(notas[i] == 9){
			nueve++;
		}
		else if(notas[i] == 10){
			diez++;
		}
	}
	printf("\n%i sacaron 0"
		   "\n%i sacaron 1"
		   "\n%i sacaron 2"
		   "\n%i sacaron 3"
		   "\n%i sacaron 4"
		   "\n%i sacaron 5"
		   "\n%i sacaron 6"
		   "\n%i sacaron 7"
		   "\n%i sacaron 8"
		   "\n%i sacaron 9"
		   "\n%i sacaron 10", cero, uno , dos, tres, cuatro, cinco, seis, siete, ocho, nueve, diez);
}
