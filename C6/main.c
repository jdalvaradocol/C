
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// ciclos en C

/*

for(condiciones iniciales; condicion final; incremento)

for(int i = Condicion inicial; i <= condicion final; i++ incremento en 1)

*/

int main() 
{

    int tabla_multiplicar = 0;

    int primo = 0;
    int modulo = 0;
    int contador_modulo = 0;

    printf("Ingrese el numero de la tabla \n");
    scanf("%d",&tabla_multiplicar);

    for(int i= 1; i<=10 ;i++)
    {
        printf("%d \t x \t %d = %d \n",tabla_multiplicar, i, tabla_multiplicar * i);
    }

    int numero_inicial = 0;
    int numero_final = 0;

    printf("Ingrese el numero inicial \n");
    scanf("%d",&numero_inicial);

    printf("Ingrese el numero final \n");
    scanf("%d",&numero_final);

    for(int i= numero_inicial; i<= numero_final ;i+=2)
    {
        printf("%d \t", i);
    }

    printf(" \n ");

    // Imprime los numeros primos en un rando determinado 

    for(int i= numero_inicial; i<= numero_final ;i++)
    {
        for(int j = 1; j <= i ;j++)
        {   
            modulo = i % j;

            if(modulo == 0)
            {
                contador_modulo++;
            }
            if(contador_modulo >= 3)
            {
                primo = 0;
                break;
            }
            else
            {
                primo = 1;   
            }  

            // printf(" modulo = %d contador = %d \n ", modulo, contador_modulo);
        }

        if(primo == 0)
        {
            // printf(" El numero %d no es primo \n ", i);
        }
        else if(primo == 1)
        {
            if(i != 1)
            {
                printf(" El numero %d es primo \n ", i);
            }
        }
        
        primo = 0;
        contador_modulo = 0;

    }

    printf(" \n ");
    system("pause");
}