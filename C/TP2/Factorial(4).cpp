#include <stdio.h>

int main(int argc, char *argv[])
{
	
	int Resultado=0;
	int Factorial;
	
	
	printf("Introduzca Numero para calcular el factorial ...: ");
	scanf("%d", &Factorial);
	
	Resultado = 1;
	while(Factorial > 1) {
		Resultado *= Factorial;
		printf(" %d x",Factorial);
		Factorial--;
	}
	printf(" 1 = %d\n\n",Resultado);
	
	return 0;
}
