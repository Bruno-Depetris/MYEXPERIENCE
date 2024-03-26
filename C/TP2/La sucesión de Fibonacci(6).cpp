#include <stdio.h>

int main()
{
	int Num, i=2, a=1, b=1, c=0;
	printf("\n\n\tIngrese su numero aqui: ");
	scanf("%d", & Num);
	if (Num == 0){
		printf(" La sucesión de Fibonacci de su Numero %d es: 0 \n", Num);
	}
	if (Num ==1){
		printf(" La sucesión de Fibonacci de su Numero %d es: 1 \n", Num);
	}
	if (Num == 2){
		printf(" La sucesión de Fibonacci de su Numero %d es: 1 1 \n", Num);
	}
	if (Num >=3){
		printf("%d %d ", a,b);
		do{
			c=a+b;
			a=b;
			b=c;
			printf("%d \n", c);
			i= i+1;
		}while(Num > i);
	}
	
	return 0;
}
