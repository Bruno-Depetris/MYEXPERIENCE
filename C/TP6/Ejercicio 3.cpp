#include <stdio.h>
#include <math.h>

int main(){
	double y, x, funcion;
	int k;
	int PI=3.14159265359;
	FILE *fptr;
	
	fptr = fopen("Actividad 3.txt","w");
	if(fptr == NULL) {
		printf("Error!");
		return -1;
	}
	funcion=8.0*PI/81;
	
	for(k=0; k<80; k++){
		x=k*funcion;
		y=sin(2*x);
		fprintf(fptr, "%10.6lf  %10.6lf\n", x, y);
	}
	
	fclose(fptr);
	
	fptr = fopen("Actividad 3.txt","r");
	if(fptr == NULL) {
		printf("Error!");
		return -1;
	}
	for(k=0; k<=80; k++){
		
		fscanf(fptr, "%lf" "%lf", &x, &y);
		printf("x= %lf      y= %lf\n",x,y);
	}
	fclose(fptr);
	return 0;
}

