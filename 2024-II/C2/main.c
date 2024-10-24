
// Librerias.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* Condicionales

----------------------------------------------------
if (condicion)
{
    se ejecuta si se cumple la condicion
}
----------------------------------------------------
if (condicion)
{
    se ejecuta si se cumple la condicion
}
else
{
    se ejecuta si no se cumple la condicion
}
----------------------------------------------------
if (condicion 1)
{
    se ejecuta si se cumple la condicion 1
}
else if (condicion 2)
{
    se ejecuta si se cumple la condicion 2
}
else if (condicion N)
{
    se ejecuta si se cumple la condicion N
}
----------------------------------------------------
if (condicion 1)
{
    se ejecuta si se cumple la condicion 1
}
else if (condicion 2)
{
    se ejecuta si se cumple la condicion 2
}
else
{
    se ejecuta si no se cumple ninguna condicion
}

Condicionales

==  igual
>   mayor
<   menor
>=  mayor o igual 
<=  menor o igual
=!  diferente

//  Operadores logicos 
//  Y = &&
//  A  			Y	B   		= 	X
//  Falso 			Falso 		= Falso
//  Falso 			Verdadero 	= Falso
//  Verdadero 		Falso 		= Falso
//  Verdadero 		Verdadero 	= Verdadero

//  O = ||
//  A  			O	B   		= 	X
//  Falso 			Falso 		= Falso
//  Falso 			Verdadero 	= Verdadero
//  Verdadero 		Falso 		= Verdadero
//  Verdadero 		Verdadero 	= Verdadero

*/

// Funcion principal.

int main()
{

    // Declarar varibles.

    int variable = 0;
    int mod = 0;

    printf("Condicionales en C \n");
    printf("\n");

    printf("Ingrese un numero entero \n");
    scanf("%d",&variable);

    mod = variable % 2;

   // Forma 1

    if (mod == 0)
    {
        printf("mod = %d - El numero es par \n", mod);
    }
    
    if (mod == 1)
    {
        printf("mod = %d - El numero es impar \n", mod); 
    }

    // Forma 2

    if (mod == 0)
    {
        printf("mod = %d - El numero es par \n", mod);
    }
    else
    {
        printf("mod = %d - El numero es impar \n", mod); 
    }
    
    // forma 3 

    if (mod == 0)
    {
        printf("mod = %d - El numero es par \n", mod);
    }
    else if(mod == 1) 
    {
        printf("mod = %d - El numero es impar \n", mod); 
    }

    // forma 4 

    if (mod == 0)
    {
        printf("mod = %d - El numero es par \n", mod);
    }
    else if(mod == 1) 
    {
        printf("mod = %d - El numero es impar \n", mod); 
    }
    else
    {
        printf(" No es un numero par o impar \n");       
    }

    system("pause");
    return 0;


}

//

