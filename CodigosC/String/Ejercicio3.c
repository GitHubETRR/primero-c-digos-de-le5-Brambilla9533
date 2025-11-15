#include <stdio.h>
#include <ctype.h>   

void pasaMinuscula(char texto[]);
int vocales(char texto[]);   

int main() {
    char cadena[100];

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

    int cantVocales = vocales(cadena);

    printf("Texto en minuscula: %s\n", cadena);
    printf("Cantidad de vocales: %d\n", cantVocales);

    return 0;
}

void pasaMinuscula(char texto[]) {
    int i = 0;
    while (texto[i] != '\0') {
        texto[i] = tolower(texto[i]);
        i++;
    }
}

int vocales(char texto[]) {
    int i = 0, contador = 0;
    while (texto[i] != '\0') {
        if (texto[i]=='a' || texto[i]=='e' || texto[i]=='i' || texto[i]=='o' || texto[i]=='u')
            contador++;
        i++;
    }
    return contador;
}
