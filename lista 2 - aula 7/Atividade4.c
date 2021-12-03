#include <stdio.h>

typedef struct {
    int nasc, atual, idadeProx;
}   atividade4;

void apresentaClassificacao(atividade4 *ati4);//
void obtemNivel(atividade4 *ati4);//
void limpaTela();
void pulaLinha();

int main(){
    atividade4 ati4;
    int final = 0, pepino;

    ati4.atual = 0;
    ati4.nasc = 0;

    do
    {
        printf("Data de nascimento: ");
    scanf("%d", &ati4.nasc);

    pulaLinha();

    printf("Data atual: ");
    scanf("%d", &ati4.atual);

    pulaLinha();

    apresentaClassificacao(&ati4);
    pulaLinha();
    printf("Caso deseje continuar, digite um inteiro ");
    scanf("%d", &pepino);

    obtemNivel(&ati4);
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

void apresentaClassificacao(atividade4 *ati4){
    ati4->idadeProx = ati4->atual - ati4->nasc;
    printf("A idade aproximada: %d\n", ati4->idadeProx);
}

void obtemNivel(atividade4 *ati4){
    if(ati4->idadeProx <= 10){
        printf("Crianca");
    } else if (ati4->idadeProx < 18){
        printf("Adolescente");
    } else if (ati4->idadeProx < 25){
        printf("Jovem");
    } else if (ati4->idadeProx <= 58){
        printf("Adulto");
    } else{
        printf("Idoso");
    }
}

void limpaTela(){
    printf("\33[H\33[2J");
}

void pulaLinha(){
    printf("\n");
}