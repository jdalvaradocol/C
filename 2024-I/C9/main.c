
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>

// Prototipos de las funciones 

int cargar_arreglo(int datos[],int index);
int mostar_arreglo(int datos[],int index);
int minimo_arreglo(int datos[],int index);
int promedio_arreglo(int datos[],int index);

int main()
{
    //system("color AF");

    int A[20];
    int minimo = 0;
    int promedio = 0;

    cargar_arreglo(A,5);
    mostar_arreglo(A,5);
    minimo = minimo_arreglo(A,5);
    printf("El numero menor es = %d \n",minimo);
    promedio = promedio_arreglo(A,5);
    printf("El promedio es = %d \n",promedio);
    system("Pause");

}

int cargar_arreglo(int datos[],int index)
{

  for(int i = 0; i<index ;i++)
    {
        printf("Ingrese el valor de [%d] \n",i);
        scanf("%d",&datos[i]);
    }
    
    return 0;

}

int mostar_arreglo(int datos[],int index)
{
  
  for(int i = 0;i<index;i++)
  {
    printf(" [%d] = %d \n",i,datos[i]);
  }

  return 0;

}

int minimo_arreglo(int datos[],int index)
{
    int min = datos[0];

    for(int i = 1; i<index ;i++)
    {
        if(min > datos[i])
        {
            min = datos[i];
            index = i;
        }
    }

    return min;

}

int promedio_arreglo(int datos[],int index)
{
    int suma = 0;

    for(int i = 0; i<index ;i++)
    {
        suma = suma + datos[i];
    }

    return (suma / index);
    
}
//😊