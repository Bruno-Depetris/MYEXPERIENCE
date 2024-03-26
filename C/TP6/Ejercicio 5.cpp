#include <stdio.h>
#include <math.h>

int main () {
	double PI=3.14159;
	double x, y, d;
	int  k;
	
	FILE *fptr;
	fptr = fopen("Actividad 5.txt","w");
	if(fptr == NULL) {
		printf("Error!");
		return -1;
	}
	d=8.0*PI/81;
	for(k=0; k<=80 ;k++){
		x=k*d;
		y=sin(4*x);
		fprintf(fptr, "%10.6lf %10.6lf\n",x ,y);
	}
	fclose(fptr);
	
	fptr = fopen("Actividad 5.txt","r");
	if(fptr == NULL) {
		printf("Error!");
		return -1;
	}
	for(k=0; k<=80; k++){
		
		fscanf(fptr,"%lf" "%lf",&x ,&y);
		printf("x= %lf   y= %lf\n ",x ,y);
	}
	fclose(fptr);
	return 0;
}
