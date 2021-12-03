#include <stdio.h>
#include <ctype.h>
#include <string.h>
//clang Atividade4.c -o Atividade4
//./Atividade4
int main(){
    char texto[1024],primeiraLetra;
    int tamanho = 0;

    printf("Digite o texto que deseja contar\n");
    fflush(stdin);
    fgets(texto, 1024, stdin);
    printf("\33[H\33[2J");

    tamanho = strlen(texto);

    primeiraLetra = toupper(texto[0]);
    printf("O tamanho do texto: \t\t\t%d\n", tamanho);
    printf("%c", primeiraLetra);
    for (int i = 1; i < tamanho; i++)
        printf("%c", texto[i]);

    return 0;
}

