#include <stdio.h>
#include <string.h>
#define C 100
char comp(char*[100],char*[100]);
int main(){
	char* cad1[C], *cad2[C];
	
	printf("Introduce la primera cadena: \n");
	gets(*cad1);
	
	printf("Introduce la segunda cadena: \n");
	gets(*cad2);
	
	comp(cad1[C], cad2[C]);
}
char comp(char *a[], char *b[]){
	int comp;
	
	comp = strcmp(a, b);
	if (comp < 0) {
		printf("0");
	} else if(comp > 0) {
		printf("0");
	} else {
		printf("1");
	}
	
	return comp;
}
