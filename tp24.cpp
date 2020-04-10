
#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include<time.h>

using namespace std;

typedef struct {
	int velocidad;
	int anio;
	int cantidad;
	char *tipo_cpu;
} compu;

//Prototipo de Funciones

compu caracPC (compu caracteristicas);
void cargarPC (compu *punt_pc, int n, char procesador);
void mostrarPC(compu *punt_pc, int n);
void viejaPC (compu *punt_pc, int n);
void velocidadPC(compu *punt_pc, int n);

compu PC, *punt_PC;

int main() {
	setvbuf(stdout,NULL,_IONBF,0);
	srand(time(NULL));

	char tipos[6][10] = {"Intel",
						 "AMD",
						 "Celeron",
						 "Athlon",
						 "Core",
						 "Pentium"};

	//punt_PC->tipo_cpu = &tipos[0][0];
	int cant ;
	printf("Digite la cantidad de computadoras que desea ingresar: ");
	scanf("%d", &cant);

	punt_PC = new compu[cant];

	cargarPC(punt_PC, cant, tipos[6][10]);
	mostrarPC(punt_PC, cant);
	viejaPC(punt_PC, cant);
	velocidadPC(punt_PC, cant);
	return 0;
}

compu caracPC (compu caract) {
	caract.velocidad = 1 + rand()%(3);
	caract.anio = 2000 + rand() % (2017-2000);
	caract.cantidad  =  1 + rand()%(4);
	return caract;
}

void cargarPC (compu *punt_pc, int n, char procesador) {
	int i;
		for (i=0; i<n; i++) {
		punt_pc->velocidad = 1 + rand()%(10);
		punt_pc->anio = 2000 + rand() % (2017-2000);
		punt_pc->cantidad =  1 + rand()%(4);

		punt_pc++;
	}
}

void mostrarPC (compu *punt_pc, int n) {
	int i;

	for (i=0; i<n; i++) {
		printf("\t\nComputadora nº %d\t\n", i+1);
		printf("Velocidad del Procesador: %d GHZ\n", punt_pc->velocidad);
		printf("Anio de Fabricacion: Anio %d\n", punt_pc->anio);
		printf("Cantidad de Nucleos: %d Nucleos\n", punt_pc->cantidad);

		/*for(i=0; i<6;i++) {
					if(fila == i) {
						for(j=0; j<10;j++) {
							printf("%s", punt_pc->tipo_cpu);
							punt_pc++;
						}
					}
				}*/

		punt_pc++;
	}
}

void viejaPC (compu *punt_pc, int n) {
	int aux = 2500;
	int i;
	for (i=0; i<n; i++) {
		if(punt_pc->anio<aux ) {
			aux = punt_pc->anio;
		}
		punt_pc++;
	}
	printf("LA MAS VIEJA TIENE: %d\n", aux);
}

void velocidadPC(compu *punt_pc, int n) {
	int aux = 0;
		int i;
		for (i=0; i<n; i++) {
			if(punt_pc->velocidad>aux ) {
				aux = punt_pc->velocidad;
			}
			punt_pc++;
		}
		printf("La de mayor velocidad tiene: %d GHZ", aux);
}

