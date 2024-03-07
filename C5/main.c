
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Condicionales en C

int main() 
{

    int variable_a ;    
    int resultado;    

    printf("Ingrese el numero A \n");
    scanf("%d",&variable_a);
   
    /*  Funcion logica disyuncion  (OR) || 
        V(1) F(0)
        Entrada A -- Entrada B -- Salida
            F           F           F
            F           V           V       
            V           F           V  
            V           V           V                
    */

    /*  Funcion logica Conjuncion (AND) &&
        V(1) F(0)
        Entrada A -- Entrada B -- Salida
            F           F           F
            F           V           F       
            V           F           F  
            V           V           V                
    */

    /*  Funcion logica Negacion (NOT) ¬
        V(1) F(0)
        Entrada -- Salida
            F        V
            V        F       
    */

   // identificar si el numero es mayor que 10 y menor que 20
   // variable_a = 5     F(0)     V(1) = F(0)
   // variable_a = 50    V(1)     F(0) = F(0)
   // variable_a = 15    V(1)     V(1) = V(1)

    resultado = (variable_a > 10) && (variable_a < 20);
    printf("Resultado = %d \n",resultado);

    // identificar si el numero es igual a 15 o mayor que 20
    // variable_a = 5     F(0)     F(0) = F(0)
    // variable_a = 50    F(0)     V(1) = V(1)
    // variable_a = 15    V(1)     F(0) = V(1)
    
    resultado = (variable_a == 15) || (variable_a > 20);
    printf("Resultado = %d \n",resultado);

    printf("Fin del programa \n");
    
    system("pause");

}