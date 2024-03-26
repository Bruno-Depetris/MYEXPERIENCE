#include<stdio.h>


int main (void) 
{
	int a=0,b=0;
	
	printf("\n\t Ingrese el primer numero: ");
	scanf("%d",&a);
	printf("\n\t Ingrese el segundo numero: ");
	scanf("%d",&b);
	

	if(a>b)
		printf("\n\n\tEl numero mayor es: %d",a);
	else
		if(b>a)
		printf("\n\n\tEl mayor es: %d",b);
		else
			printf("Son iguales");
		
}
