#include <stdio.h>
#include <string.h>
#include <ctype.h>
//clang Atividade6.c -o Atividade6
//./Atividade6
int main(){
    char nome[30], maior[30];

    printf("Qual o nome? ");
    fflush(stdin);
    fgets(nome, 30, stdin);

    for (int i = 0; i < strlen(nome); i++){
        maior[i] = toupper(nome[i]);
    }
    
    printf("\t\t\t\t%s", maior);

    return 0;
}