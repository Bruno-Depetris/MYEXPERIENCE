#include <stdio.h>
#include <math.h>
float valxh(float x, float y){
	float valxh;
	valxh = x * y;
	return valxh;
}
float aumento(float q, float w){
	float aumento;
	float sueldo;
	sueldo = q * w;
	aumento = sueldo * 2;
	return aumento;
}
int main(){
	float tarifa, horas;
	
	printf("Ingrese cantidad de horas trabajadas y la tarifa\n");
	printf("horas............:");
	scanf("%f", &horas);
	printf("tarifa por hora..:");
	scanf("%f", &tarifa);
	
	if(horas<41){
		printf("El sueldo es de: %10.5f", valxh(horas, tarifa));
	}
	else{
		printf("Trabajo mas de 40 horas, el sueldo es de: %10.5f", aumento(horas, tarifa));
	}
}
