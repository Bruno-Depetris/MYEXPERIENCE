#include <stdio.h>
int main(){
	char pal[100];
	char *pun=pal;
	int con=0;
	printf("Ingrese una cadena: "); 
	gets(pal);
	while (*pun!=0){
		if (*pun=='a' || *pun=='A' || *pun=='e' || *pun=='E' || *pun=='i' || *pun=='I' || *pun=='o' || *pun=='O'
		  || *pun=='u' || *pun=='U')
		con++;
	pun++;
	}
	printf("\nEl numero de vocales es de: %d\n", con);
}
