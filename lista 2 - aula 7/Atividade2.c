#include <stdio.h>

typedef struct {
    int X, N, resultado;
}   atividade2;

void calculo(atividade2 *ati);

int main(){
    atividade2 ati;

    ati.N = 0;
    ati.resultado = 1;
    ati.X = 0;

    printf("Qual o valor de X?\n");
    scanf("%d", &ati.X);

    printf("Qual o valor que deseja elevar o X?\n");
    scanf("%d", &ati.N);

    calculo(&ati);

    printf("O resultado: %d", ati.resultado);

    return 0;
}

void calculo(atividade2 *ati){
    for (int i = 0; i < ati->N; i++)
        ati->resultado = ati->X * ati->resultado;
    
}