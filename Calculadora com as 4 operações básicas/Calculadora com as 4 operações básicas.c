#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
main ()
{
    setlocale (LC_ALL, "portuguese");
    float  n1=0,n2=0,resul=0;
    int oper=0;
    printf ("Digite o primeiro n�mero:\n");
    scanf ("%f", &n1);
    printf ("\nDigite o segundo n�mero:\n");
    scanf ("%f", &n2);
    printf ("\n---------------------\n");


    printf ("Escolha o operador:\n");
    printf ("1 = Soma\n");
    printf ("2 = Subtra��o\n");
    printf ("3 = Multiplicador\n");
    printf ("4 = Divis�o\n");
    printf ("---------------------\n");
    scanf ("%i", &oper);
    printf("\n");
    if (oper==1)
        resul = n1 + n2;
    else if (oper ==2)
        resul = n1 - n2;
    else if (oper ==3)
        resul = n1*n2;
    else if (oper ==4) {
        if (n2==0)
        {
            printf ("Imposs�vel dividir. Tente novamente!\n");
        }
    else
        resul = n1/n2;}
    else
        printf ("Operador inv�lido. Tente novamente!\n");
        printf ("O resultado �= %.2f.\n", resul);
}
