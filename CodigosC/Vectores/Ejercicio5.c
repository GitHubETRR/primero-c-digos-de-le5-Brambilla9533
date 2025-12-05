#include <stdio.h>

#define TAMVEC 3

void cargarVector(int vec[]);
int productoEscalar(int Vec1[], int Vec2[]);

int main() {
	int Vec1[TAMVEC];
	int Vec2[TAMVEC];
	int resultado;
	
	printf("Estos ya no es un truco, es pura matemáticas señores\n\n");

	printf("Cargar valores para Vec1:\n");
	cargarVector(Vec1);

	printf("\nCargar valores para Vec2:\n");
	cargarVector(Vec2);

	resultado = productoEscalar(Vec1, Vec2);

	printf("\nEl producto escalar entre Vec1 y Vec2 es: %d\n", resultado);

	return 0;
}

void cargarVector(int vec[]) {
	for (int i = 0; i < TAMVEC; i++) {
		printf("vec[%d] = ", i);
		scanf("%d", &vec[i]);
	}
}

int productoEscalar(int Vec1[], int Vec2[]) {
	int suma = 0;
	for (int i = 0; i < TAMVEC; i++) {
		suma += Vec1[i] * Vec2[i];
	}
	return suma;
}
