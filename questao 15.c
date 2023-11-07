#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include  <ctype.h>

int main(){

int num;
int convert;
int soma;
int sub;

printf("tipo de convercao \n1= milha para kilometro \n2= kilometro para milha\n3= celsius para fahrenheit\n4= fahrenheit para celsius: \n");
scanf("%d", &convert);

printf("digite um numero: ");
scanf("%d", &num);


switch (convert)
{
case 1:
convert = num*convert;
printf("conversao: %d mi", convert);
    break;
case 2:
convert = num/convert;
printf("conversao: %d km", convert);
break;
case 3:
convert = (num*1.8)+32;
printf("conversao %d c", convert);
break;
case 4:
convert = (num/1.8) + 32;
printf("conversao %d f", convert);
break;
default:
printf("opcao invalida");
    break;
}


return 0;
}