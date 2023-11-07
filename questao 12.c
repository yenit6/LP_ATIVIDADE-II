#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{

    int nota;
    float media;
    int contador=0;
    int resposta;
    int soma = 0;

    do
    {
        printf("digite uma nota: ");
        scanf("%d", &nota);

        soma += nota;
        contador++;

        fflush(stdin);

        printf("deseja adicionar mais uma nota?\n1- para sim\n2- para nao: ");
        scanf("%d", &resposta);

    } while (resposta != 2);

    media = soma / contador;

    printf("soma: %d\n", soma);
    printf("media: %.1f\n", media);

    return 0;
}