#include <stdio.h>
#include <math.h>
int main (){
	char texto[200];
	char *punt_cadena;
	int k;
	
	punt_cadena=texto;
	printf("ingrese una cadena\n");
	gets(texto);
	
	for(k=0;k<200;k++){
		if(*punt_cadena==0) break;
		if((*punt_cadena=='A')||(*punt_cadena=='a')||(*punt_cadena=='E')||(*punt_cadena=='e')||(*punt_cadena=='I')||(*punt_cadena=='i')||(*punt_cadena=='O')||(*punt_cadena=='0')||(*punt_cadena=='U')||(*punt_cadena=='u')){
			*punt_cadena='_';
		}
		punt_cadena++;
		
	}
	
	printf("%s", texto);
	printf("\n");
	return 0;
	
}
