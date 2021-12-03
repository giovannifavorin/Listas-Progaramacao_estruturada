#include <stdio.h>
#include <string.h>
#include <ctype.h>
//clang Atividade1.c -o Atividade1
//./Atividade1
int main(){
    char primeiro[2][100], segundo[2][100];
    int i = 0, j, pos = 0, menu = 0;
    do{
        printf("\33[H\33[2J");
        i = 0;
        printf("Qual o primeiro nome da primeira pessoa?\n");
        fflush(stdin);
        fgets(primeiro[i], 100, stdin);
        fflush(stdin);
        printf("Qual o segundo nome da primeira pessoa?\n");
        fflush(stdin);
        fgets(segundo[i], 100, stdin);
        i++;
        printf("Qual o primeiro nome da segunda pessoa?\n");
        fflush(stdin);
        fgets(primeiro[i], 100, stdin);
        printf("Qual o segundo nome da segunda pessoa?\n");
        fflush(stdin);
        fgets(segundo[i], 100, stdin);

        printf("\n--Os primeiros nomes em maiusculo--\n");
        for (i = 0; i < 2; i++){
            do{
                for (pos = 0; pos < 100; pos++){
                    if (isspace(primeiro[i][pos]))
                        j = 2;
                    else
                        primeiro[i][pos] = toupper(primeiro[i][pos]);
                }
            } while (j == 0);
            printf("Primeira pessoa: %s", primeiro[i]);
        }
        printf("\n--Os segundos nomes em minusculo--\n");
        for (i = 0; i < 2; i++){
            do{
                for (pos = 0; pos < 100; pos++){
                    if (isspace(segundo[i][pos]))
                        j = 2;
                    else
                        segundo[i][pos] = tolower(segundo[i][pos]);
                }
            } while (j == 0);
            printf("Primeira pessoa: %s", segundo[i]);
        }
        printf("Deseja fazer de novo?\n1 - SIM\n2 - NAO\n");
        scanf("%d", &menu);
    } while (menu != 2);
    return 0;
}