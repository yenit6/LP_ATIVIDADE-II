#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char codigo[300];
    char codigoValido[300] = "123456";

    do
    {
        printf("digite o codigo de acesso: ");
        scanf("%s", &codigo);

        if (strcmp(codigo, codigoValido) != 0)
        {
            printf("codigo errado tente novamente\n");
        }
        else
        {

            printf("codigo valido bem vindo!");
        }
    } while (strcmp(codigo, codigoValido) != 0);

    return 0;
}