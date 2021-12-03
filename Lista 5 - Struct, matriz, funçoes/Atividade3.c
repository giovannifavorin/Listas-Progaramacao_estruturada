#include <stdio.h>
#include <string.h>
//clang Atividade3.c -o Atividade3
//./Atividade3
//nome,  o  endereço,  o  preço médio  e  o  tipo  de  comida
typedef struct {
    char nomeRes[100], endereco[100], Comida[100];
    int mediaPreco;
}   atividade3;

void limpaTela();
void cad(atividade3 *cadRest);

int main(){
    atividade3 restaurante[5][5];
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
                            printf("Nome do restaurante: %sEndereco: %sNome do prato: %sPreco medio: %d\n", restaurante[i][j].nomeRes, restaurante[i][j].endereco, restaurante[i][j].Comida, restaurante[i][j].mediaPreco);
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

void cad(atividade3 *cadRest){
    printf("Qual o nome do restaurante?\n");
    fflush(stdin);
    fgets(cadRest->nomeRes, 100, stdin);
    printf("Qual o endereco do restaurante?\n");
    fflush(stdin);
    fgets(cadRest->endereco, 100, stdin);
    printf("Qual o nome do prato?\n");
    fflush(stdin);
    fgets(cadRest->Comida, 100, stdin);
    printf("Qual o preco medio dos pratos?\n");
    scanf("%d", &cadRest->mediaPreco);
}