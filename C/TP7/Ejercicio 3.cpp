#include <stdio.h>
#include <math.h>
float distancia(float&, float&, float&, float&);

int main(){
	float x1, x2;
	float y1, y2;
	
	printf("\nIngrese dos puntos");
	printf("\nPunto 1....:");
	scanf("%f", &x1);
	scanf("%f", &y1);
	printf("\nPunto 2....:");
	scanf("%f", &x2);
	scanf("%f", &y2);
	
	distancia(x1,y1,x2,y2);
}
	float distancia(float& a, float& b, float& c, float& d){
		float dist;
		float z, w;
		z= a-b;
		w= c-d;
		dist = sqrt((pow(z,2)+(pow (w,2))));
		printf("\nLa distancia es de %f", dist );
		return dist;
	}	
