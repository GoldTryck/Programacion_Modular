#include <stdio.h>
#include <math.h>
void selectsys();void define();void ctok();void ktof();void ftoc();
int main()
{
	char sys, rep;
	float temp;
	printf("\t\tEste programa realiza conversion de temperatura entre sistemas Celcius Farenheit y Kelvin.\n");
	do{
		do{
		printf("\n\tSelecccione la operacion a realizar: ");
		selectsys(&sys);
		}while(sys<'a' || sys>'f');
		define(&temp,&sys);
		switch (sys)
		{
			case 'a':
				ctok(&temp);
				printf("\nLa temperatura en Kelvin es: %.2f",temp);
				printf("\n");
				break;
			case 'b':
				ctok(&temp);
				ktof(&temp);
				printf("\nLa temperatura en Farenheit es: %.2f",temp);
				printf("\n");
				break;
			case 'c':
				ktof(&temp);
				ftoc(&temp);
				printf("\nLa temperatura en Celcius es: %.2f",temp);
				printf("\n");
				break;
			case 'd':
				ktof(&temp);
				printf("\nLa temperatura en Farenheit es: %.2f",temp);
				printf("\n");
				break;
			case 'e':
				ftoc(&temp);
				printf("\nLa temperatura en Celcius es: %.2f",temp);
				printf("\n");
				break;
			case 'f':
				ftoc(&temp);
				ctok(&temp);
				printf("\nLa temperatura en Kelvin es: %.2f",temp);
				printf("\n");
				break;
		}
		printf("\n\n\tPara realizar otra conversion de teperatura presine [y] para salir presione [n]");
		scanf(" %c",&rep);
	}while(rep!='n');
	return 0;
}
void selectsys(char *sys)
{
	printf("\n\n");
	printf("a)Convertir Celcius a Kelvin.\n");
	printf("b)Convertir Celcius a Farenheit.\n");
	printf("c)Convertir Kelvin a Celcius.\n");
	printf("d)Convertir Kelvin a Farenheit.\n");
	printf("e)Convertir Farenheit a Celcius.\n");
	printf("f)Convertir Farenheit a Kelvin.\n");
	scanf(" %c",&*sys);
	if(*sys<'a' || *sys>'f') printf("\nERROR. Ingrese una opcion valida.\n");
}
void define(float *temp,char *sys)
{
	if(*sys=='a' || *sys=='b')
	{
		printf("Ingrese temperatura en Celcius a convertir: ");
	}
	if(*sys=='c' || *sys=='d')
	{
		printf("Ingrese temperatura en Kelvin a convertir: ");	
	}
	if(*sys=='e' || *sys=='f')
	{
		printf("Ingrese temperatura en Farenheit a convertir: ");	
	}
	scanf("%f",&*temp);
}
void ctok(float *temp)
{
	*temp=*temp+273.15;
}
void ktof(float *temp)
{
	*temp=(*temp-273.15)*9/5+32;
}
void ftoc(float *temp)
{
	*temp=(*temp-32)*5/9;
}

