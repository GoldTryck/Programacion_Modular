#include <stdio.h>
void asignavalor();void area();void perimetro();
int main()
{
	char opc,rep;
	float b,h;
	printf("\tEste programa calcula area y perimetro de rectangulos\n\n");
	do
	{
		do
		{
		printf("\t\tSeleccione la letra de la operacion a realizar:\n\n");
		printf("\t\ta) Area del rectangulo.\n");
		printf("\t\tb) Perimetro del rectangulo.\n");
		printf(": ");
		scanf(" %c",&opc);
		if(opc=='a' || opc=='b')
		{
			if(opc=='a')
			{	
				asignavalor(&b,&h);
				area(&b,&h);
			}
			else
			{
				asignavalor(&b,&h);
				perimetro(&b,&h);
			}
		}
		}while(opc>'b' || opc<'a');
	
		printf("Para realizar otra operacion con rectangulos presione [y], para salir presione [n]");
		scanf(" %c",&rep);
		printf("\n");
		
	}while(rep!='n');
	return 0;
}
void asignavalor(float *base,float *altura)
{
	printf("\t\tIngrese las medidas del rectangulo\n\n");
	printf("medida de la base: ");
	scanf("%f",&*base);
	printf("\n");
	printf("medida de la altura: ");
	scanf("%f",&*altura);
	printf("\n");
}
void area(float *base,float *altura)
{
	float area=(*base)*(*altura);
	printf("El area del rectangulo es: %.2f",area);
	printf("\n\n");
}
void perimetro(float *base,float *altura)
{
	float p=*base*2+*altura*2;
	printf("El perimetro del rectangulo es: %.2f",p);
	printf("\n\n");
}

