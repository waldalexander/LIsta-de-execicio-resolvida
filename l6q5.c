/*Digite um nome, calcule e retorne quantas letras tem esse nome.*/

#include<stdio.h>
#include<stdlib.h>

int main(){

char nome[50];
int i, x;
for (i=1;i<=50;i++){
    printf("digite um nome: ");
        gets(nome);

x=strlen(nome);
    printf("\n este nome tem %d letras \n\n", x);
}
    return 0;
}
