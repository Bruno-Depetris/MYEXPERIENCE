#include <stdio.h>
#include <string.h>
#define C 100
int cal(char*,char*);

int main(){
	char a[C], b[C];
	
	printf("Introduce la primera cadena: \n");
	gets(a);
	
	printf("Introduce la segunda cadena: \n");
	gets(b);
	cal(a,b);
}
int cal(char cad1[ ], char cad2[ ]){
	int ret;
	ret = strcmp(cad1, cad2);
	if (ret < 0) {
		printf("0");
	} else if(ret > 0) {
		printf("0");
	} else {
		printf("1");
	}
	
	return ret;
}
