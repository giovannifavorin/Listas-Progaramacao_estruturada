#include <stdio.h>

typedef struct {
    int valor[3];
    int oper[2];
    int resposta;
} atividade7;

void calc(atividade7 *ati7);
void par(atividade7 *ati7);

int main(){
    atividade7 ati7;
    for (int i = 0; i < 3; i++){
        printf("Qual o valor\n");
        scanf("%d", &ati7.valor[i]);
    }
    for (int i = 0; i < 2; i++){
        printf("Digite 1 - Soma\nDigite 2 - Subtracao\nDigite 3 - Multiplicacao\nDigite 4 - Divisao\n");
        scanf("%d", &ati7.oper[i]);
    }
    calc(&ati7);
    par(&ati7);
    printf("%d", ati7.resposta);

    return 0;
}

void calc(atividade7 *ati7){
    if (ati7->oper[0] == 1 && ati7->oper[1] == 1){
        ati7->resposta = ati7->valor[0] + ati7->valor[1] + ati7->valor[2];
    } else if (ati7->oper[0] == 1 && ati7->oper[1] == 2){
        ati7->resposta = ati7->valor[0] + ati7->valor[1] - ati7->valor[2];
    } else if (ati7->oper[0] == 1 && ati7->oper[1] == 3){
        ati7->resposta = ati7->valor[0] + ati7->valor[1] * ati7->valor[2];
    } else if (ati7->oper[0] == 1 && ati7->oper[1] == 4){
        ati7->resposta = ati7->valor[0] + ati7->valor[1] / ati7->valor[2];
    } else if (ati7->oper[0] == 2 && ati7->oper[1] == 1){
        ati7->resposta = ati7->valor[0] - ati7->valor[1] + ati7->valor[2];
    } else if (ati7->oper[0] == 2 && ati7->oper[1] == 2){
        ati7->resposta = ati7->valor[0] - ati7->valor[1] - ati7->valor[2];
    } else if (ati7->oper[0] == 2 && ati7->oper[1] == 3){
        ati7->resposta = ati7->valor[0] - ati7->valor[1] * ati7->valor[2];
    } else if (ati7->oper[0] == 2 && ati7->oper[1] == 4){
        ati7->resposta = ati7->valor[0] - ati7->valor[1] / ati7->valor[2];
    } else if (ati7->oper[0] == 3 && ati7->oper[1] == 1){
        ati7->resposta = ati7->valor[0] * ati7->valor[1] + ati7->valor[2];
    } else if (ati7->oper[0] == 3 && ati7->oper[1] == 2){
        ati7->resposta = ati7->valor[0] * ati7->valor[1] - ati7->valor[2];
    } else if (ati7->oper[0] == 3 && ati7->oper[1] == 3){
        ati7->resposta = ati7->valor[0] * ati7->valor[1] * ati7->valor[2];
    } else if (ati7->oper[0] == 3 && ati7->oper[1] == 4){
        ati7->resposta = ati7->valor[0] * ati7->valor[1] / ati7->valor[2];
    } else if (ati7->oper[0] == 4 && ati7->oper[1] == 1){
        ati7->resposta = ati7->valor[0] / ati7->valor[1] + ati7->valor[2];
    } else if (ati7->oper[0] == 4 && ati7->oper[1] == 2){
        ati7->resposta = ati7->valor[0] / ati7->valor[1] - ati7->valor[2];
    } else if (ati7->oper[0] == 4 && ati7->oper[1] == 3){
        ati7->resposta = ati7->valor[0] / ati7->valor[1] * ati7->valor[2];
    } else if (ati7->oper[0] == 4 && ati7->oper[1] == 4){
        ati7->resposta = ati7->valor[0] / ati7->valor[1] / ati7->valor[2];
    }
}

void par(atividade7 *ati7){
    if (ati7->resposta / 2 > 1){
        printf("\nPar\n");
    } else{
        printf("\nImpar\n");
    }
}