#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{

    int resposta;

    printf("escolha um idioma \n1- ingles\n2- espanhol\n3- frances: ");
    scanf("%d", &resposta);

    switch (resposta)
    {
    case 1:
        printf("Wellcome!");
        break;
    case 2:
        printf("Bienvenido!");
        break;
    case 3:
        printf("Accueillir!");
        break;
    default:
        printf("escolha invalida");
        break;
    }

    return 0;
}