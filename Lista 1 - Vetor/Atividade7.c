#include <stdio.h>
#include <math.h>

typedef struct Atividade7{
    double preco[100];
    double precotax[100];
    double taxa;
    double taxaFix;
    int fBool;
    
}Atividade7;

int inicializar(Atividade7 *lojaCD){
    for (int i = 0; i < 100; i++){
        lojaCD->preco[i] = 0;
        lojaCD->precotax[i] = 0;
    }
    lojaCD->taxa = 0;
    lojaCD->taxaFix = 10;

    return 0;
}

int pergValores(Atividade7 *lojaCD){
    for (int i = 0; i < 2/*100*/; i++){
        printf("O preco do CD: ");
        scanf("%lf", &lojaCD->preco[i]);
    }
    
    printf("Caso nao queira usar uma taxa propria, digite um numero menor ou igual a 0\n\nColoque apenas o valor inteiro\n\nA taxa desejada: ");
    scanf("%lf", &lojaCD->taxa);

    if (lojaCD->taxa > 0)
        lojaCD->fBool = 1;
    else
        lojaCD->fBool = 0;
    return 0;
}

int aumento1(Atividade7 *lojaCD){
    for (int i = 0; i != 2; i++)
        lojaCD->precotax[i] = ( lojaCD->preco[i] + (lojaCD->preco[i] * (lojaCD->taxa / 100)));

    for (int j = 0; j != 2; j++){
    printf("Preco com aumento: %.2lf\n", lojaCD->precotax[j]);
    }

    return 0;
}

int aumento2(Atividade7 *lojaCD){
    for (int i = 0; i != 2; i++)
        lojaCD->precotax[i] = ( lojaCD->preco[i] + (lojaCD->preco[i] * (lojaCD->taxaFix / 100)));

    for (int j = 0; j != 2; j++){
    printf("Preco com aumento: %.2lf\n", lojaCD->precotax[j]);
    }

    return 0;
}

int inicio(Atividade7 *lojaCD){
    for (int i = 0; i < 2; i++)
        printf("\nO preco original do CD: %.2lf", lojaCD->preco[i]);

    return 0;
}

int main(){
    Atividade7 lojaCD;

    inicializar(&lojaCD);
    pergValores(&lojaCD);

    printf("\33[H\33[2J");

    if (lojaCD.fBool == 1)
        aumento1(&lojaCD);
    else if(lojaCD.fBool == 0)
        aumento2(&lojaCD);
    else
        printf("Nao sei como fez isso, mas entre em contato comigo pra me explicar");

    inicio(&lojaCD);

    return 0;
}
/*if resposta x, taxa 10%, if resposta y, taxa dada, entregar preço com e sem as taxas*/