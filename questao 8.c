#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include  <ctype.h>

int main(){

int i;

printf("digite um numero: ");
scanf("%d", &i);

for ( i = i; i >=0; i--)
{
    printf("contagem: %d\n", i);
}



return 0;
}