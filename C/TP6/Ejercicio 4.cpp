#include <stdio.h>
#include <math.h>

int main (){
	int v[20];
	int d;
	int suma, suma2, suma3;
	
	FILE *fptr;
	fptr = fopen("Actividad 4.txt","r");
	if(fptr == NULL) {
		printf("Error!");
		return -1;
	}
	printf("Valores=\n\n");
	for(int k=0; k<1; ++k){
	fscanf(fptr, "%i" "%i" "%i" "%i" "%i" "%i" "%i" "%i" "%i" "%i" "%i" "%i" "%i" "%i" "%i" "%i" "%i" "%i" "%i" "%i" "%i" "%i" "%i", &v[0], &v[1],&v[2],&v[3],&v[4],&v[5],&v[6],&v[7],&v[8],&v[9],&v[10],&v[11],&v[12],&v[13],&v[14],&v[15],&v[16],&v[17],&v[18],&v[19]);
	printf("%i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i\n", v[0], v[1], v[2], v[3], v[4], v[5], v[6], v[7], v[8], v[9], v[10], v[11], v[12], v[13], v[14], v[15], v[16], v[17], v[18], v[19]);
	}
	for(int i=0; i<1; ++i){
		suma =  v[0] + v[1] + v[2] + v[3] + v[4] + v[5] + v[6] + v[7] + v[8] + v[9] + v[10];
		suma2 = v[11] + v[12] + v[13] + v[14] + v[15] + v[16] + v[17] + v[18] + v[19];
		suma3 =suma + suma2;
		d = suma3/20;
		printf("el promedio es = %i",d);
	}
	fclose(fptr);
	return 0;
}
