#include <stdio.h>
#include <stdlib.h>
int sumar(void);
int main()
{
    int suma;
    suma = sumar();

    printf("El resultado es %d",suma);
    return 0;
}
int sumar (void)
{

    int suma;
    int numeroUno;
    int numeroDos;

    printf("ingrese numero uno ");
    scanf("%d",&numeroUno);

    printf("ingrese numero dos ");
    scanf("%d",&numeroDos);

    suma = numeroUno + numeroDos;

    return suma;
}
