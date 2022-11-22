#include <stdio.h>
int factorial(int n);
int main()
{
	int fact;
	int n;
	char rep;
	printf("\n\t\tPROGRAMA PARA CALCULO DE FACTORIALES");
	do{
		printf("\n\tDame un numero: ");
		scanf("%d",&n);
		fact=factorial(n);
		printf("\nEl factorial es: %d\n",fact);
		printf("\n\tPulse [y] para continuar o tecla [n] para salir.\n");
		scanf(" %c",&rep);
	}while(rep!='n');
	return 0;
}
int factorial( int n)
{
	int f;
	if(n==0) f=1;
	else
	{
		f=n*factorial(n-1);
	}
	return f;
}

