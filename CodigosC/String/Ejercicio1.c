#include <stdio.h>

int Longitud(char texto[]);  

int main() {
    char cadena[100];
    
    printf("En esta pagina se le dira el largo de la oracion que escriba en la siguiente entrada\n");
    
    printf("Ingrese un texto: ");
    fgets(cadena, 100, stdin);

    int dimension = Longitud(cadena);

    printf("El largo de la cadena es: %d\n", dimension);

    return 0;
}

int Longitud(char texto[]) {
    int i = 0;
    while (texto[i] != '\0') {
        i++;
    }
    return i;
}
