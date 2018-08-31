#include <stdio.h>
#include <stdlib.h>
//prototipo 2
int main()
{
    int numeroUno;
    int numeroDos;

    printf("ingrese numero uno: ");
    scanf("%d",&numeroUno);

    printf("ingrese numero dos: ");
    scanf("%d",&numeroDos);

    sumar(numeroUno,numeroDos);

    return 0;
}
void sumar(int n1, int n2)
{
    int sumar;

    sumar = n1 + n2;

    printf("El resultado es %d",sumar);
}
