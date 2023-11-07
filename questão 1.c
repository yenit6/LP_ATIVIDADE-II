#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include  <ctype.h>

int main(){

int temperatura;

printf("digite a temperatura: ");
scanf("%d", &temperatura);

if (temperatura >= 25)
{
    printf("clima ensolarado");
}
else if (temperatura > 15 &&  temperatura < 25)
{
    printf("clima nublado");
}
else
{
    printf("clima chuvoso");
}



    return 0;
}