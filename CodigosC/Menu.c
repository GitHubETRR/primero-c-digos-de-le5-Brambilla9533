#include <stdio.h>
#include <math.h>
#define CMAX 3
#define DIVISOR 2
#define CMIN 1
#define CMED 2

int Menu (void);
int CMIN2 (void);
int CMED2 (void);

int main()
{
	int Opcion;
	float numero;
	float vari1;
	do 
	{
		Opcion=Menu();
		
		switch(Opcion)
		{
    		case CMIN:
    			CMIN2 ();
    			break;
    
    		case CMED:
    			CMED2 ();
    			break;
	    }
    }
while(Opcion!=CMAX);
printf("Gracias por entrar a mi menu\n");
return 0;
}

int Menu (void) {
	int Opcion;
	do {
		printf("\nDebe elegir entre alguna de las siguientes opciones\n");
		printf("1/Divisibilidad de grado 2\n");
		printf("2/Verificador de cuadrado perfecto\n");
		printf("3/salir\n");
		scanf("%d",&Opcion);
	}
	while((Opcion<CMIN) || (Opcion>CMAX));
	return Opcion;
}

int CMIN2 (void)
{
	int vari1;
	int Valor1;
	int grado = 0;
	do
	{
		printf("Decime un numero positivo\n");
		scanf("%d",&vari1);
	}
	while(vari1<=0);

	for(float i=0; vari1!=1; i++)
	{
		vari1=vari1/2;
		grado = i+1;
	}
	printf ("el grado es %d",grado);
}
int CMED2 (void)
{
    int Perfecto;
	printf("Bienvenido al verificador de cuadrados perfectos\n");
	printf("Decime un numero\n");
	scanf("%d",&Perfecto);
	int Cperfecto1= (int)sqrt(Perfecto);
	float Cperfecto2= (float)sqrt(Perfecto);
	do
	{
		if (Cperfecto2>Cperfecto1)
		{
			printf("Este no es un cuadrado perfecto\n");
		}
		else if(Cperfecto2==Cperfecto1)
			printf("Este cuadrado es perfecto\n");
	}
	while (Cperfecto2<Cperfecto1);
}