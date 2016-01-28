#include <stdlib.h>
#include <stdio.h>
#define N 10

typedef struct{
	char *nombre;
	char *apellido;
	int tel;
	int cama;
} paciente;

void menu(paciente *, int *);
void incorporarPaciente(paciente *, int *);

int main(){

	int *camas = (int *) malloc(N * sizeof(int));
	paciente *pacientes = (paciente *) malloc(N * sizeof(int));


	free(camas);	
	return 0;
}

void menu(paciente * p, int * c){

	int opcion;

	do{

		printf("\n\nElija una de las siguientes opciones\n\n");
		printf("1.- Incorporar paciente\n");

		scanf("%d", &opcion);
		
		if(opcion == 1){
			
		else if(opcion == 0)
			printf("Adios\n");
		else
			printf("\nOpcion Invalida\n");

	} while(opcion != 0);
	
}

void incorporarPaciente(paciente *p, int *c){
	
	int n;
	
	printf("\nCuantos pacientes desea incorporar?\n");
	scanf("%d", &n);

	pPuntero = p;
	cPuntero = c;

	
}
