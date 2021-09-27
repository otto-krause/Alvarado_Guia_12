#include<stdlib.h>
#include<stdio.h>

int Numero1(int Num1);
int Numero2(int Num2);

void main()
{
    int Num1=0, Num2=0;
    printf("Ingrese dos numeros\n");
    scanf("%d", &Num1);
    scanf("%d", &Num2);

    system("cls");

    Numero1(Num1);
    Numero2(Num2);

    system("pause");
}

int Numero1(int Num1)
{
    printf("%d\n", Num1);
    return 0;
}

int Numero2(int Num2)
{
    printf("\n%d", Num2);
    return 0;
}
