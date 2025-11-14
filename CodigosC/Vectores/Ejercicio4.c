#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMVEC 100

void cargarVector(int vec[]);
void buscarMaxMin(int vec[], int *max, int *min);
void mostrarPosMax(int vec[], int max);

int main() {
	int vec[TAMVEC];
	int max, min;

	cargarVector(vec);
	buscarMaxMin(vec, &max, &min);

	printf("Valor maximo: %d\n", max);
	printf("Valor minimo: %d\n", min);

	mostrarPosMax(vec, max);

	return 0;
}

void cargarVector(int vec[]) {
	srand(time(NULL));
	for (int i = 0; i < TAMVEC; i++) {
		vec[i] = rand() % 31 + 10;
		printf("vec[%d] = %d\n", i, vec[i]);
	}
}

void buscarMaxMin(int vec[], int *max, int *min) {
	*max = vec[0];
	*min = vec[0];

	for (int i = 1; i < TAMVEC; i++) {
		if (vec[i] > *max)
			*max = vec[i];
		if (vec[i] < *min)
			*min = vec[i];
	}
}

void mostrarPosMax(int vec[], int max) {
	printf("El maximo se repite en las posiciones:\n");

	for (int i = 0; i < TAMVEC; i++) {
		if (vec[i] == max)
			printf("%d\n", i);
	}
}
