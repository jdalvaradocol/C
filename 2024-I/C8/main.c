
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

/*
Funciones en C

1. Para estilo de desarrollo.
2. Para relizar tareas repetitivas.
3. Para optimzar los recursos del sistema.

funciones

no tiene datos de entrada ni de salida

void nombre_funcion(void);

*/

// Prototipo de la funcion

void    mensaje_inicial(void);
int     operacion_suma(int operadorA, int operadorB);
int     datos_entrada(int *operadorA, int *operadorB);
int     numero_palindromo(int operadorA);
int     size_number(int numero);

int main()
{
    int datoA = 0;
    int datoB = 0;
    int suma = 0;

    mensaje_inicial();
    datos_entrada(&datoA, &datoB);
    suma = operacion_suma(datoA, datoB);

    numero_palindromo(datoA);
    numero_palindromo(datoB);
    numero_palindromo(suma);

    system("pause");

}

// Funciones

void mensaje_inicial(void)
{
    printf("Ejemplo de funciones \n");
}

int  operacion_suma(int operadorA, int operadorB)
{
    int resultado = 0;
    resultado = operadorA + operadorB;
    printf("El resultado de la suma es igual a = %d \n",resultado);
    return resultado;
}

int datos_entrada(int *operadorA, int *operadorB)
{
    printf("Ingrese un numero A \n");
    scanf("%d",&*operadorA);
    printf("Ingrese un numero B \n");
    scanf("%d",&*operadorB);
    return 0;
}

int numero_palindromo(int operadorA)
{
    long digitos = 0;
    long numeroA = 0;
    long numeroB = 0;

    digitos = size_number(operadorA);
    printf("Digitos = %d \n",digitos);

    for(int i = 0;i<digitos/2;i++)
    { 
        numeroA = ((int)(operadorA % (int)(floor(pow(10,i+1)))))/ (int)(floor(pow(10,i+0)));
        printf("Numero A = %d \n",numeroA);
    }

    return 0;

}

int     size_number(int numero)
{
    int digitos = 1;
    int fin = 0;

    while(fin == 0)
    {
        if (numero < pow(10,digitos))
        {
            break;
        }
        else
        {
            digitos++;
        }
    }

    return digitos;

}


