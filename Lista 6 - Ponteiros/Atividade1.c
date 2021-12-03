#include <stdio.h>
#include <string.h>
//clang Atividade1.c -o Atividade1
//./Atividade1
typedef struct _Atividade1{
    int valor[3];
}   dados;

int main(){
    dados *dados;

    printf("Quais os valores? ");
    for (int i = 0; i < 3; i++)
        scanf("%d",&dados->valor[i]);

    for (int i = 0; i < 3; i++)
        printf("%d\n",dados->valor[i]);
    return 0;
}