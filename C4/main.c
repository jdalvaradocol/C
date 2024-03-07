
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Condicionales en C

int main() 
{

    int variable_a ;    
    int variable_b ;

    float float_a ;    
    float float_b ;

    int resultado ;

    printf("Ingrese el numero A \n");
    scanf("%d",&variable_a);

    printf("Ingrese el numero B \n");
    scanf("%d",&variable_b);

    resultado = (variable_a != variable_b);
    printf("Resultado = %d \n",resultado);
    
    resultado = (variable_a == variable_b);
    printf("Resultado = %d \n",resultado);
    
    resultado = (variable_a > variable_b);
    printf("Resultado = %d \n",resultado);
    
    resultado = (variable_a < variable_b);
    printf("Resultado = %d \n",resultado);

    resultado = (variable_a >= variable_b);
    printf("Resultado = %d \n",resultado);
    
    resultado = (variable_a <= variable_b);
    printf("Resultado = %d \n",resultado);

    printf("Ingrese el numero float A \n");
    scanf("%f",&float_a);

    printf("Ingrese el numero float B \n");
    scanf("%f",&float_b);

    resultado = (float_a != float_b);
    printf("Resultado = %d \n",resultado);

    resultado = (float_a != float_b);
    printf("Resultado = %d \n",resultado);

    resultado = (float_a == float_b);
    printf("Resultado = %d \n",resultado);

    resultado = (float_a < float_b);
    printf("Resultado = %d \n",resultado);

    resultado = (float_a > float_b);
    printf("Resultado = %d \n",resultado);

    resultado = (float_a <= float_b);
    printf("Resultado = %d \n",resultado);

    resultado = (float_a >= float_b);
    printf("Resultado = %d \n",resultado);

    /*  Funcion logica disyuncion (OR)
        V(1) F(0)
        Entrada A -- Entrada B -- Salida
            F           F           F
            F           V           V       
            V           F           V  
            V           V           V                
    */

    /*  Funcion logica Conjuncion (AND)
        V(1) F(0)
        Entrada A -- Entrada B -- Salida
            F           F           F
            F           V           F       
            V           F           F  
            V           V           V                
    */

    /*  Funcion logica Negacion (NOT)
        V(1) F(0)
        Entrada -- Salida
            F        V
            V        F       
    */

    

    printf("Fin del programa \n");
    
    system("pause");

}