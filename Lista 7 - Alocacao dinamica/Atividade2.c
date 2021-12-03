#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//clang Atividade2.c -o Atividade2
//./Atividade2

typedef struct restoronto{
    char nome[100], endereco[100], comida[100];
    double preco;
    struct restoronto *proximo;
}   atividade2;

void pega(atividade2 *at_ponto){
    printf("Qual o nome do restaurante?\n");
    fflush(stdin);
    fgets(at_ponto->nome, 100, stdin);
    printf("Qual o nome da comida?\n");
    fflush(stdin);
    fgets(at_ponto->comida, 100, stdin);
    printf("Qual o endereco?\n");
    fflush(stdin);
    fgets(at_ponto->endereco, 100, stdin);
    printf("Qual a media de preco?\n");
    scanf("%lf", &at_ponto->preco);
}

void print(atividade2 *at_ponto){
    printf("O nome do restaurante: %sO nome da comida: %sO endereco do restaurante: %sA media de preco: %lf",at_ponto->nome, at_ponto->comida, at_ponto->endereco, at_ponto->preco);
}

int main(){
    atividade2 *ini_ponto;
    atividade2 *at_ponto;
    int resposta;

    ini_ponto = (atividade2 *)malloc(sizeof(atividade2));
        if (ini_ponto == NULL)
            exit(1);
    at_ponto = ini_ponto;

    do{
        do{
            printf("Digite 1 - Para cadastrar alguem\nDigite 2 - Para printar todos os cadastros e fechar o programa\n");
            scanf("%d", &resposta);
            fflush(stdin);
        } while ((resposta > 2 || resposta < 1) && resposta != (int)resposta);
        switch (resposta){
        case 1:
            pega(at_ponto);
            at_ponto->proximo = (atividade2*)malloc(sizeof(atividade2));
            at_ponto = at_ponto->proximo;
            break;

        case 2:
            at_ponto->proximo = NULL;
            at_ponto = ini_ponto;
            do{
                print(at_ponto);
                at_ponto = at_ponto->proximo;
            } while (at_ponto != NULL);
            break;
        }
    } while (resposta != 2);
    free(at_ponto);
    free(ini_ponto);
    return 0;
}

