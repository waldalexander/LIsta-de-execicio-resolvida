/* Faça um programa que receba uma palavra e a imprima de trás-para-frente.*/

#include<stdio.h>
#include<stdlib.h>

void main(){

char palavra;
int i, tam;

printf ("digite uma palavra: \n");
    gets(palavra);
tam=strlen(palavra);
printf ("resultado: " );
for (i=tam-1;i>=0;i--);
printf ("%c", palavra);

printf("\n\n");

return 0;
}
