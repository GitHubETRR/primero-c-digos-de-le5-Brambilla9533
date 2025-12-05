#include <stdio.h>
#include <ctype.h> 

void pasaMinuscula(char texto[]);  

int main() {
    char cadena[100];

    printf("bienvenido a la unica funcion que pasa de mayusculas a minusculas\n");
        
    printf("Ingrese un texto: ");
    fgets(cadena, 100, stdin);

    int i = 0;
    while (cadena[i] != '\0') {
        if (cadena[i] == '\n') {
            cadena[i] = '\0';
            break;
        }
        i++;
    }

    pasaMinuscula(cadena);  

    printf("Texto en minusculas: %s\n", cadena);

    return 0;
}

void pasaMinuscula(char texto[]) {
    int i = 0;
    while (texto[i] != '\0') {
        texto[i] = tolower(texto[i]);
        i++;
    }
}
