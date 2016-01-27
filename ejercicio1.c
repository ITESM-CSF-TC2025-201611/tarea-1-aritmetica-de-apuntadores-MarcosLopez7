#include <stdio.h>
#include <stdlib.h>
#define N 100
#define L 25

int barcos;

typedef struct{
        char *nombre;
        char *apellido;
        int edad;
	char *rol;
} persona;

typedef struct{
	char *nombre;
	int eslora;
	int manga;
	int max_tripulantes;
	int tripulantes;
	persona *personas;
	persona propietario;
} embarcacion;

void menu(embarcacion *);
void agregarBarco(embarcacion *);
void agregarTripulante(embarcacion *);
void destructor(embarcacion *);
void destructorPersonas(persona *);

int main(){
	barcos = 0;	

	embarcacion *embarcaciones = (embarcacion *) malloc(N * L * L * sizeof(embarcaciones));
	menu(embarcaciones);
	
	destructor(embarcaciones);
	return 0;
}

void menu(embarcacion *e){

	int opcion;

	do{
		printf("\nQue deseas hacer?\n\n");
  		printf("1.- Agregar barco\n");
		printf("2.- Agregar tripulantes\n");
		printf("0.- Salir\n");		

		scanf("%d", &opcion);

		if(opcion == 1){
			agregarBarco(e);
        	} else if(opcion == 2){ 

		}
		else if(opcion == 0){
                	printf("Adios\n");
        	} else{ 
                	printf("Opcion invalida");
        	}

	}while(opcion != 0);
	
}

void agregarBarco(embarcacion *e){
	
	int n, i;
	embarcacion *ePuntero = e;

	printf("\nDime el numero de embarcaciones a incorporar\n");
	scanf("%d", &n);		

	for(i = 0; i < n; ++i){
		embarcacion temp;
		printf("\nDime el nombre de la embarcacion\n");
		temp.nombre = (char *) malloc(L * sizeof(char *));
		scanf("%s", temp.nombre);
		printf("\nDime la longitud de la eslora\n");
		scanf("%d", &temp.eslora);
		printf("\nDime la longitud de la manga\n");
		scanf("%d", &temp.manga);
		printf("\nDime el numero maximo de tripulantes\n");		
		scanf("%d", &temp.max_tripulantes);
		printf("\nDime el nombre del propietario, separa nombre apellido con enter\n");
		temp.propietario.nombre = (char *) malloc(L * sizeof(char *));
		temp.propietario.apellido = (char *) malloc(L * sizeof(char *));
		scanf("%s", temp.propietario.nombre);
		scanf("%s", temp.propietario.apellido);
		printf("\nDime la edad del propietario\n");
		scanf("%d", &temp.propietario.edad);
		temp.propietario.rol = "Propietario";
		temp.personas = (persona *) malloc(temp.max_tripulantes * sizeof(persona));
		temp.tripulantes = 0;
		*ePuntero = temp;
		ePuntero++;
		barcos++;		
	}	
}

void agregarTripulante(embarcacion * e){
	
	int disponible = 0;
	
	while(barcos > (ePuntero - e)){
        }
	
}

void destructor(embarcacion *e){
	embarcacion *ePuntero = e;	

	while(barcos > (ePuntero - e)){
		printf("%d\n", sizeof(e));	
		free((*ePuntero).propietario.nombre);	
		free((*ePuntero).propietario.apellido);
		//destructorPersonas((*ePuntero).personas);
		ePuntero++;		
	}

	free(e);	
}

void destructorPersonas(persona *p){
	persona *pPuntero = p;
			
	while(sizeof(p) > (pPuntero - p)){
		free((*pPuntero).nombre);
		free((*pPuntero).apellido);
		free((*pPuntero).rol);
		pPuntero++;	
	}

	free(p);
}
