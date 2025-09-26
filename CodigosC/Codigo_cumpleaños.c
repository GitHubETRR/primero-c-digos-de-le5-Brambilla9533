#include <stdio.h>

int main()
#define DIAMAX 31
#define MESMAX 12
{
    int anioNac, mesNac, diaNac;
    int anioAc, mesAc, diaAc;
    int edad;
    
    printf("Hola, hoy voy a hacer magia\n");
    printf("voy a adivinar tu edad con todos tus datos\n");
    
    do{
        printf("decime tu dia de nacimiento\n");
        scanf("%d",&diaNac);
    }
    while((diaNac<=0) || (diaNac> DIAMAX));
    
    do{
        printf("decime tu mes de nacimiento\n");
        scanf("%d",&mesNac);
    }
    while((mesNac<=0) || (mesNac> MESMAX));
    
    printf("decime tu año de nacimiento\n");
    scanf("%d",&anioNac);
    
    printf("decime el año actual\n");
    scanf("%d",&anioAc);
    
    do{
        printf("decime el mes actual\n");
        scanf("%d",&mesAc);
    }
    while((mesAc<=0) || (mesAc> MESMAX));
     
    do{
        printf("decime el dia actual\n");
        scanf("%d",&diaAc);
    }
    while((diaAc<=0) || (diaAc> DIAMAX));
    
    edad=anioAc-anioNac;
    
    
    if((mesNac>=mesAc) && (diaNac>diaAc)){
        printf("tu edad es %d",--edad);
    }
    else if ((mesNac>mesAc) && (diaNac<diaAc)){ 
        printf("tu edad es %d \n",--edad);
    }
    else {
        printf("tu edad es %d \n",edad);
    }
    printf("    \n");
    printf("Gracias por visitar la tienda de magia\n");
    
    return 0;
}
