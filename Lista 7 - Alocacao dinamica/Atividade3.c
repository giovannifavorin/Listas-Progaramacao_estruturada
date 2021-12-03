#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//clang Atividade3.c -o Atividade3
//./Atividade3

typedef struct Dieta {
    char nome[100];
    double peso, calorias;
    struct Dieta *proximo;
}   atividade3;

void pega(atividade3 *at_ponto){
    printf("Qual o nome da comida?\n");
    fflush(stdin);
    fgets(at_ponto->nome, 100, stdin);
    printf("Qual o peso?\n");
    scanf("%lf", &at_ponto->peso);
    printf("Quantas calorias?\n");
    scanf("%lf", &at_ponto->calorias);
}

void print(atividade3 *at_ponto){
    printf("O nome: %s\nO peso: %lf\nAs calorias: %lf\n", at_ponto->nome, at_ponto->peso, at_ponto->calorias);
}

int main(){
    atividade3 *ini_ponto;
    atividade3 *at_ponto;
    int resposta;

    ini_ponto = (atividade3*)malloc(sizeof(atividade3));
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
            at_ponto->proximo = (atividade3*)malloc(sizeof(atividade3));
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