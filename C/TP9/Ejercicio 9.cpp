#include <stdio.h>
#include <string.h>

struct usuario {
	char nombre[80];
	char apellido[80];
	char documento[20];
	char direccion[80];
	char localidad[80];
	char fechanac[20];
	char nusuario[40];
	char clave[30];
	
};

typedef struct usuario persona;



int separar(char cadena[],persona *pers){
	int k=0, j=0;		
	
	while(cadena[k]!=','){
		(*pers).nombre[j]=cadena[k];
		k++;
		j++;
	}
	(*pers).nombre[j]=0;

	
	j=0;
	k++;
	while(cadena[k]!=','){
		(*pers).apellido[j]=cadena[k];
		k++;
		j++;
	}
	(*pers).apellido[j]=0;
	j=0;
	k++;
	while(cadena[k]!=','){
		(*pers).documento[j]=cadena[k];
		k++;
		j++;
	}
	(*pers).documento[j]=0;
		
	
	j=0;
	k++;
	while(cadena[k]!=','){
		(*pers).direccion[j]=cadena[k];
		k++;
		j++;
	}
	(*pers).direccion[j]=0;	
	
	j=0;
	k++;
	while(cadena[k]!=','){
		(*pers).localidad[j]=cadena[k];
		k++;
		j++;
	}
	(*pers).localidad[j]=0;
	
	j=0;
	k++;
	while(cadena[k]!=','){
		(*pers).fechanac[j]=cadena[k];
		k++;
		j++;
	}
	(*pers).fechanac[j]=0;	
	
	j=0;
	k++;
	while(cadena[k]!=','){
		(*pers).nusuario[j]=cadena[k];
		k++;
		j++;
	}
	(*pers).nusuario[j]=0;		
	
	j=0;
	k++;
	while(cadena[k]!=','){
		(*pers).clave[j]=cadena[k];
		k++;
		j++;
	}
	(*pers).clave[j]=0;

	return(0);	
}
	
	
	int main(void){
		
		char datoleido[512];
		persona p[100];
		
		int k=0;
		
		FILE *fusuarios;
		
		char nombre_usuario[40];
		char clave_usuario[40];
		
		int tama_arreglo;
		
		fusuarios=fopen("user.txt","r");
		
		if (fusuarios==NULL)
			printf("\nERROR");
		else{
			while (feof(fusuarios)==0){ 
				fgets (datoleido, 512, fusuarios);
				separar(datoleido,&p[k]);
				
				
				k++;
				tama_arreglo=k;
			}
		}
		fclose(fusuarios);
		
		printf("Ingrese nombre de usuario\n");
		gets(nombre_usuario);
		printf("Ingrese contrase�a\n");
		gets(clave_usuario);
		
		for(k=0; k< tama_arreglo; k++){
			
			if( !strcmp(p[k].nusuario,nombre_usuario)){
				if (!strcmp(p[k].clave,clave_usuario)){
					printf("%s\n",p[k].nombre);
					printf("%s\n",p[k].apellido);
					printf("%s\n",p[k].documento);
					printf("%s\n",p[k].direccion);
					printf("%s\n",p[k].localidad);
					printf("%s\n",p[k].fechanac);
					
					break;
					

				}
			}
		}
		for(k=0; k< tama_arreglo; k++){
			if(p[k].nusuario != nombre_usuario){
				if (p[k].clave != clave_usuario){
					printf("Nombre o Contrase�a incorrectos");
					
					break;
				}
			}
		}
		
		
		return (0);	
	}
		
