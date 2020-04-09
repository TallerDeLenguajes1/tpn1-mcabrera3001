//============================================================================
// Name        : tp2.cpp
// Author      : Mauro Cabrera
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<stdlib.h>
#include <cstdlib>
#include<time.h>
using namespace std;

int main() {
	srand(time(NULL));
	int f,c;
	int *pMatriz, *vecDinam;
	int N = 15;
	int M = 5 + rand()%10;
	int mt[N][M];
	int cont = 0;

	pMatriz = &mt[0][0];
	vecDinam = new int(N);
	for(f = 0;f<N; f++){
		cont = 0;
		for(c = 0;c < M; c++) {
			*(pMatriz)= 100 + rand()%(1000-100);
			if((*(pMatriz)%2 == 0)){
				cont++;
			}
			printf("  %2d  ", *(pMatriz));
			pMatriz++;
		}

		printf("|La cantidad de numeros pares en la fila %d es: %d", f+1, cont );
		*(vecDinam+f) = cont;  //esta linea es lo que da error. Porque si la comento, el programa se ejecuta pero me muestra
		printf("\n");			//valores erroneos.

	}

	for(int i = 0; i<N;i++) {
		printf(" %d ", *(vecDinam));
		vecDinam++;
	}
	return 0;
}
