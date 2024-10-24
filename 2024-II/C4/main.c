
// Librerias.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/*

Ciclos

for equivalente a repetir 

for(valor inicial, condicion, incremento)
{
    se repite hasta que se cumpla la condicion
}

while equivalente a mientras 

while(condicion)
{
    se ejecuta mientras se cumpla la condicion
}

do while equivalente hacer mientras

do
{
    se ejecuta una vez y se repsite mientras se cumpla la condicion.
}
while(condicion)

*/

// Funcion principal.

int main()
{

    // Declarar varibles.

    int numero = 0;
  
    printf("Ciclos en C \n");
    printf("\n");

    printf("Ingrese un numero \n");
    scanf("%d",&numero);

    for(int i = 0; i <= numero; i++)
    {
        printf("Repetir for = [%d] \n",i);
    }

    printf("\n");

    int index = 0;

    while(index <= numero)
    {
        printf("Repetir while = [%d] \n",index);
        index++;
    }

    printf("\n");

    index = 0;
    do   
    {
        printf("Repetir while = [%d] \n",index);
        index++;
    }while(index <= numero);

    system("pause");
    return 0;

}

//

