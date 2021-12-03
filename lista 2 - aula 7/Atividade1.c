#include <stdio.h>

typedef struct {
    double alt[5], mAlt;
}   Atividade1;

void calculaMedia(Atividade1 *alt, int quantAlt);

void limpaTela();

int main(){
    Atividade1 at1;
    at1.mAlt = 0;
    int final = 0, inMenu = 0, quantAlt = 0;

    for (int i = 0; i < 5; i++)
        at1.alt[i] = 0.0;

//printf("Deseja cadastrar mais alguma altura?");
    do{
        limpaTela();
        do{
            printf("-------------Bem vindo-------------\n%d/5 vagas preenchidas\nDigite 1 para cadastrar alguma altura\nDigite 2 para encerrar e calcular a media\n", quantAlt);
            scanf("%d", &inMenu);
        } while (inMenu > 2 || inMenu < 1);

        switch (inMenu){
        case 1:
            limpaTela();
            printf("Qual a altura que deseja cadastrar?\n");
            scanf("%lf", &at1.alt[quantAlt]);
            quantAlt++;
            break;

        case 2:
            limpaTela();
            calculaMedia(&at1, quantAlt);
            printf("A media de alturas: %lf\n", at1.mAlt);
            final = 2;
            break;
        }

        if (quantAlt == 5){
            limpaTela();
            printf("Total de alturas: 5\nCadastros atuais: 5\nA media sera feita agora\n");
            calculaMedia(&at1, quantAlt);
            printf("A media de alturas: %.2lf\n", at1.mAlt);
            final = 2;
        }
    } while (final != 2);
    return 0;
}

void limpaTela(){
    printf("\33[H\33[2J");
}

void calculaMedia(Atividade1 *alt, int quantAlt){
    for (int i = 0; i < quantAlt; i++){
        alt->mAlt = alt->alt[i] + alt->mAlt;
    }
    alt->mAlt = alt->mAlt / quantAlt; 
}