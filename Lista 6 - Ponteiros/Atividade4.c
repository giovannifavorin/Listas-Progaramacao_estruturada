#include <stdio.h>
#include <string.h>
//clang Atividade4.c -o Atividade4
//./Atividade4

typedef struct {
    int valores;
}   atividade4;

void comp(atividade4 *dados, int x){
    int maior = 0, quant_maior = 0;

    for (int i = 0; i < x; i++)
        if (maior < dados[i].valores)
            maior = dados[i].valores;

    for (int i = 0; i < x; i++)
        if (maior == dados[i].valores)
            quant_maior++;
    
    printf("O maior valor: %d\nSe repete : %d vezes", maior, quant_maior);
}

int main(){
    int x;
    printf("Quantos dados voce pretende cadastrar?\n");
    scanf("%d", &x);
    atividade4 dados[x];
    
    printf("Digite os valores para cadastro\n");
    for(int i = 0; i < x; i++){
        printf("Posicao: %d\nValor: ", i + 1);
        scanf("%d", &dados[i].valores);
    }
    comp(dados, x);
    return 0;
}