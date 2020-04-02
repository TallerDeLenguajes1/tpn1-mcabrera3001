//============================================================================
// Name        : tp1_1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
using namespace std;

void cuadrado(int n) {
	n = n*n;
	printf("El cuadrado es: %d\n", n);
	printf("El contenido de la variable es: %d\n", n);
	printf("La direccion de memoria dee la variable es: %p\n", &n);
}

void invertir(int *punt_a, int *punt_b) {
	int aux;
	aux = *punt_a;
	*punt_a = *punt_b;
	*punt_b = aux;
}

void minMax (int *punt_a, int *punt_b) {

	if (*punt_a > *punt_b) {
		invertir  (punt_a, punt_b);

	} else if (*punt_a < *punt_b) {
		printf("Esta ordenado correctamente\n");
	} else {
		printf("Ambos son iguales\n");
	}
}

void menu () {
	int opcion;

	do {
		printf("\n\t...Menu...\n\n");
		printf("1. Determinar el cuadrado de un numero\n");
		printf("2. Invertir el valor de dos variables\n");
		printf("3. Ordenar dos variables de menor a mayor\n");
		printf("4. Salir\n");

		printf("Digite una opcion: \n");
		scanf("%d", &opcion);

		switch (opcion){
			case 1: {
				int x;
				printf("Digite un numero: ");
				scanf("%d", &x);
				cuadrado(x);
				break;
			}

			case 2: {
				int a;
				int b;
				printf("Digite el primer numero: ");
				scanf("%d", &a);
				printf("Digite el segundo numero: ");
				scanf("%d", &b);

				int *punt_a = &a;
				int *punt_b = &b;

				invertir(punt_a, punt_b);

				printf("El valor de la primera variable es: %d\n", a);
				printf("El valor de la segunda variable es: %d\n", b);
				break;
			}

			case 3: {
				int a;
				int b;
				printf("Digite el primer numero: ");
				scanf("%d", &a);
				printf("Digite el segundo numero: ");
				scanf("%d", &b);

				int *punt_a = &a;
				int *punt_b = &b;
				minMax (punt_a, punt_b);
				printf("El valor de la primera variable es: %d\n", a);
				printf("El valor de la segunda variable es: %d\n", b);
				break;
			}

		}

	} while (opcion !=4);
}


int main() {
	setvbuf(stdout,NULL,_IONBF,0);


	menu();

}


