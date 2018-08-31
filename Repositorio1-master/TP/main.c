#include <stdio.h>
#include <stdlib.h>
//me permita al usuario ingresar un numero

int pedirNumero(char[]);//cadenas de caracteres o [] = *
int main()
{
    int legajo;
    int nota;
    int edad;
    int dni;

    legajo = pedirNumero("ingrese un legajo");
    nota = pedirNumero("ingrese un nota");
    edad= pedirNumero("ingrese una edad");
    dni = pedirNumero("Ingrese dni");

    return 0;
}
int pedirNumero(char texto[])
{
    int numero;

    printf("%s", texto);
    scanf("%d", &numero);

    return numero;

}

