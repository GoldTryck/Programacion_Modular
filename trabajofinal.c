
#include <stdio.h>
#include <string.h>
#include <stdbool.h>	
#include <math.h>

#define M 20

int triangulos();	int rectangulos();	
int conversion();	int matrices1();	
int matrices2();	int matrices3();	
int factoriales();	int salarios();			

int main()
{
	int opcmenu;
	char repetir;
	do{
		printf("*****************************************************************************************************\n");
		printf("\t\t\t\t\tMENU DE FUNCIONES.");
		printf("\n*****************************************************************************************************\n");	
		do{	
			printf("\n\t\tPulse el numero de la funcion que desea ejecutar, despues pulse Enter:\n\n");
			printf("\t\t1) Triangulos\t");
			printf("\t\t5) Mult_matrices\n");
			printf("\t\t2) Rectangulos\t");
			printf("\t\t6) Transp_matrices\n");
			printf("\t\t3) Conversion temp.\t");
			printf("\t7) Factoriales\n");
			printf("\t\t4) Suma de matrices\t");
			printf("\t8) Salarios\n");
			scanf("%d",&opcmenu);
			getchar();
			if((opcmenu<1) || (opcmenu>8))printf("\tSeleccione una opcion valida.\n");
			else{
				if(opcmenu==1) triangulos();
				if(opcmenu==2) rectangulos();
				if(opcmenu==3) conversion();
				if(opcmenu==4) matrices1();
				if(opcmenu==5) matrices2();
				if(opcmenu==6) matrices3();
				if(opcmenu==7) factoriales();
				if(opcmenu==8) salarios();
			}
		}while(opcmenu<1 || opcmenu>8);
	printf("\n\n");
	printf("*****************************************************************************************************\n");
	printf("\nPara regresar al menu principal pulse [y] 		Para salir presione [n], despues pulse Enter.\n");
	printf("\n*****************************************************************************************************");	
	scanf(" %c",&repetir);
	}while(repetir!='n');
	return 0;
}


//-----------------------------------------------CODIGO TRIANGULOS------------------------------------------------------------//



void magh();void magarea();void magang();
int triangulos()
{
	char opc,rep;
	printf("*********************************************************************************\n");
	printf("\tPROGRAMA PARA CALCULAR HIPOTENUSA, AREA Y TERCER ANGULO DE TRIANGULOS.\n");
	printf("*********************************************************************************\n");
	do{
        	do{
			printf("\n\ta) Hipotenusa de un triangulo: ");
        		printf("\n\tb) Area de un triangulo: ");
        		printf("\n\tc) Tercer angulo de un triangulo: ");
        		printf("\n\nPulse la letra de opcion seleccionada, despues pulse Enter.: ");
	
			scanf(" %c",&opc);
			switch(opc)
        		{
                	case 'a': magh();
                        	break;

                	case 'b': magarea();
                	        break;
                	case 'c': magang();
                	        break;
			default : printf("\tSelecchione una opcion valida:");
        		}
		}while(opc<'a'|| opc>'c');
		printf("\n*********************************************************************************\n");
		printf("\tDesea realizar otra operacion con triangulos?\n");
		printf("\n\tPulse [y] para continuar o [n] para terminar, despues pulse Enter. ");
		printf("\n*********************************************************************************\n\n\n");
		scanf(" %c",&rep);
		printf("\n");
	}while(rep!='n');
        return 0;
}
void magh()
{

        float co,ca;
        float h;
        printf("\n\n\tHipotenusa de un triangulo.\n\n\nEscribe la longitud del cateto adyacente: ");
        scanf("%f",&ca);
	printf("\n");
        printf("Escribe la longitud del cateto opuesto: ");
        scanf("%f",&co);
	printf("\n");
        h=sqrt((co*co)+(ca*ca));
        printf("La hipotenusa mide: %.2f ",h);
	printf("\n");
}

void magarea()
{

        float b,h;
        float a;
	printf("\n\n\tArea de un triangulo.\n\n\n");
        printf("Escribe la base: ");
        scanf("%f", &b);
	printf("\n");
        printf("Escribe la altura: ");
        scanf("%f", &h);
	printf("\n");
        a=(b*h)/2;
        printf("El area del triangulo es: %.2f\n", a);
	printf("\n");
}

void magang()
{

        float a1, a2, a3;
	printf("\n\n\tTercer angulo de un triangulo.\n\n\n");
        printf("Escribe el valor del angulo #1: ");
        scanf("%f", &a1);
	printf("\n");
        printf("Escribe el valor del angulo #2: ");
        scanf("%f", &a2);
	printf("\n");
        a3=180-(a1+a2);
        printf("El angulo #3 mide: %.2f", a3);
	printf("\n");
}


