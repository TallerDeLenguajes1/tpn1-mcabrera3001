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

int main() {
	int var = 100;
	int *pVar;

	pVar = &var;

	printf("El contenido del puntero es: %d\n", *pVar);
	printf("La direccion de memoria almacenada por el puntero es: %p\n", pVar);
	printf("La direccion de memoria de la variable es: %p\n", &var);
	printf("La direccion de memoria del putenro es: %p\n", &pVar);
	printf("Tamaño de memoria utilizado: %d", sizeof(var));


}
