#include <stdio.h>
#include <string.h>
//clang Atividade3.c -o Atividade3
//./Atividade3

typedef struct{
    int elementos[5], aux;
} atividade3;

int main(){
    atividade3 dados;

    printf("Digite os 5 valores. \n");
    for (int i = 0; i < 5; i++)
        scanf("%d", &dados.elementos[i]);
    
    for (int i = 0; i < 5; i++){
        if ((dados.elementos[i] % 2) == 0){
            printf("A posicao: %d, e par, numero: %d\n", i + 1, dados.elementos[i]);
        }
    }
    

    return 0;
}