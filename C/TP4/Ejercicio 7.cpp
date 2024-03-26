#include <stdio.h>
int main(){
	int primos[20]{ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71};
	int i;
	for(i=0;i<20;i++){
		printf(",%i ", primos[i]);
	}
}
