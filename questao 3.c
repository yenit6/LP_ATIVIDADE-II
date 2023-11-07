#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{

    float nota;

    printf("digite uma nota: ");
    scanf("%f", &nota);

    if (nota >= 9)
    {
        printf("excelente");
    }
    else if (nota >= 7 && nota <= 8.9)
    {
        printf("bom");
    }
    else if (nota >= 5 && nota <= 6.9)
    {
        printf("razoavel");
    }
    else
    {
       printf("insuficiente");
    }

    return 0;
}