#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{

    int idade;

    printf("digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("acesso permitido");
    }
    else
    {
        printf("acesso negado");
    }

return 0;
}