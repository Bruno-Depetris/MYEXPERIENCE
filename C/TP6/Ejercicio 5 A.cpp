#include <stdio.h>
#include <math.h>

int main (){
	float h, d[100], x[100], y[100];
	int i, k;
	FILE *fptr;
	//fptr = fopen("Actividad 5.txt","r");
	fptr = fopen("Actividad 5.txt","r");
	if(fptr == NULL) {
		printf("Error!");
		return -1;
	}
	for(i=0;i<81;i++){                                   //Iteramos i,j para  ir almacenando los valores.
		fscanf(fptr, "%f", &x[i]);   
		fscanf(fptr, "%f", &y[i]); // Leemos un float y lo guardamos en A en la posicion i,j
	}
	   fclose(fptr);
	h=0.0001;
	for(k=0;k<=80;k++){
	d [k]= (sin (4*(x[k] + h))- sin(4*x[k]))/h;
		printf("Valor de X para el punto %d: %.3f         Derivada en el punto= %.3f\n", k+1, x[k],d[k]);}
}
	
