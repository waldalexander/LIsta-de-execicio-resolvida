#include<stdio.h>

int main(void){
    char nome[100];
        printf("digite um nome \n");
            gets(nome);
 if (nome[0] =='A' || nome[0] == 'a'){
        printf("%s",nome);
 }else{
        printf("A palavra nao inicia com A.");
}

}




