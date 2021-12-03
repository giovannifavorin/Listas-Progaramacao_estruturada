#include <stdio.h>

typedef struct{
    int quantAl, quantAp, quantRep;
} atividade6;

void apresentaPorcentagem(atividade6 *ati6);
void limpaTela();
void pulaLinha();

int main(){
    int pepino;
    atividade6 ati6;

    printf("Qual a quantidade de alunos total: ");
    scanf("%d", &ati6.quantAl);
    pulaLinha();
    printf("Qual a quantidade de alunos aprovados: ");
    scanf("%d", &ati6.quantAp);
    pulaLinha();
    printf("Qual a quantidade de alunos reprovados: ");
    scanf("%d", &ati6.quantRep);

    apresentaPorcentagem(&ati6);
    printf("\nDigite um inteiro para finalizar\n");
    scanf("%d", &pepino);
    return 0;
}

void apresentaPorcentagem(atividade6 *ati6){
    int porcAp = 0, porcRep = 0;

    porcAp = (ati6->quantAp * 100) / ati6->quantAl;
    porcRep = (ati6->quantRep * 100) / ati6->quantAl;

    printf("Total de alunos aprovados: %d\n", porcAp);
    printf("Total de alunos reprovados: %d\n", porcRep);
}

void limpaTela(){
    printf("\33[H\33[2J");
}

void pulaLinha(){
    printf("\n");
}