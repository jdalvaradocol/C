
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() 
{
    // Definimos las variables.

    int variable_a = 789, variable_b = 456;
    int variable_c = 0;

    float division = 0.0;

    printf("El valor de la Variable_a = %d \n", variable_a);
    printf("El valor de la Variable_b = %d \n", variable_b);

    variable_c = variable_a + variable_b;

    printf("Suma \n");
    printf("%d + %d = %d \n", variable_a, variable_b, variable_c);

    variable_c = variable_a - variable_b;

    printf("Resta \n");
    printf("%d - %d = %d \n", variable_a, variable_b, variable_c);

    variable_c = variable_a * variable_b;

    printf("Multiplicacion \n");
    printf("%d * %d = %d \n", variable_a, variable_b, variable_c);

    variable_c = variable_a / variable_b;

    printf("Division \n");
    printf("%d / %d = %d \n", variable_a, variable_b, variable_c);

    division = (float)variable_a / variable_b;

    printf("Division flotante \n");
    printf("%d / %d = %.2f \n", variable_a, variable_b, division);

    printf("Fin del programa \n");
    system("pause");
}