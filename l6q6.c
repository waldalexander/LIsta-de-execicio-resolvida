/*Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o nome da pessoa e a palavra
"ACEITA", caso contrário imprimir "NAO ACEITA".*/

#include<stdio.h>
#include<stdlib.h>

int main(){

char nome[50], sexo[10];
int idade, s;

    printf("Digite seu nome: ");
gets("nome");
    printf("Digite sua idade: ");
scanf("%d", &idade);
    printf("Digite o numero correspodente ao seu sexo: \n 1 (masculino) \n 2 (feminino) \n");
s=strlen(sexo);

if (s==2 && idade<25)
    printf ("ACEITA");
else
    printf ("NAO ACEITA");

    return 0;
}
