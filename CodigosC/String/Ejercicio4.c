#include <stdio.h>

void Invertir(char origen[], char destino[]);  

int main() {
    char cadena[100], invertida[100];
    
    printf("Hemos de presentar el magnifico INVERTIDOR\n");
    printf("Este es mi mayor truco\n");
    printf("Ingrese un texto para continuar con el truco: ");
    fgets(cadena, 100, stdin);

    int i = 0;
    while (cadena[i] != '\0') {
        if (cadena[i] == '\n') {
            cadena[i] = '\0';
            break;
        }
        i++;
    }

    Invertir(cadena, invertida);

    printf("Cadena invertida: %s\n", invertida);

    return 0;
}

void Invertir(char origen[], char destino[]) {
    int largo = 0;
    while (origen[largo] != '\0')
        largo++;

    int i = 0;
    while (largo > 0) {
        destino[i] = origen[largo - 1];
        i++;
        largo--;
    }
    destino[i] = '\0';
}
