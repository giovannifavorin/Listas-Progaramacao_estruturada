#include <stdio.h>

typedef struct {
    int pop, classe;
    char nome[100];
}   atividade5;

void apresentaClassificacao(atividade5 *ati5);//
void obtemNivel(atividade5 *ati5);//
void limpaTela();
void pulaLinha();

int main(){
    atividade5 ati5;
    int final = 0, pepino;

    ati5.pop = 0;


    do
    {
    printf("Populacao: ");
    scanf("%d", &ati5.pop);
    pulaLinha();

    printf("Nome da cidade: ");
    fflush(stdin);
    fgets(ati5.nome, 100, stdin);

    obtemNivel(&ati5);
    apresentaClassificacao(&ati5);
    pulaLinha();
    printf("Caso deseje continuar, digite um inteiro ");
    scanf("%d", &pepino);

    pulaLinha();

    printf("Digite - 1 Para tentar de novo\nDigite - 2 Para terminar o processo\n");
    scanf("%d", &final);
    limpaTela();
    } while (final != 2);
    return 0;
}

void obtemNivel(atividade5 *ati5){
    if(ati5->pop <= 5000){
        ati5->classe = 1;
    } else if (ati5->pop <= 15000){
        ati5->classe = 2;
    } else if (ati5->pop <= 10000){
        ati5->classe = 3;
    } else{
        ati5->classe = 4;
    }
}

void apresentaClassificacao(atividade5 *ati5){
    printf("O nome da cidade: %s\n", ati5->nome);

    switch (ati5->classe)
    {
    case 1:
        printf("Possui ate 5 mil habitantes, portanto:\nVila\n");
        break;

    case 2:
        printf("Possui ate 15 mil habitantes, portanto:\nDistrito\n");
        break;

    case 3:
        printf("Possui ate 100 mil habitantes, portanto:\nCidade\n");
        break;

    case 4:
        printf("Possui mais de 100 mil habitantes, portanto:\nMetropole\n");
        break;
    }
}

void limpaTela(){
    printf("\33[H\33[2J");
}

void pulaLinha(){
    printf("\n");
}