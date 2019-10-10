#include<stdio.h>

int main(){
    char nome[100];
    int q; //quantidade de letras
        printf("digitação livre: ");
gets(nome);
        q=0;
    while(nome[q] != '\0'){
    q++;
    }
        printf("numero de carateres digitados: %d", q);
}
