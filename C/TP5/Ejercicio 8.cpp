#include <stdio.h>
#include <math.h>
float longitud(float L){
	float longitud;
	float PI=3.14159;
	
	
	longitud = 2*L*PI;
	
	
	return longitud;
}
	
float area(float A){
	float area;
	float PI=3.14159;
		
	area = PI*A*2;
		
		
	return area;
}
float volumen(float V){
	float volumen;
	float PI=3.14159;
		
	volumen = 4/3*PI*pow(V,3);
		
		
	return volumen;
	}
int main(){
	int opcion, opc;
	float radio1;
	printf("\n         OPCIONES "
		   "\n ==========================="
		   "\n 1.- Longitud de la circunferencia.......(Pulsa 1)"
		   "\n 2.- Area del círculo ...................(Pulsa 2)"
		   "\n 3.- Volumen de la esfera ...............(Pulsa 3)"
		   "\n 4.- Salir ..............................(Pulsa 4)"
		   "\n ==========================="
		   "\n OPCION): ");
	scanf("%i", &opcion);
	
	printf("Ingrese el Radio:\t");
	scanf("%f", &radio1);
	
	switch(opcion){
	case 1:
		printf("\nLa longitud es de..............: %f", longitud(radio1));
		break;
	case 2:
		printf("\nEl Area del círculo es de......: %f", area(radio1));
		break;
	case 3:
		printf("\nEl Volumen de la esfera es de: %f", volumen(radio1));
		break;
	case 4:
		break;
	}
	
	printf("\n\nDesea ingresar otra opcion??");
	printf("\n SI.......(pulse 1)"
		   "\n NO.......(pulse 2)"
		   "\n OPCION:");
	
	scanf("%i", &opc);
	switch (opc){
	case 1:
		printf("\n         OPCIONES "
			   "\n ==========================="
			   "\n 1.- Longitud de la circunferencia.......(Pulsa 1)"
			   "\n 2.- Area del círculo ...................(Pulsa 2)"
			   "\n 3.- Volumen de la esfera ...............(Pulsa 3)"
			   "\n 4.- Salir ..............................(Pulsa 4)"
			   "\n ==========================="
			   "\n OPCION): ");
		scanf("%i", &opcion);
		break;
	case 2:
		return 0;
		break;
		
	}
	if (opcion > 4){
		printf("!!ERROR¡¡"
			   "\nOpcion invalida");
	}
}
