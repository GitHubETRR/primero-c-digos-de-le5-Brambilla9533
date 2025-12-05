#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAMVEC 50

void aleatorio(int []);
int valores (int []);

int main() {
	int vec[TAMVEC];

	aleatorio(vec);
	int rep = valores(vec);

	printf("El mayor valor del vector se repite %d veces.\n", rep);

	return 0;
}

void aleatorio(int vec[]) {
	srand(time(NULL));
	for(int i=0; i < TAMVEC; i++) {
		vec[i] = rand()%11 + 10;
		printf("Vector[%d] = %d\n", i, vec[i]);
	}
}

int valores (int vec[]) {
	int mayor = vec[0];
	int contador = 1;

	for(int i = 1; i < TAMVEC; i++) {
		if(vec[i] > mayor) {
			mayor = vec[i];
			contador = 1;
		}
		else if(vec[i] == mayor) {
			contador++;
		}
	}

	printf("\nEl mayor valor es: %d\n", mayor);
	return contador;
}
