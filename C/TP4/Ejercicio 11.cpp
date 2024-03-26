#include <stdio.h>

int main(){
	char cadena[30];
	int k, a, e, i, o, u;
	a = 0;
	e = 0;
	i = 0;
	o = 0;
	u = 0;
	
	printf("Ingrese una cadena\n");
	gets(cadena);
	
	for(k=0;k<=30;k++){
		switch(cadena[k]){
		case 'a':
			a++;
			break;
		case 'e':
			e++;
			break;
		case 'i':
			i++;
			break;
		case 'o':
			o++;
			break;
		case 'u':
			u++;
			break;
		case 'A':
			a++;
			break;
		case 'E':
			e++;
			break;
		case 'I':
			i++;
			break;
		case 'O':
			o++;
			break;
		case 'U':
			u++;
			break;
		}
	}
	printf("\nCantidad de vocales:"
		   "\n\t%d 		 A "
		   "\n\t%d 		 E "
		   "\n\t%d		 I "
		   "\n\t%d 		 O "
		   "\n\t%d 		 U ", a, e, i, o, u);
}
