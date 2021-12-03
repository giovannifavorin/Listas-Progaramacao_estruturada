#include <stdio.h>
#include <string.h>
//clang Atividade3.c -o Atividade3
//./Atividade3
int main(){
    char primeiro[5][100], segundo[5][100];
    int i = 0, j, pos = 0, tamanho = 0;

    printf("Digite o PRIMEIRO nome das 5 pessoas.\n");
    for (i = 0; i < 5; i++){
        fflush(stdin);
        fgets(primeiro[i], 100, stdin);
    }
    printf("Digite o SEGUNDO nome das 5 pessoas.\n");
    for (i = 0; i < 5; i++){
        fflush(stdin);
        fgets(segundo[i], 100, stdin);
    }

    for ( i = 0; i < 5; i++){
        printf("Posicao: %d\n",i);
        tamanho = strlen(primeiro[i]);
        printf("O tamanho do PRIMEIRO nome: %d\n", tamanho - 1);
        tamanho = strlen(segundo[i]);
        printf("O tamanho do SEGUNDO nome: %d\n", tamanho - 1);
        strcat(primeiro[i], segundo[i]);
        printf("O nome %s", primeiro[i]);
        printf("\n-----------------\n");
    }
    return 0;
}