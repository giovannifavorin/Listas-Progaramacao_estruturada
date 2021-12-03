#include <stdio.h>
#include <string.h>
//clang Atividade2.c -o Atividade2
//./Atividade2
int main(){
    int quant = 0, igualdade, i, j;
    char nome[5][100];

    printf("Digite o nome dos itens.\n");
    for (quant = 0; quant < 5; quant++){
        fflush(stdin);
        fgets(nome[quant], 100, stdin);
    }
    for ( i = 0; i < quant; i++){
        for ( j = 0; j < i; j++){
            igualdade = strcmp(nome[i], nome[j]);
            if (igualdade == 0)
                printf("\n%sEste item se repete nas posicoes %d e %d\n", nome[j], i, j);
        }
    }
    return 0;
}