/*-----------------------------------------------------CODIGO RECTANGULOS-----------------------------------------------------*/


void asignavalor();void trapecio();void rectangulo();
int rectangulos()
{
	char opc,rep;
	float b[2],h;
	printf("*********************************************************************************\n");
	printf("\t\tPROGRAMA PARA CALCULO DE AREA DE RECTANGULOS Y TRAPECIOS.\n");
	printf("*********************************************************************************\n");
	do
	{
		do
		{
		printf("\t\tTeclee la letra de la operacion a realizar luego pulse Enter :\n\n");
		printf("\t\ta) Area del rectangulo.\n");
		printf("\t\tb) Ara del trapecio.\n");
		printf(": ");
		scanf(" %c",&opc);
		if(opc=='a' || opc=='b')
		{
			if(opc=='a')
			{	
				asignavalor(b,&h,&opc);
				rectangulo(b,&h);
			}
			else
			{
				asignavalor(b,&h,&opc);
				trapecio(b,&h);
			}
		}
		}while(opc>'b' || opc<'a');	
		printf("*********************************************************************************\n");
		printf("Para realizar otra operacion con rectangulos presione [y], para salir presione [n]");
		printf("\n*********************************************************************************\n");
		scanf(" %c",&rep);
		printf("\n");
		
	}while(rep!='n');
	return 0;
}
void asignavalor(float base[],float *altura,char *opcion)
{
	if(*opcion=='a')
	{
	printf("\t\tIngrese las medidas del rectangulo\n\n");
	printf("medida de la base: ");
	scanf("%f",&base[0]);
	printf("\n");
	printf("medida de la altura: ");
	scanf("%f",&*altura);
	printf("\n");
	}
	else
	{
	printf("\t\tIngrese las medidas del trapecio\n\n");
	do{
		printf("Medida de la base menor: ");
		scanf("%f",&base[0]);
		printf("\n");
		printf("Medida de la base mayor: ");
		scanf("%f",&base[1]);
		printf("\n");
		if(base[0]>=base[1]) printf("ERROR. la base menor debe ser menor que la base mayor.\n\n");
	}while(base[0]>=base[1]);
	printf("medida de la altura: ");
	scanf("%f",&*altura);
	printf("\n");
	
	}

}
void rectangulo(float base[],float *altura)
{
	float area=(base[0])*(*altura);
	printf("El area del rectangulo es: %.2f",area);
	printf("\n\n");
}
void trapecio(float base[],float *altura)
{
	float area=(base[0]+base[1])*(*altura)/2;
	printf("El area del trapecio es: %.2f",area);
	printf("\n\n");
}


/*--------------------------------------------------CODIGO CONVERSION-----------------------------------------------*/


