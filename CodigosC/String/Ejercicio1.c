#include <stdio.h>

int Dimension(char texto[]);  

int main() {
    char cadena[100];

    printf("Ingrese un texto: ");
    fgets(cadena, 100, stdin);

    int largo = Dimension(cadena);

    printf("El largo de la cadena es: %d\n", largo);

    return 0;
}

int Dimension(char texto[]) {
    int i = 0;
    while (texto[i] != '\0') {
        i++;
    }
    return i;
}
