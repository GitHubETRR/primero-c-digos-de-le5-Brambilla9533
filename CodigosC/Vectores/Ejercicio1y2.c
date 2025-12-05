#include <stdio.h>
#define TAMVEC 10
int sumatoria (int [],int);
int promedio ();

int main()
{

    int vec [TAMVEC];
    int suma;
    suma=sumatoria(vec,TAMVEC);
    promedio(suma,TAMVEC);
    return 0;
}

int sumatoria (int vec[], int tam)
{

    printf("Buen dia, gracias por acceder a este programa\n");
    printf("En esta parte tenes que elegir los valores del vector\n");
    for(int i=0;i<tam;i++){
        printf("numero %d\n",i);
        scanf("%d",&vec[i]);
    }
    float resultado=0;
    printf("Aqui se muestra la suma del todos los valores del vector\n");
    for(int i=0;i<tam;i++){
        resultado += vec[i];
    }
    printf("%f\n",resultado);
    return resultado;
    
}

int promedio (int suma,int tam)
{
    float Prom = suma/TAMVEC;
    printf("promedio %.3f\n", Prom);
}