void selectsys();void define();void ctok();void ktof();void ftoc();
int conversion()
{
	char sys, rep;
	float temp;
	printf("*********************************************************************************\n");
	printf("\t\tPROGRAMA PARA CONVERSION DE TEMPERATURA.\n");
	printf("*********************************************************************************\n");
	do{
		selectsys(&sys);
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
		printf("\n*********************************************************************************\n");
		printf("\tPara realizar otra conversion de teperatura presine [y] para salir presione [n]");
		printf("\n*********************************************************************************\n");
		scanf(" %c",&rep);
	}while(rep!='n');
	return 0;
}
void selectsys(char *sys)
{
	do{	
		printf("\n\tSelecccione la operacion a realizar: ");
		printf("\n\n");
		printf("a)Convertir Celcius a Kelvin.\n");
		printf("b)Convertir Celcius a Farenheit.\n");
		printf("c)Convertir Kelvin a Celcius.\n");
		printf("d)Convertir Kelvin a Farenheit.\n");
		printf("e)Convertir Farenheit a Celcius.\n");
		printf("f)Convertir Farenheit a Kelvin.\n");
		scanf(" %c",&*sys);
		if(*sys<'a' || *sys>'f') printf("\nERROR. Ingrese una opcion valida.\n");
	}while(*sys<'a' || *sys>'f');
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



/*----------------------------------------- CODIGO SUMA MATRIZ--------------------------------------------*/



void asignvalor();
void sumamatriz();
int matrices1()
{
	printf("*********************************************************************************\n");
	printf("\t\t\tPROGRAMA SUMA DE MATRICES.\n");
	printf("*********************************************************************************\n");
	char rep;
	int filas,columnas;
	float a[10][10],b[10][10],c[10][10];
	do{
		printf("\tIngrese el numero de filas de las matrices a y b: ");
		scanf("%d",&filas);
		printf("\n");
		printf("\tIngrese el numero de columnas de las matrices a y b: ");
		scanf("%d",&columnas);
		printf("\n");
		asignvalor(a,b,filas,columnas);
		sumamatriz(a,b,c,filas,columnas);
		printf("\n*********************************************************************************\n");
		printf("\tPra realizar otra suma de matrices [y] para salir [n]");
		printf("\n*********************************************************************************\n");
		scanf(" %c",&rep);
	}while(rep!='n');
	return 0;
}
void asignvalor(float a[][10],float b[][10],int filas,int columnas)
{
	for(int i=0;i<filas;i++)
	{
		for(int j=0;j<columnas;j++)
		{
			printf("Ingrese el valor [%d][%d] para matriz a: ",i,j);
			scanf("%f",&a[i][j]);
			printf("Ingrese el valor [%d][%d] para matriz b: ",i,j);
			scanf("%f",&b[i][j]);
		}
	}
}
void sumamatriz(float a[][10],float b[][10],float c[][10],int filas,int columnas)
{
	printf("La suma de las matrices a y b es:\n");
	for(int i=0;i<filas;i++)
	{
		for(int j=0;j<columnas;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%.2f\t",c[i][j]);
		}
			printf("\n");
	}
}


/*--------------------------------------- CODIGO MULT. MATRICES M*M DIMENSIONES -----------------------------*/


void dimns(); void valores();
void mult(); void printmat();
int matrices2()
{
	int a[M][M],b[M][M],d[M][M],filas[2],columnas[2];
	char rep;
	printf("*********************************************************************************\n");
	printf("\t\tPROGRAMA PARA MULTIPLICACION DE MATRICES M*N DIMENSIONES\n");
	printf("*********************************************************************************\n");
	do{
		//filas[0] y columnas[0] para matriz A; filas[1] y columnas[1] para matriz B.
		dimns(filas,columnas);
		valores(a,b,filas,columnas);
		printmat(a,b,filas,columnas);
		mult(a,b,d,filas,columnas);
		printf("\n*********************************************************************************\n");
		printf("\tPara realizar nueva mult. de matrices [y] para salir [n]");
		printf("\n*********************************************************************************\n");
		scanf(" %c",&rep);
		printf("\n");
	}while(rep!='n');


	return 0;
}
void dimns(int f[],int c[])
{
	do{
		printf("\tDefina numero de filas de la matriz A: ");
		scanf("%d",&f[0]);
		printf("\n");
		printf("\tDefina numero de columnas de la matriz A: ");
		scanf("%d",&c[0]);
		printf("\n");
		printf("\tDefina numero de filas de la matriz B: ");
		scanf("%d",&f[1]);
		printf("\n");
		printf("\tDefina numero de columnas de la matriz B: ");
		scanf("%d",&c[1]);
		printf("\n");
		if(c[0]!=f[1]) printf("Las matrices no se pueden multiplicar, ingrese dos matrices validas.\n\n");
	}while(c[0]!=f[1]);
}
void valores(int a[][M],int b[][M], int f[],int c[])
{
	for(int i=0;i<f[0];i++)
	{
		for(int j=0;j<c[0];j++)
		{
			printf("Ingrese el valor de [%d][%d] en A: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<f[1];i++)
	{
		for(int j=0;j<c[1];j++)
		{
			printf("Ingrese el valor de [%d][%d] en B: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
}
void mult(int a[][M],int b[][M],int d[][M],int f[],int c[])
{
	printf("\n\nLa multiplicacion de A con B es:\n\n");

	for(int i=0;i<f[0];i++)//recorrido columnas
	{
		printf("\t| ");
		for(int j=0;j<c[1];j++)//recorrido filas
		{
			int suma=0;
			for(int k=0;k<c[0];k++)
			{

				suma=suma+a[i][k]*b[k][j];
				d[i][j]=suma;
							
			}
		printf("%d",d[i][j]);
		if(j==c[1]-1) printf(" |");
		printf("\t");
		}
	printf("\n");
	}
}
void printmat(int a[][M],int b[][M],int f[],int c[])
{
	printf("La matriz A se definio como:\n\n");
	for(int i=0;i<f[0];i++)
	{
		printf("\t| ");
		for(int j=0;j<c[0];j++)
		{
			printf("%d",a[i][j]);
			if(j==c[0]-1) printf(" |");
			printf("\t");
		}
	printf(" \n");
	}
	printf("\nLa matriz B se definio como:\n\n");
	for(int i=0;i<f[1];i++)
	{
		printf("\t| ");
		for(int j=0;j<c[1];j++)
		{
			printf("%i",b[i][j]);
			if(j==c[1]-1) printf(" |");
			printf("\t");
		}
	printf("\n");
	}
}




/*------------------------------------- CODIGO TRANSP. MATRICES M*N DIMENSIONES---------------------------------*/


/*.....................................................................

 * Este programa realiza la funcion de transponer una matriz de M*N dimensiones.
 * Para ello:
 * 1) solicita al usuario definir las dimensiones de la matriz.
 * 2) solicita al usuario ingresar los valores para cada posicion en la matriz.
 * 3) muestra la matriz definida con los valores ingresados por el usuario.
 * 4) realiza las operaciones programadas para transponer la matriz definida.
 * 5) muestra los valores de la matriz resultante. 
 .............................................................................*/ 

void dimension();
void asignarvalor();
void transp();
int matrices3()
{
	char rep;
	int filas,columnas;
	int a[10][10],b[10][10];
	printf("*********************************************************************************\n");
	printf("\tPROGRAMA PARA TRANSPONER MATRICES M*N DIMENSIONES.\n");
	printf("*********************************************************************************\n");
	do{
		dimension(&filas,&columnas);
		asignarvalor(a,filas,columnas);
		transp(a,b,filas,columnas);
		printf("\n*********************************************************************************\n");
		printf("\tDesea transponer otra matriz?\n");
		printf("\tPulse [y] para continuar o [n] para salir despues pulse Enter.");
		printf("\n*********************************************************************************\n");
		scanf(" %c",&rep);
	}while(rep!='n');
	return 0;
}
void dimension(int *filas,int *columnas)
{
	printf("\n\nIngrese el numero de filas para la matriz A: ");
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
	printf("\nLa matriz A se definio como:\n\n");
	for(int i=0;i<filas;i++)
	{
		printf("| ");
		for(int j=0;j<columnas;j++)
		{
			printf("%d",a[i][j]);
			if(j==columnas-1) printf(" |");
			printf("\t");
		}
		printf("\n");
	}
}
void transp(int a[][10],int b[][10],int filas,int columnas)
{
	printf("\nLa matriz At es igual a:\n\n");
	for(int i=0;i<columnas;i++)
	{
		printf("| ");
		for(int j=0;j<filas;j++)
		{
			b[i][j]=a[j][i];
			printf("%i",b[i][j]);
			if(j==filas-1) printf(" |");
			printf("\t");
		}
		printf("\n");
	}
}



/*--------------------------------------------- CODIGO FACTORIALES-------------------------------------*/



int factorial(int n);
int factoriales()
{
	int fact;
	int n;
	char rep;
	printf("*********************************************************************************\n");
	printf("\t\tPROGRAMA PARA CALCULO DE FACTORIALES.\n");
	printf("*********************************************************************************\n");
	do{
		printf("\n\tDame un numero: ");
		scanf("%d",&n);
		fact=factorial(n);
		printf("\nEl factorial es: %d\n",fact);
		printf("\n*********************************************************************************\n");
		printf("\tPulse [y] para continuar o tecla [n] para salir.");
		printf("\n*********************************************************************************\n");
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


/*------------------------------------------- CODIGO SALARIOS -----------------------------------------------*/



/*Realizar programa que calcule el salario neto a partir de:
	horas laboradas
	costo por hora
	agregar iva
	retencion 12 sobre el salario
 *Ademas:
	si el salario es <10000:
	agregar bono de 5%.
 *Realizar diagrama de flujo, pseudocodigo y diagrama N/S.
*/
void ingresardatos();void calculo();void bono();

int salarios()
{
	float tc[3];//tc[0] = horas laboradas, tc[1] = costo por hora de trabajo, tc[2] = calculo salario
	char rep='a';
	printf("*********************************************************************************\n");
	printf("\t\tCALCULADORA DE SALARIOS.\n");
	printf("*********************************************************************************\n");
	while(rep!='n')
	{
	ingresardatos(tc);
	printf("\nEl salario mensual es: ");
	calculo(tc);
	bono(tc);
	printf("\n*********************************************************************************\n");
	printf("\tDesea realizar otro calculo de salarios: continuar[y] salir[n]: ");
	printf("\n*********************************************************************************\n");
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
		printf("\nMas un bono de 05 porciento: $%.2f MXN.\n",tc[2]);
	}
}

