#include "UTN_INPUT.H"
#include <stdio.h>

int pedirEntero(char texto[],int min,int max)
{
    int numero;
    printf("ingrese %s",texto);
    scanf("%d", &numero);


    return numero;
    }

    int validarEntero(int numero,char texto[],int min, int max)
    {

    while(numero<min||numero>max)
    {
    printf("REingrese %s",texto);
    scanf("%d",&numero);
    }
    return numero;
    }
