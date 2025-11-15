#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMVEC 20

void CargaVector(int vec[]);
void InvertirVector(int vec[], int invertido[]);
void MostrarVector(int vec[]);

int main() {
    int Vec1[TAMVEC];
    int VecInvertido[TAMVEC];

    CargaVector(Vec1);
    InvertirVector(Vec1, VecInvertido);

    printf("Vector original:\n");
    MostrarVector(Vec1);

    printf("\nVector invertido:\n");
    MostrarVector(VecInvertido);

    return 0;
}

void CargaVector(int vec[]) {
    srand(time(NULL));
    for (int i = 0; i < TAMVEC; i++) {
        vec[i] = rand() % 71 + 20; 
    }
}

void InvertirVector(int vec[], int invertido[]) {
    for (int i = 0; i < TAMVEC; i++) {
        invertido[i] = vec[TAMVEC - 1 - i];
    }
}

void MostrarVector(int vec[]) {
    for (int i = 0; i < TAMVEC; i++) {
        printf("vec[%d] = %d\n", i, vec[i]);
    }
}
