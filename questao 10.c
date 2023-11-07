#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int num1, num2;
    int operacao;
    int soma;
    int subtracao;

    printf("digite um numero: ");
    scanf("%d", &num1);
    printf("digite um numero: ");
    scanf("%d", &num2);
    printf("escolha uma operação:\n ");
    printf("1- soma \n2- subtração: ");
    scanf("%d", &operacao);

    switch (operacao)
    {
    case 1:
        soma = num1 + num2;
        printf("soma: %d", soma);
        break;
    case 2:
        subtracao = num1 - num2;
        printf("subtração: %d", subtracao);
        break;
    default:
        printf("operação escolhida invalida");
        break;
    }

    return 0;
}