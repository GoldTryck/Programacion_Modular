
#include <stdio.h>
#include <string.h>
#include <stdbool.h>	
#include <math.h>

#define M 20

int triangulos();	int rectangulos();	
int conversion();	int matrices1();	
int matrices2();	int matrices3();	
int factoriales();	int salarios();			

/*El menu principal funciona con dos ciclos do while y una serie de condicionales if. Deacuerdo a la opcion seleccionada,
  se ejecutara una funcion, una vez realizada la funcion, el programa preguntara al usuario si desea 
  realizar la ejecucion de otra, si es el caso, se muestra nuevamente el menu y se repite el ciclo.
  
  Se definieron 2 variabls:
  1) int para almacenar la opcion de la operacion seleccionada por el usuario.
  2) char para almacenar la entrada del usuario para repetir o no el programa.
  */

int main()
{
	int opcmenu;
	char repetir;
	//Este do se coloca para realizar el bucle de repeticion para el menu de opciones  en caso de ser necesario 	
	do{
		printf("*****************************************************************************************************\n");
		printf("\t\t\t\t\tMENU DE FUNCIONES.");
		printf("\n*****************************************************************************************************\n");	
		//Este do realiza la evaluacion de la opcion ingresada por el usuario, si es un valor no valido retorna hasta ingresar valor valido.
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

/*El programa de trinagulos, realiza 3 diferentes operaciones de triangulos: calculo de hipotenusa, calculo de area
  y calculo del tercer angulo de un triangulo.
  Para ello, se emplean de igual forma dos ciclos do while, uno para verificar la opcion seleccionada sea valida
  el otro para permitir al usuario regresar al menu de opciones del programa de triangulos. */

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
			switch(opc) //Se define funcion switch para evaluar opc
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
void magh() //Calcula la hipotenusa
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

void magarea() //Calcula el area
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

void magang() //calcula el tercer angulo
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

/*Este programa realiza el calculo del area de rectangulos (cuadrados) y trapecios.
  Para realizarlo se programaron 3 funciones:
  1) Para que el usuarion ingurese los valores del rectangulo o trapecio.
  2) La formula para el calculo del area de un rectangulo.
  3) La formula necesaria para el calculo del area de un trapecio.
  
  
  Se implementa el mismo sistema de verificacion y repeticion que en los programas anteriores.
  
  Se definio un array de tipo numero real que almacena 2 valores, donde se almacenara la entrada de la base
  en el caso del rectangulo, o base meno y base mayor para el trapecio.
  Se definio una variable para almacenar la entrada de la atura para ambos casos.

  EL programa implemeta ciclos condicionales if para ejectar la secuencia  correcta en funcion de la opcion seleccionada

  
  */
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
void asignavalor(float base[],float *altura,char *opcion) //Funcion para leer las medidas de rectangulos o trapecios.
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
void rectangulo(float base[],float *altura) //realiza las operaciones necesarias para calcular el area del rectangulo y muestra el resultado en pantalla
{
	float area=(base[0])*(*altura);
	printf("El area del rectangulo es: %.2f",area);
	printf("\n\n");
}
void trapecio(float base[],float *altura) //realiza las operaciones necesarias para calcular el area del trapecio  y muestra el resultado en pantalla
{
	float area=(base[0]+base[1])*(*altura)/2;
	printf("El area del trapecio es: %.2f",area);
	printf("\n\n");
}


/*--------------------------------------------------CODIGO CONVERSION-----------------------------------------------*/

/*El programa realiza conversion de tremperatura entre 3 diferentes sistemas de medicion: Clecius, Farenheit y Kelvin
  Se recicla el mismo metodo de verificacion y repeticion que en los programas previos.
  Se declara una variable de tipo numero real para almacenar la entrada de la temperatura y realizar conversion.
  Se programan dos funciones: para elegir que tipo de conversion se realizara y para leer la temperatura a convertir
  
  Se implementa funcion switch para evaluar la varable sys que contiene el tipo de conversion a realizar.
  Segun sea el caso se ejecutaran una serie de funciones para llegar al resultado y finalmente se imprime en pantalla.
  
  En 3 funciones se programan las operaciones de conversion tal que: Celcuis a Kelvin ---> Kelvin a Farenheit ---> Farenheit a Celcius
  LA idea es un sistema circular que sea capaz de recorrer todas las conversiones posibles desde cualquier punto de partida*/
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

/*El codigo suma matrices de hasta 10x10 y muestra en pantalla en forma de matriz el resutado.
  
  Se recicla el mismo metodo de verificacion y repeticion que en los programas previos.
  
  Se utlizan 2 funciones: asignar valor para leer los contenidos de las matrices A y B y sumamatriz
  para realizar las operaciones necesarias para obtener el resultado deseado.

  Se declaran 3 arreglos de tipo float correspondientes a las matrices A,B y C, 2 variables tipo
  entero que almacenaran la entrada del numero de filas y colunas de A y B.

  La logica del programa se basa en 2 cilos for anidados para poder recorrer las posiciones de
  las matrices (Un for para recorrer filas y otro para las columnas), de esta forma se va solicitando
  el valor para cada posicion en A y B.
  Para el proceso de suma se sigue la misma logica pero ahora recorriendo y llenando cada posicion 
  de C con la suma de A y B tal que: C[i][j] = A[i][j]+B[i][j]. Finalmente se aprovecha el ciclo de 
 llenado de la matriz C para ir imprimiendo los vvalores en pantalla con formato. 
  */

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

/*El programa de multiplicacion de matrices evalua si dos matrices son multiplicables, las multiplica y muestra el resultado
  Utiliza el mismo metodo de repeticion que las funciones previas.
  Se programaron 4 funciones 
  1) dimns: Solicita la entrada del numero de filas y columnas para A y B y evalua si son multiplicables bajo el
  criterio de que el numero de filas de A debe ser igual al numero de columnas de B, de no cumplirse la condicion
  se solicitara al usuario ingresar nuevamente las dimensiones de las matrices A y B.
  2) Valores: Utiliza el mismo ciclo de llenado de matriz que en el programa suma de matrices, ahora independiente para 
  matriz A y B.
  3) printmat: Utiliza el mismo recorrido de matriz que en suma de matrices para mosrar en pantalla las matrices A y B con formato.
  4) mult: Utiliza 3 ciclos for, el primero [i] recorre la caantidad de filas para A, el segundo** [j] recorre la cantidad de columnas
  definidas para B, lo que da como resutado el recorrido del tamanno de la matriz C resultante, finalmente como  columnasA=filasB
  se define un tercer ciclo [k] para recorrer bien sea colunmasA o filasB dado que son equivalentes, tal que suma  = suma + A[i][k]*B[k][j]
  (Se declara e inicializa en 0 la variable suma en el segundo ciclo fo[j], para que saliendo de tercer ciclo [k] este se reestablezca
  y no interfiera con la siguiente operacion). **Se aprovecha para imprimir con formato la matriz resultante C conforme se va llenando*/

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

/*Se utiliza el mismo mecanismo de repeticion implementado en programas anteriores.
  Se utilizan los mismos conceptos para el recorrido y llenado de la matrices que en los programas anteriores
  para la matriz  A.
  Se programaron 3 funciones;
  1) dimension: para leer el numero de filas y columnas para A.
  2) asignarvalor: para llenado de matriz A con datos ingrsados por el usuario.
  3) transp: segun el concepto de trsanspocision las filas de una matriz pasan a ser sus columnas y viceversa,
  se programa entonces el recorrido de A como ya se ha mencionado antes en el programa de suma de matrices,solo
  que esta vez se invierte el orden de i<filas y j<columnas, y se llena la matriz B tal que: B=A[j][i] */

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

/*La funcion factoriales es una funcion de tipo recursiva, lo que quiere decir que se va a autollamar 
  en si misma para x fin.
  se utiliza el mismo sistema de repeticion que en los programas previos.
  La funcion principal solicita un numero que se almacena en la variable n,
  posterior a ello, asigna valor a variable fact = factorial(n) que es el valor que devuelve una funcion int
  para este caso la funcion factorial utiliza el parametro n previamente definido por el usuario,
  declara una variable f y usa un condicional if  para asignar f=1 si n==0, caso contrario asigna 
  f=n*factorial(n-1), en este punto se hizo una llamada a si mismo una y otra vez hasta que n==0 y devolviendo
  el valor de f.*/

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
 *Realizar diagrama de flujo, pseudocodigo y diagrama N/S.i

 Se utiliza mismo sistema de repeticion qu een los programas previos.
 se solisita al usuario que ingrese datos del salario por hora y las horas laboradas diariamente
 se realiza el caluclo de i.v.a y retencion antes de multiplicar por dias de trabajo mensuales 
 se multiplica por dias de trabajo y se evalua el resultado, donde si es menor que 10,000 se calcula
 un bono del 5% adicional"
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

