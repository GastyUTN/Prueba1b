#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int acumuladorPositivos=0;
    int acumuladorNegativos=0;
    char respuesta;
    int contadorNegativos=0;
    int contadorPositivos=0;
    int contadorCeros=0;
    int contadorPares=0;
    float promedioPositivos;
    float promedioNegativos;
    int maximo;
    int flag=0;



    do
    {
        printf("Ingrese un numero:");
        scanf("%d",&numero);

        if(numero>0)
        {
            acumuladorPositivos=acumuladorPositivos+numero;
            contadorPositivos++;
        }
        else
        {
            if(numero<0)
            {
                acumuladorNegativos=acumuladorNegativos+numero;
                contadorNegativos++;
            }
            else
                {
                    contadorCeros++;
                }
        }
        if(numero%2==0)
            {
                contadorPares++;
            }

        if(flag==0 || numero>maximo )
            {
                maximo=numero;
                flag = 1;.

            }

        setbuf(stdin,NULL);
        printf("Desea ingresar otro numero? s/n");
        scanf("%c", &respuesta);


    }
    while(respuesta =='s');

    promedioPositivos= (float)acumuladorPositivos/contadorPositivos;
    promedioNegativos= (float)acumuladorNegativos/contadorNegativos;

    printf("El acumulado de positivos es:%d\n",acumuladorPositivos);
    printf("El acumulado de negativos es:%d\n",acumuladorNegativos);
    printf("El contador de positivos es:%d\n",contadorPositivos);
    printf("El contador de negativos es:%d\n",contadorNegativos);
    printf("El contador de cero es:%d\n",contadorCeros);
    printf("El contador de pares es:%d\n",contadorPares);
    printf("El promedio de positivos es:%2.f\n",promedioPositivos);
    printf("El promedio de negativos es:%2.f",promedioNegativos);



    return 0;
}
