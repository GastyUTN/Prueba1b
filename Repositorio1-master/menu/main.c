#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>//biblioteca


int main()
{
    char opcion;

    do
    {
        printf("(A)lta Usuario\n");
        printf("(B)aja Usuario\n");
        printf("(M)odificacion Usuario\n");
        printf("(S)alir Usuario\n");
        printf("Elija una opcion");
        fflush(stdin);
        scanf("%c", &opcion);
        opcion = toupper(opcion);

        switch(opcion)
        {
        case 'A':
            printf("Estor dando de alta..\n ");
            break;
        case 'B':
            printf("Estor dando de baja..\n ");
            break;
        case 'M':
            printf("Estor modificando..\n ");
            break;


        }
        system("pause");//una pausa pide una tecla para continua
        system("cls");//borra todo lo anterior

    }
    while(opcion!='S');
    return 0;
}
