
// Librerias.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/*
    Primera Infancia        ( 0 -  5 años)
    Infancia                ( 6 - 11 años)
    Adolescencia            (12 - 18 años)
    Juventud                (14 - 26 años)
    Adultez                 (27 - 59 años)
    Persona Mayor (60 años o mas) envejecimiento y vejez.
*/

// Funcion principal.

int main()
{

    // Declarar varibles.

    int edad = 0;
  
    printf("Condicionales en C \n");
    printf("\n");

    printf("Ingrese su edad \n");
    scanf("%d",&edad);

   // Forma 1

    if ((edad >= 0) && (edad <= 5))
    {
        printf(" Primera Infancia  \n");
    }
    else if ((edad >= 6) && (edad <= 11))
    {
        printf(" Primera Infancia  \n");
    }
    else if ((edad >= 12) && (edad <= 26))
    {

        if ((edad >= 12) && (edad <= 18))
        {
            printf(" Adolescencia \n");
        }
        if ((edad >= 14) && (edad <= 26))
        {
            printf(" Juventud \n");
        }
    }
       else if ((edad >= 27) && (edad <= 59))
    {
        printf(" Adultez  \n");
    }
    else if ((edad >= 60))
    {
        printf(" Persona Mayor \n");
    }


    system("pause");
    return 0;


}

//

