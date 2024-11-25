
// Librerias.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// prototipo de la funcion.

// Funcion principal.

int main()
{
    // Declarar varibles.

    int A[1][3] = {{1, 1, 1}};
    int B[3][3] = {{2, 3, 4},{2, 3, 4},{2, 3, 4}};
    int X[1][3] = {{0, 0, 0}};

    printf("Matrices en C \n");
    printf("\n");

    for(int i = 0; i < 3 ; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            X[0][i] = X[0][i] + (A[0][j] * B[j][i]);
            printf("A[%d][%d] * B [%d][%d] \n", 0, j, j, i);  
        }
    
        printf(" X[0][%d] = %d \n", i, X[0][i]);     
    
    }


    for(int i = 0; i < 3 ; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            for(int k = 0; k < 2; k++)
            {    
                printf("[%d][%d] \n",j,k+i);  
            }
        }
    
        printf("\n");     
    
    }

    system("pause");
    return 0;

}
