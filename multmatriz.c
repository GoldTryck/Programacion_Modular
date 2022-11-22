#include <stdio.h>
#define M 100
void dimns(); void valores();
void mult(); void printmat();
int main()
{
	int a[M][M],b[M][M],c[M][M], t;
	char rep;
	printf("\n\t\tPROGRAMA PARA MULTIPLICACION DE MATRICES M*M DIMENSIONES\n\n");
	do{
		dimns(&t);
		valores(a,b,t);
		printmat(a,b,t);
		mult(a,b,c,t);
		printf("\n\tPara realizar nueva mult. de matrices [y] para salir [n]");
		scanf(" %c",&rep);
		printf("\n");
	}while(rep!='n');


	return 0;
}
void dimns(int *t)
{
	printf("\tDefina las dimensiones MxM de las matrices A y B: ");
	scanf("%d",&*t);
}
void valores(int a[][M],int b[][M], int t)
{
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<t;j++)
		{
			printf("Ingrese el valor de [%d][%d] en A: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<t;j++)
		{
			printf("Ingrese el valor de [%d][%d] en B: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
}
void mult(int a[][M],int b[][M],int c[][M],int t)
{
	printf("\n\nLa multiplicacion de A con B es:\n");

	for(int i=0;i<t;i++)//recorrido columnas
	{
		printf("\t");
		for(int j=0;j<t;j++)//recorrido renglones
		{
			int suma=0;
			for(int k=0;k<t;k++)
			{

				suma=suma+a[i][k]*b[k][j];
				c[i][j]=suma;
			
			}
		printf("%i\t",c[i][j]);
		}
	printf("\n");
	}
}
void printmat(int a[][M],int b[][M],int t)
{
	printf("La matriz A se definio como:\n");
	for(int i=0;i<t;i++)
	{
		printf("\t");
		for(int j=0;j<t;j++)
		{
			printf("%d",a[i][j]);
			printf("\t");
		}
	printf("\n");
	}
	printf("La matriz B se definio como:\n");
	for(int i=0;i<t;i++)
	{
		printf("\t");
		for(int j=0;j<t;j++)
		{
			printf("%i",b[i][j]);
			printf("\t");
		}
	printf("\n");
	}
}

