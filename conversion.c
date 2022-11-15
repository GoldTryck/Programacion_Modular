#include <stdio.h>
#include <math.h>

//Celcius a Farenheit
void ctof()
{
        int celcius;
        float f1, c1;
        printf("Escribe la temperatura en Celsius: ");
        scanf("%f",&c1);
        f1 = sqrt(c1*1.8+32);
        printf("La temperatura en Farenheit es: %.2f\n",f1);
}

//Farenheit a Celsius
void ftoc()
{
        float f2, c2;
        printf("Escribe la temperatura en Farenheit: ");
        scanf("%f",&f2);
        c2 = (f2-32)/1.8;
        printf("La temperatura en Celsius es: %.2f\n", c2);
}

//Celsius a Kelvin
void ctok()
{
        float c3, k1;
        printf("Escribe la temperatura en Celsius: ");
        scanf("%f",&c3);
        k1 = c3+273.15;
        printf("La temperatura en Kelvin es: %.2f\n", k1);
}


int main()
{
        char opc;
        printf("a) Conversion Celsius a Farenheit\n");
        printf("b) Conversion Farenheit a Celsius\n");
        printf("c) Conversion Celsius a Kelvin\n");
        printf("Elige una opcion: ");
        scanf("%c",&opc);

        switch(opc)
        {
                case 'a': ctof();
                          break;
                case 'b': ftoc();
                          break;
                case 'c': ctok();
                          break;
        }
        return 0;
}
