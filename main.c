#include <stdio.h>
#include <stdlib.h>
//11/Abril/2020
//Programa 39
//Autor: Alejandro Paisano Flores
//El programa rellena un arreglo bidimensional con numeros dados por el usuario y luego lo imprime ademas de imprimir la suma de los valores dentro de el
//Clave: 123
int main()
{
    int cofre[2][3],x,y, clave, claveg=123, intentos=3,respuesta;
    float suma=0;
    printf("************************************************************************************************************************\n\n\n");
    printf("\t\t\tPrograma clave de tres oportunidades\n\n\n");
    printf("************************************************************************************************************************\n");
    printf("Introduce tu clave de acceso: \n\n");
    while((intentos>0)&&(clave!=claveg))
    {
        printf("************************************************************************************************************************\n\n\n");
        printf("\nIntentos restantes: %i\n\n",intentos);
        printf("************************************************************************************************************************\n\n\n");
        scanf("%i",&clave);
        getch();
        system("cls");
        if (clave==claveg)
        {
            while(clave==claveg)
            {
                printf("************************************************************************************************************************\n\n");
                printf("%cHola!",173);
                printf("\n\n************************************************************************************************************************\n\n\n");
                getch();
            system("cls");

    printf("************************************************************************************************************************\n\n\n");
    printf("\t\t\tPrograma rreglos\n\n\n");
    printf("************************************************************************************************************************\n");
    do{
            printf("Dame los numeros con los que quieres llenar el arreglo\n");
    for (x=0;x<2;x++)

    {   for (y=0;y<3;y++)
        {
            scanf("%i",&cofre[x][y]);
        }

    }
    printf("\nEl arreglo es: \n");
    for (x=0;x<2;x++)

    {   printf("\n");
        for (y=0;y<3;y++)
        {
            printf("%i ",cofre[x][y]);
        }

    }
    printf("\nY su suma es: \n");
        for (x=0;x<2;x++)

    {
        for (y=0;y<3;y++)
        {
            suma=suma+cofre[x][y];
        }

    }
    printf("%.2f",suma);
    getch();
        system("cls");
        printf("¿Quieres repetir el programa?\n");
        printf("Presiona 1 para repetirlo, o 2 para finalizarlo\n\n\n");
        scanf("%i",&respuesta);
        printf("************************************************************************************************************************\n");
        getch();
        system("cls");
    }while((respuesta!=2)&&(respuesta==1));
    if ((respuesta!=1)&&(respuesta!=2))
        printf("Ups, has introducido una opcion invalida, y el programa ha finalizado por ello");
    if (respuesta==2)
        printf("************************************************************************************************************************\n\n\n");
        printf("Gracias por usar el programa\n");
        printf("\n\nPresione <enter> para salir...\n\n\n");
        printf("************************************************************************************************************************\n");
            break;
            }
        }
        else
            intentos--;
    }
    if (intentos==0)
        printf("Intentos terminados");
    return 0;
}
