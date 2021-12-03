#include <stdio.h>
#include <string.h>
//clang Atividade2.c -o Atividade2
//./Atividade2

typedef struct{
    int numeros[3], A, B, C;
}   dados;

void ordem(dados *dados);

int main(){
    dados dados;

    printf("Quais os valores? ");
    for (int i = 0; i < 3; i++)
        scanf("%d", &dados.numeros[i]);
    
    ordem(&dados);

    return 0;
}

void ordem(dados *dados){
    int menor, maior;

    menor = dados->numeros[0];
    maior = dados->numeros[0];

    for (int i = 0; i < 3; i++){
        for (int j = 1; j < 3; j++){
            if(dados->numeros[i] > menor){
                menor = dados->numeros[i];
            }
            if (dados->numeros[i] < maior){
                maior = dados->numeros[i];
            }
        }
        printf("Os valores: %d\n", dados->numeros[i]);
    }
    printf("O menor: %d\nO maior: %d\n", maior, menor);
    
}