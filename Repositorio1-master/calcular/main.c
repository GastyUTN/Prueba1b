
#include <stdlib.h>
#include "UTN_INPUT.H"
#include <stdio.h>
#include "UTN_INPUT.c"




int main()
{
    int edad;
    edad = pedirEntero("Ingrese su edad: ",18,65);
    printf("su edad es %d",edad);
    return 0;
}


