#include <stdio.h>
#include <ctype.h>
#include <string.h>
//clang Atividade5.c -o Atividade5
//./Atividade5
int main(){
    char primeiro[256], segundo[256];

    printf("Digite o PRIMEIRO nome da pessoa: ");
    fflush(stdin);
    scanf("%s", primeiro);
    printf("Digite o SEGUNDO nome da pessoa: ");
    fflush(stdin);
    scanf("%s", segundo);

    printf("%s / %s", segundo, primeiro);
    return 0;
}