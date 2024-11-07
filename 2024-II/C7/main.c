
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Prototipo de la funcion 

void  iniciar(int A[], int size);
void     leer(int A[], int size, char nombre);
void imprimir(int A[], int size, char nombre);

int main() 
{
    int   A[20];
    int   B[20];

    iniciar(A,5);
    iniciar(B,5);

    imprimir(A,5,'A');
    imprimir(B,5,'B');
    
    leer(A,5,'A');
    leer(B,5,'B');
    
    imprimir(A,5,'A');
    imprimir(B,5,'B');
   
    printf("Fin del programa \n");
    system("pause");
}

void imprimir(int A[], int size, char nombre)
{
    for(int i=0; i < size; i++)
    {
        printf("%c[%d] = %d \n",nombre,i,A[i]);
    }
}

void iniciar(int A[], int size)
{
    for(int i=0; i < size ; i++)
    {
        A[i] = 0;
    }
}

void leer(int A[], int size, char nombre)
{
    for(int i=0; i < size ; i++)
    {
        printf("ingrese el numero de la posicion %c[%d] =  \n",nombre,i);
        scanf("%d",&A[i]);
    }
}

