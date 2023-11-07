#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include  <ctype.h>

int main(){

int resposta;

printf("-------------------main menu--------------\n");
printf("1- novo jogo\n");
printf("2- carregar jogo\n");
printf("3- configuracoes\n");

printf("digite um numero do menu de opcoes: ");
scanf("%d", &resposta);

switch (resposta)
{
case 1:
printf("novo jogo:\n");
printf("escolha a dificuldade: \n");
printf("--facil\n");
printf("--medio\n");
printf("--difil\n");
 break;
case 2:
printf("jogos salvos: \n");
printf("yenit--------100:00\n");
printf("no save------------\n");
printf("no save------------\n");
break;
case 3: 
printf("configuracoes: \n");
printf("--graifcos\n");
printf("--controles\n");
printf("--jogo\n");
break;
default:
printf("opcao invalida");
    break;
}


    return 0;
}