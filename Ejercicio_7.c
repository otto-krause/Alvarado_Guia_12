#include <stdio.h>
#include <stdlib.h>

int RelacionNumeros(int Num1, int Num2);

void main()
{
    int Num1=0, Num2=0;
    printf ("Ingrese dos numeros\n");
    scanf ("%d",&Num1);
    scanf ("%d",&Num2);

    system("cls");

    RelacionNumeros(Num1, Num2);

    system("pause");
}

int RelacionNumeros(int Num1, int Num2)
{
    if (Num1==Num2)
        {
        printf("Ambos numeros son iguales");
        return 1;
        }
    else
        {
        if (Num1>Num2)
            {
            printf("El primer numero es mayor al segundo");
            return 0;
            }
        else
            {
            printf("El segundo numero es mayor al primero");
            return 0;
            }
        }
}
