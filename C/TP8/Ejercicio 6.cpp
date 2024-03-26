#include <stdio.h>
#include <math.h>

int compara_cad(char cadena1[], char cadena2[]){
	int k, tam1, tam2, res=1;
	char *cad1, *cad2;
	
	cad1=cadena1;
	cad2=cadena2;
	
	for(k=0;k<999;k++){
		if (*cad1==0) break;
		cad1++;
    }
	tam1=k;
	
	for(k=0;k<999;k++){
		if (*cad2==0) break;
		cad2++;
	}
	tam2=k;
	
	cad1=cadena1;
	cad2=cadena2;
	
	if(tam2!=tam1){
		res=1;
		return res;
	}
	else{
		for(k=0;k<999;k++){
			if (*cad1==0) break;
			if (*cad1!=*cad2){
				res=1;
				return res;
			}
			else
				res=0;
			cadena1++;
			cadena2++;
			
		}
		return res;
	}
}


int main() {
	char cadena1[999];
	char cadena2[999];
	int res;

	printf("Ingrese la primer cadena\n");
	gets(cadena1);
	printf("Ingrese la segunda cadena\n");
	gets(cadena2);
	
	res=compara_cad(cadena1, cadena2);
	if (res==0)
		printf("Las cadenas son iguales\n");
	else
		printf("Las cadenas son diferentes\n");
}
