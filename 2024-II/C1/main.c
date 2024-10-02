
// Librerias.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Funcion principal.

int main()
{

    // Declarar varibles

    // Tipos de variables para C.

    // Varibles enteras.

    int  variable_entera; // Tipo int  -2,147,483,648 to 2,147,483,647
    char variable_char;   // Tipo char -128 a 127

    // Variables flotantes

    float  variable_float;    // Tipo float 1.2E-38 to 3.4E+38
    double variable_double;  // Tipo double 1.7E-308 to 1.7E+308

    printf("Mi primer mensaje en C \n");
    printf("\n");

    printf("Ingrese un numero entero \n");
    scanf("%d",&variable_entera);

    printf("Ingrese un numero flotante \n");
    scanf("%f",&variable_float);

    printf("Ingrese un numero double \n");
    scanf("%lf",&variable_double);

    printf("El valor entero ingresado = %d \n",variable_entera);
    printf("El valor flotante ingresado = %f \n",variable_float);
    printf("El valor double ingresado = %lf \n",variable_double);

    system("pause");
    return 0;


}

//

