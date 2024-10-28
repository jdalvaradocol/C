
// Librerias.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// prototipo de la funcion.

/*
________________
| V1 | V4 | V7 |
________________
| V2 | V5 | V8 |
________________
| V3 | V6 | V9 |
________________

*/

int variablesiguales(int varA, int varB, int varC); 

// Funcion principal.

int main()
{
    // Declarar varibles.

    
    int V1 = 1;
    int V2 = 1;
    int V3 = 1;
    int V4 = 1;
    int V5 = 1;
    int V6 = 1;
    int V7 = 1;
    int V8 = 1;
    int V9 = 1;

    int res= 0;
 
    printf("Funciones en C \n");
    printf("\n");

    // printf("Ingrese un numero \n");
    // scanf("%d",&V1);

    res = variablesiguales(V1,V2,V3);
    printf("Respuesta =  %d \n", res);

    res = variablesiguales(V4,V5,V6);
    printf("Respuesta =  %d \n", res);

    res = variablesiguales(V7,V8,V9);
    printf("Respuesta =  %d \n", res);

    res = variablesiguales(V1,V4,V7);
    printf("Respuesta =  %d \n", res);

    res = variablesiguales(V2,V5,V8);
    printf("Respuesta =  %d \n", res);

    res = variablesiguales(V3,V6,V9);
    printf("Respuesta =  %d \n", res);

    res = variablesiguales(V1,V5,V9);
    printf("Respuesta =  %d \n", res);

    res = variablesiguales(V3,V5,V7);
    printf("Respuesta =  %d \n", res);

    system("pause");
    return 0;

}

int variablesiguales(int varA, int varB, int varC)
{
    if (varA == varB == varC)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}


