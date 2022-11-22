#include <stdio.h>
#include <math.h>
void magh();void magarea();void magang();
int main()
{
	char opc,rep;
	printf("\t\tEste programa realiza operaciones con triangulos.");
	do{
        	do{
			printf("\na) Hipotenusa de un triangulo rectangulo: ");
        		printf("\nb) area de un triangulo: ");
        		printf("\nc) tercer angulo de un triangulo: ");
        		printf("\n\nElige una opcion: ");
	
			scanf(" %c",&opc);
			if(opc<'a' ||  opc>'c') printf("\tSelecchione una opcion valida:");
			switch(opc)
        		{
                	case 'a': magh();
                        	break;

                	case 'b': magarea();
                	        break;
                	case 'c': magang();
                	        break;
        		}
		}while(opc<'a'|| opc>'c');
		printf("\n\tDesea realizar otra operacion con triangulos?\n");
		printf("\n\tPulse [y] para continuar o [n] para terminar: ");
		scanf(" %c",&rep);
		printf("\n");
	}while(rep!='n');
        return 0;
}
void magh()
{

        float co,ca;
        float h;
        printf("Escribe la longitud del cateto adyacente: ");
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

