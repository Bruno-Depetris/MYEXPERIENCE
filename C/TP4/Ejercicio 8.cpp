#include<stdio.h>
#include<math.h>

int main(){
	int A[36],x;     
	float S[36],y, PI;   
	int i,k=0;    
	PI = 3.14159;
	
	printf("Angulo  valores de Y\n");
	for(x=10;x<=360;x=x+10){      
		y=sin(x*(PI)/180);          
		i=0+k;                          
		A[i]=x;                  
		S[i]=y;                
		printf("%i:      %f \n",A[i],S[i]);  
		k++;                
	}
	
}
	
