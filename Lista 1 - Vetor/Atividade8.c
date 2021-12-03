#include <stdio.h>
//Implementar uma parada caso queira no vetor
typedef struct Atividade8{
    int idade[100];
    int media;
    int velho;
    int endVelho;
}Atividade8;

int inicializar(Atividade8 *IBGE){
    for (int i = 0; i != 100; i++){
        IBGE->idade[i] = 0;
    }
    IBGE->endVelho = 0;
    IBGE->media = 0;
    IBGE->velho = 0;


    return 0;
}

int pergunta(Atividade8 *IBGE){
    for (int i = 0; i < 100; i++){
        printf("Qual a idade?");
        scanf("%d", &IBGE->idade[i]);
    }
    return 0;
}

int media(Atividade8 *IBGE){
    for (int i = 0; i < 100; i++)
        IBGE->media = IBGE->media + IBGE->idade[i];

        IBGE->media = IBGE->media / 100;
    return 0;
}

int buscaVelho(Atividade8 *IBGE){
    for (int i = 0; i < 100; i++){
        if (IBGE->velho < IBGE->idade[i]){
            IBGE->velho = IBGE->idade[i];
            IBGE->endVelho = i + 1;
        }
    }
    return 0;
}

int main(){
    Atividade8 IBGE;

    inicializar(&IBGE);
    pergunta(&IBGE);
    media(&IBGE);
    buscaVelho(&IBGE);
    printf("O mais velho tem:\n%d anos\n\nSendo o:\n%d da lista\n\nA media:\n%d",IBGE.velho, IBGE.endVelho, IBGE.media);

    return 0;
}