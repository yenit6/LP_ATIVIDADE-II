#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{

    setlocale(LC_ALL, "portuguese");
    int num1, num2;

    printf("digite um numero: ");
    scanf("%d", &num1);
    printf("digite um numero: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("o primeiro numero � maior que o segundo");
    }
    else
    {
        printf("o segundo numero � maior que o primiero");
    }

    return 0;
}