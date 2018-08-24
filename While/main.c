#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros;
    int acumPos=0;
    int acumNeg=0;
    int contPos=0;
    int contNeg=0;
    int contCeros=0;
    int cantPares=0;
    int max;
    int flag=0

    int diferencia
    float promedioPos;
    float promedioNeg;
    char respuesta;



    do
    {
        printf("ingrese un numero:");
        scanf("%d",&numeros);

        if(numeros>0)
        {
            acumPos+=numeros;
            contPos++;
        }
        else
        {
            if(numeros<0)
            {
                acumNeg+=numeros;
                contNeg++;
            }
            else
            {
                contCeros++;
            }
        }
        if(numeros%2==0)
        {
            cantPares++;
        }
        if(flag==0 || numeros>maximo)
        {
            maximo=numeros;
            flag=1;
        }
         if(flag==0 || numeros<minimo)
        {
            minimo=numeros;
            flag=1;
        }

        printf("desea ingresar otro numero?s/n");
        setbuf(stdin,NULL);
        scanf("%c",&respuesta);

    }while(respuesta=='s');
    promedioPos=(float)acumPos/contPos;
    promedioNeg=acumNeg/contNeg;
    diferencia=acumNeg+acumPos

    printf("el acumulado de positivos es: %d\n", acumPos);
    printf("el acumulado de negativos es: %d\n", acumNeg);
    printf("el contador de negativos es: %d\n", contNeg);
    printf("el contador de positivos es: %d\n", contPos);
    printf("el contador de ceros es: %d\n", contCeros);
    printf("el contador de pares es: %d\n", cantPares);
    printf("el promedio de posit es: %d\n", promedioPos);
    printf("el promedio de negat es: %d\n", promedioNeg);



    return 0;
}
