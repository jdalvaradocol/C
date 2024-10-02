
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() 
{
    // Definimos las variables.

    int dd_nacimiento = 0;
    int mm_nacimiento = 0;
    int aaaa_nacimiento = 0;
    
    int aaa_edad = 0;
    int mm_edad = 0;
    int dd_edad = 0;
    
    printf(" Ingrese el dia de nacimiento \n");
    scanf("%d",&dd_nacimiento);

    printf(" Ingrese el mes de nacimiento \n");
    scanf("%d",&mm_nacimiento);

    printf(" Ingrese el a%co de nacimiento \n",164);
    scanf("%d",&aaaa_nacimiento);

    printf(" La fecha de nacimiento es = %d / %d / %d  \n",dd_nacimiento,mm_nacimiento,aaaa_nacimiento);
    
    aaa_edad = 2024 - aaaa_nacimiento;
    mm_edad = 3 - mm_nacimiento;

    /*

    Opcion 1

    if condicion
    {
        se ejecuta si es verdadera la condicion 
    }

    Opcion 2

    if condicion
    {
        se ejecuta si es verdadera la condicion 
    }
    else
    {
        se ejecuta si es falsa la condicion
    }

    Opcion 3

    if condicion
    {
        se ejecuta si del if es verdadera la condicion 
    }
    else if condicion 
    {
        se ejecuta si del else if 1 es verdadera la condicion 
    }
    else if condicion 
    {
        se ejecuta si del else if # es verdadera la condicion 
    }
    else
    {
        se ejecuta si es falsa la condicion
    }
    
    Opcion 4

    if condicion
    {
        se ejecuta si del if es verdadera la condicion 
    }
    else if condicion 
    {
        se ejecuta si del else if 1 es verdadera la condicion 
    }
    else if condicion 
    {
        se ejecuta si del else if # es verdadera la condicion 
    }

    */

    if (mm_edad < 0)
    {
        aaa_edad = aaa_edad - 1 ;
		mm_edad = 3 + 12 - mm_nacimiento ;
    }
    else
    {
		aaa_edad = aaa_edad ;
		mm_edad = mm_edad 	;
    }
  
    printf("Edad de la persona = %d - meses = %d \n",aaa_edad,mm_edad);


    printf("Fin del programa \n");
    system("pause");
}