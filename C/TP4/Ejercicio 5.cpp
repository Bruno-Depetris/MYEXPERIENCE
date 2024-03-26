#include <stdio.h>
#include <math.h>

int main(){
	int numeros[10];
	int i, d, x;
	printf("Ingrese 10 numeros\n");
	
	for(x=0;x<=10;x++){
		printf(":");
		scanf("%i", &numeros[x]);
	}
	for(x=0;x<=10;x++){
		for(i=0,d=1;d<=10;d++,i++){
			if(numeros[i]<numeros[d]){
				int temp = numeros [d];
				numeros[d] = numeros[i];
				numeros[i] = temp;
				
			}
		}
	}
	for(x=0;x<=10;x++){
		printf("\n%d",numeros[x]); 
	}
}
	
