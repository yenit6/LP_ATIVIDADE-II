#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int resposta;

    printf("-------------lojinha da dona lucrecia------------\n");
    printf("1- camiseta\n");
    printf("2- cal�a\n");
    printf("3- sapato\n");

    printf("escolha um produto com base no numero: ");
    scanf("%d", &resposta);


    switch (resposta)
    {
    case 1:
        printf("--camiseta de algodao vermelha--\n");
        printf("--tamanho desponivel: P , M,  G--\n");
        printf("-- pre�o: R$30,00\n");
    case 2:
        printf("--cal�a jeans--\n");
        printf("--tamanho desponivel: 36, 37, 38--\n");
        printf("--pre�o: R$100,00--\n");
        break;
    case 3:
        printf("--sapato--\n");
        printf("--tamanho disponivel: 39, 40, 41--\n");
        printf("--pre�o: R$:70,00--\n");
        break;
    default:
        printf("op��o invalida\n");
        break;
    }

    return 0;
}