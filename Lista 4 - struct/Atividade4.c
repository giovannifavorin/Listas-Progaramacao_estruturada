#include <stdio.h>

typedef struct{
    int quantPortas;
    char cor[20], marca[100], modelo[100], motorizacao[100];
}   atividade4;

void perg(atividade4 *ati4);
void print(atividade4 *ati4);

int main(){
    atividade4 ati4[10];
    int final = 0, choice = 0;

    do{
        do{
            printf("Digite 1 - Para salvar os dados\nDigite 2 - Para printar os dados\n");
            scanf("%d", &choice);
        } while (choice > 2 || choice < 1);
        switch (choice){
        case 1:
            for (int i = 0; i < 1; i++)
                perg(&ati4[i]);
            break;
        case 2:
            for (int i = 0; i < 1; i++)
                print(&ati4[i]);
            break;
        }
        final = 0;
        printf("Digite 1 - Para continuar\nDigite 2 - Para terminar\n");
        scanf("%d", &final);
    } while (final != 2);

    return 0;
}

void perg(atividade4 *ati4){
    printf("Quantas portas?\n");
    scanf("%d", &ati4->quantPortas);
    printf("\nQual a cor?\n");
    fflush(stdin);
    fgets(ati4->cor, 20, stdin);
    printf("\nQual a marca?\n");
    fflush(stdin);
    fgets(ati4->marca, 100, stdin);
    printf("\nQual o modelo?\n");
    fflush(stdin);
    fgets(ati4->modelo, 100, stdin);
    printf("\nQual a motorizacao?\n");
    fflush(stdin);
    fgets(ati4->motorizacao, 100, stdin);
}

void print(atividade4 *ati4){
    printf("Quantidade de portas: %d\nCor %sMarca: %sModelo %sMotorizacao: %s", ati4->quantPortas, ati4->cor, ati4->marca, ati4->modelo, ati4->motorizacao);
}