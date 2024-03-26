#include<stdio.h>
#include<math.h>

int main(){
	int A[36],x;     
	float S[36],y, PI; 
	float P[36];
	int i,k=0;    
	PI = 3.14159;
	
	printf("Angulo  valores de Y\n");
	for(x=10;x<=360;x=x+10){      
		y=sin(x*(PI)/180);          
		i=0+k;                          
		A[i]=x;                  
		S[i]=y;
		P[i]=(S[i]+(S[i]+1)+(S[i]+2))/3;
		printf("%i:      %f        %f\n",A[i],S[i],P[i]);  
		k++;                
	}
	
}
