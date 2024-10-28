
// Librerias.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// prototipo de la funcion.

/*

No retorna ningun valor, no ingresan datos la funcion.

void nombre_funcion(void)

No retorna ningun valor, ingresan datos la funcion.

void nombre_funcion(int varible)

Si retorna algun valor la funicon, no ingresan datos la funcion.

int nombre_funcion(void)

Retorna un valor tipo int, ingresan datos tipo int a la funcion.

int nombre_funcion(int varible)

Retorna un valor tipo float, ingresan datos tipo float a la funcion.

float nombre_funcion(float varible)

*/

int suma(int operadorA, int operadorB); 
int resta(int operadorA, int operadorB); 
float division(int operadorA, int operadorB); 

void suma_resta(int *varsuma, int *varresta,int operadorA, int operadorB);

// Funcion principal.

int main()
{

    // Declarar varibles.

    int numeroA = 0;
    int numeroB = 0;

    int resultado = 0;
    float resultadodiv = 0;

    int resul_suma = 0;
    int resul_resta = 0;

    printf("Funciones en C \n");
    printf("\n");

    printf("Ingrese un numero \n");
    scanf("%d",&numeroA);

    printf("Ingrese un numero \n");
    scanf("%d",&numeroB);

    resultado = suma(numeroA, numeroB);
    printf("Resultado = %d \n", resultado);

    resultado = suma(10, numeroB);
    printf("Resultado = %d \n", resultado);

    resultado = suma(numeroA, 20);
    printf("Resultado = %d \n", resultado);

    resultado = suma(50, 200);
    printf("Resultado = %d \n", resultado);

    resultado = resta(numeroA, numeroB);
    printf("Resultado = %d \n", resultado);

    resultado = resta(10, numeroB);
    printf("Resultado = %d \n", resultado);

    resultado = resta(numeroA, 20);
    printf("Resultado = %d \n", resultado);

    resultado = resta(50, 200);
    printf("Resultado = %d \n", resultado);

    resultadodiv = division(numeroA, numeroB);
    printf("Resultado = %f \n", resultadodiv);

    resultadodiv = division(10, numeroB);
    printf("Resultado = %f \n", resultadodiv);

    resultadodiv = division(numeroA, 20);
    printf("Resultado = %f \n", resultadodiv);

    resultadodiv = division(50, 200);
    printf("Resultado = %f \n", resultadodiv);

    suma_resta(&resul_suma, &resul_resta, numeroA, numeroB);
    printf("Resultado suma = %d \n", resul_suma);
    printf("Resultado resta = %d \n", resul_resta);

    system("pause");
    return 0;

}

int suma(int operadorA, int operadorB)
{
    int suma;
    suma =  operadorA + operadorB;
    return suma;
}

int resta(int operadorA, int operadorB)
{
    int resta;
    resta =  operadorA - operadorB;
    return resta;
}

float division(int operadorA, int operadorB)
{
    float div;
    div =  (float)operadorA / (float)operadorB;
    return div;
}

void suma_resta(int *varsuma, int *varresta,int operadorA, int operadorB)
{
    *varsuma = suma(operadorA, operadorB);
    *varresta = resta(operadorA, operadorB);
}



//

