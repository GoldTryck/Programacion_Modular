#include <stdio.h>
void asignvalor();
void sumamatriz();
int main()
{
	printf("\n\t\tPROGRAMA SUMA DE MATRICES.\n");
	char rep;
	int t;
	float a[10][10],b[10][10],c[10][10];
	do{
		printf("\tIngrese la magnitud de las matrices cuadradas a y b: ");
		scanf("%d",&t);
		printf("\n");
		asignvalor(a,b,t);
		sumamatriz(a,b,c,t);
		printf("\n\tPra realizar otra suma de matrices [y] para salir [n]");
		scanf(" %c",&rep);
	}while(rep!='n');
	return 0;
}
void asignvalor(float a[][10],float b[][10],int t)
{
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<t;j++)
		{
			printf("Ingrese el valor [%d][%d] para matriz a: ",i,j);
			scanf("%f",&a[i][j]);
			printf("Ingrese el valor [%d][%d] para matriz b: ",i,j);
			scanf("%f",&b[i][j]);
		}
	}
}
void sumamatriz(float a[][10],float b[][10],float c[][10],int t)
{
	printf("La suma de las matrices a y b es:\n");
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<t;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%.2f\t",c[i][j]);
		}
			printf("\n");
	}
}

