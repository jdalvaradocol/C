 #include <stdio.h>
 #include <stdlib.h>
 #include <windows.h>

int main()
{

    int variableA;
    int  estado = 0;

    printf("Bienvenido a C \n");

    while(estado == 0)
    {
        printf("Ingrese el valor de A \n");
        scanf("%d",&variableA);
        printf("el valor de A es %d \n", variableA);

        if(variableA == 100){ break;}

        printf("Si desea continuar ingrese cero (0) \n");
        scanf("%d",&estado);

        if(variableA == 500){ estado = 1;}

    }
    
    do    
    {
        printf("Ingrese el valor de A \n");
        scanf("%d",&variableA);
        printf("el valor de A es %d \n", variableA);

        if(variableA == 100){ break;}

        printf("Si desea continuar ingrese cero (0) \n");
        scanf("%d",&estado);

        if(variableA == 500){ estado = 1;}

    }
    while(estado == 0);

    system("pause");

}