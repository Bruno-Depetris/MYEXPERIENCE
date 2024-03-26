#include <stdio.h>
#include <math.h>
int descuento(int precio, int porcentaje){
	int cantidad;
	float total, descuento;
	printf("Cantidad:");
	scanf("%i", &cantidad);
	
	total = cantidad * precio;
	
	printf("Precio total:%10.2f", total);
	
	descuento = (total * porcentaje) / 100;
	
	printf("\nCon el Descuento del %% %i = %10.3f", porcentaje, descuento); 
	
	return cantidad;
}
int main(){
	float numero;
	int opcion;
	
	printf("\n         PRODUCTOS "
		"\n ==========================="
		"\n 1.- Pantalon .......(Pulsa 1)DESCUENTO %%20"
		"\n 2.- Zapatillas .....(Pulsa 2)DESCUENTO %%15"
		"\n 3.- Remeras ........(Pulsa 3)DESCUENTO %%30"
		"\n 4.- Salir ..........(Pulsa 4)"
		"\n ==========================="
		"\n OPCION): ");
	scanf("%i", &opcion);
	
	switch(opcion){
	case 1:
		printf("\nPrecio de los Pantalones: ");
		scanf("%f", &numero);
		descuento( numero, 20 );
		break;
	case 2:
		printf("\nPrecio de las Zapatillas: ");
		scanf("%f", &numero);
		descuento( numero, 15 );
		break;
	case 3:
		printf("\nPrecio de las Remeras: ");
		scanf("%f", &numero);
		descuento( numero, 30 );
		break;
	case 4:
		break;
	}
	
	if (opcion > 4){
		printf("!!ERROR¡¡"
			   "\nVuelva a ingresar una opcion");
		return 0;
	}

}
