#include <stdio.h>
void ingresardatos();void calculo();void bono();

int main()
{
	float tc[3];//tc[0] = horas laboradas, tc[1] = costo por hora de trabajo, tc[2] = calculo salario
	char rep='a';
	printf("\t\tCalculadora de salarios\n");
	while(rep!='n')
	{
	ingresardatos(tc);
	printf("\nEl salario mensual es: ");
	calculo(tc);
	bono(tc);
	printf("\n\n\tDesea realizar otro calculo de salarios: continuar[y] salir[n]: ");
	scanf(" %c",&rep);
	}
	return 0;
}
void ingresardatos(float tc[])
{
	printf("\nIngrese el numero de horas laboradas diarias: ");
	scanf("%f",&tc[0]);
	printf("\n");
	printf("Ingrese el costo por hora de trabajo: ");
	scanf("%f",&tc[1]);
	printf("\n");
}
void calculo(float tc[])
{
	float iva=0.16,retencion=0.12;
	tc[2]=tc[0]*tc[1];
	tc[2]=tc[2]+tc[2]*iva;
	tc[2]=tc[2]-tc[2]*retencion;
	tc[2]=tc[2]*20;
	printf("$%.2f MXN. ",tc[2]);
}
void bono(float tc[])
{
	float b=0.05;
	if(tc[2]<10000.00)
	{
		tc[2]=tc[2]+(tc[2]*b);
		printf("\nMas un bono de 05 porciento: $%.2f MXN.",tc[2]);
	}
}

