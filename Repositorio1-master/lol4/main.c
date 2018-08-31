#include <stdio.h>
#include <stdlib.h>

int main()
{
    int suma;
    int numeroUno;
    int numeroDos;

    printf("Ingrrese numero uno ");
    scanf("%d",&numeroUno);

          printf("Ingrese numero dos ");
          scanf("%d",&numeroDos);

          suma = sumar(numeroUno,numeroDos);

          printf("El resultado es %d",suma);
          return 0;
}
int sumar(int numeroUno, int numeroDos)
{
    int suma;
    suma = numeroUno+numeroDos;

    return suma;

}
