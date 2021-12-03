#include <stdio.h>

typedef struct{
    int idade;
    char nome[100];
}   atividade2;

int main(){
    atividade2 ati2;

    printf("Qual o seu nome?\n");
    fflush(stdin);
    fgets(ati2.nome, 100, stdin);

    printf("Qual a sua idade?\n");
    scanf("%d", &ati2.idade);

    printf("Nome: %sIdade: %d", ati2.nome, ati2.idade);

    return 0;
}