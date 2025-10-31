#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAMVEC 50

int aleatorio (int []);
int vec [TAMVEC]; 
int valores (int []);

int main(){
    int vec [TAMVEC];
    valores = vec [TAMVEC];
    return 0;
}

int aleatorio(int vec[]){
    srand(time(NULL));
    for(int i=0; i<TAMVEC;i++){
        vec [i]=rand()%(0+11)+10;
        printf("Vector [%d] = %d\n",i,vec[i]);
    }
}

int valores (int vec[]){
    printf("Valores vector\n");
    for(int i=0;i<TAMVEC;i++){
        printf("vector[%d]= %d\n",i,vec[i]);
    }
    return valores;
}
