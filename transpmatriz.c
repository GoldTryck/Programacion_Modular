#include <stdio.h>
void dimension();
void asignarvalor();
void transp();
int main()
{
	char rep;
	int filas,columnas;
	int a[10][10],b[10][10];
	printf("\n\t\tPROGRAMA PARA TRANSPONER MATRICES M*N DIMENSIONES.");
	do{
		dimension(&filas,&columnas);
		asignarvalor(a,filas,columnas);
		transp(a,b,filas,columnas);
		printf("\n\tDesea transponer otra matriz?\n");
		printf("\n\tPulse [y] para continuar o tecla [n] para salir.\n");
		scanf(" %c",&rep);
	}while(rep!='n');
	return 0;
}
void dimension(int *filas,int *columnas)
{
	printf("\nIngrese el numero de filas para la matriz A: ");
	scanf("%d",&*filas);
	printf("\nIngrese el numero de columnas para la matriz A: ");
	scanf("%d",&*columnas);
	printf("\n");
}
void asignarvalor(int a[][10],int filas,int columnas)
{
	for(int i=0;i<filas;i++)
	{
		for(int j=0;j<columnas;j++)
		{
			printf("Ingrese el valor [%d][%d] de la matirz A: ",i,j);
			scanf("%i",&a[i][j]);
		}
	}
	printf("La matriz A se definio como:\n");
	for(int i=0;i<filas;i++)
	{
		for(int j=0;j<columnas;j++)
		{
			printf("%d\t",a[i][j]);
		}
	printf("\n");
	}
}
void transp(int a[][10],int b[][10],int filas,int columnas)
{
	printf("La matriz At es igual a:\n");
	for(int i=0;i<columnas;i++)
	{
		for(int j=0;j<filas;j++)
		{
			b[i][j]=a[j][i];
			printf("%i\t",b[i][j]);
		}
			printf("\n");
	}
}

