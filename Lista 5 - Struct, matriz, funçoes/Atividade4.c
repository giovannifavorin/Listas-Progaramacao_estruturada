#include <stdio.h>
#include <string.h>
//clang Atividade4.c -o Atividade4
//./Atividade4
//o  nome  de  uma  comida,  o peso de uma porção e o número de caloria
typedef struct {
    char  Comida[100];
    int peso, caloria;
}   Dieta;

void limpaTela();
void cad(Dieta *cadRest);

int main(){
    Dieta restaurante[5][5];
    int Menu, choiceCad, i, j, coluna = 0, pepino;

    do{//Menu
        limpaTela();
        printf("\n--------Menu----------\n");
        do{
            printf("Digite 1 - Para cadastrar um usuario\nDigite 2 - Para ver todos os cadastros\nDigite 6 - Para finalizar o processo\n");
            scanf("%d", &Menu);
        } while (Menu > 2 || Menu < 1);

        switch (Menu){
        case 1:
            if (coluna == 5){
                printf("Nao pode cadastrar mais\n");
            }else{
                printf("\n--------Cadastro----------\n");
                do{
                    for (i = 0; i < 5; i++){
                        for (j = 0; j < 5; j++){
                            coluna = i;
                            cad(&restaurante[i][j]);
                            printf("Digite 1 - Para cadastrar outro usuario\nDigite 2 - Para ir para o menu\n");
                            limpaTela();
                        }
                    }
                } while (choiceCad != 2);
            }
            break;
        
        case 2:
            if (coluna > 0){
                limpaTela();
                printf("\n--------Print----------\n");
                for (i = 0; i < 5; i++){
                        for (j = 0; j < 5; j++){
                            printf("Nome do prato: %sPeso: %d\nCaloria: %d\n", restaurante[i][j].Comida, restaurante[i][j].peso, restaurante[i][j].caloria);
                        }
                    }
                printf("Digite um inteiro para prosseguir\n");
                scanf("%d", &pepino);
            } else{
                printf("Quantidade insuficiente de cadastros");
            }
            break;

        case 6:
            Menu = 6;
            break;
        }
    } while (Menu != 6);
    return 0;
}

void limpaTela(){
    printf("\33[H\33[2J");
} 

void cad(Dieta *cadRest){
    printf("Qual o nome do prato?\n");
    fflush(stdin);
    fgets(cadRest->Comida, 100, stdin);
    printf("Qual o peso?\n");
    scanf("%d", &cadRest->peso);
    printf("Qual a quantidade de calorias?\n");
    scanf("%d", &cadRest->caloria);
}