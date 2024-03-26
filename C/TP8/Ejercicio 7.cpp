#include <stdio.h>
#include <math.h>

int unir_cadenas(char cad1[],char cad2[],char cad3[]){
	char *punt_cadena1;
	char *punt_cadena2;
	char *punt_cadena3;
	int k;
	
	punt_cadena1=cad1; 
	punt_cadena2=cad2;
	punt_cadena3=cad3;
	for(k=0;k<999;k++){
		if (*punt_cadena1==0) break;
		*punt_cadena3=*punt_cadena1;
		punt_cadena1++;
		punt_cadena3++;
	}
	for(k=0;k<999;k++){
		if (*punt_cadena2==0) break;
		*punt_cadena3=*punt_cadena2;
		punt_cadena2++;
		punt_cadena3++;
	}
	*punt_cadena3=0;
	return 0;
}

int main (){
	char cadena1[999];
	char cadena2[999];
	char cadena3[999];
	
	
	printf("Ingrese la primer cadena\n");
	gets(cadena1);
	printf("Ingrese la segunda cadena\n");
	gets(cadena2);
	
	unir_cadenas(cadena1, cadena2, cadena3);
	
	printf("La cadena unida es = %s\n",cadena3);
}
