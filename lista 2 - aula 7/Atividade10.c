#include <stdio.h>

typedef struct {
    double notaT, notaP, media;
    char nome[100];
} atividade10;

void calc(atividade10 *ati10);
void print(atividade10 *ati10);

int main(){
    atividade10 ati10;
    int final;

    do{
        printf("Qual seu nome?\n");
        fflush(stdin);
        fgets(ati10.nome, 100, stdin);

        printf("\33[H\33[2J");

        printf("%sQual sua nota teorica?\n", ati10.nome);
        scanf("%lf", &ati10.notaT);
        printf("Qual sua nota pratica?\n");
        scanf("%lf", &ati10.notaP);

        calc(&ati10);
        printf("A media: %.2lf\n", ati10.media);
        print(&ati10);

        printf("Digite 1 - Tentar de novo\nDigite 2 - Terminar o processo\n");
        scanf("%d", &final);
    } while (final != 2);

    return 0;
}

void calc(atividade10 *ati10){
    ati10->media = ((ati10->notaT * 3) + (ati10->notaP * 7)) / 10;
}

void print(atividade10 *ati10){
    if ((ati10->notaT + ati10->notaP) >= ati10->media){
        printf("Parabens\n%sPassou\n", ati10->nome);
    } else{
        printf("Infelizmente\n%sNao passou\n", ati10->nome);
    }
}