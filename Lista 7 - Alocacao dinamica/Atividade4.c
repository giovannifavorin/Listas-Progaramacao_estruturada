#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//clang Atividade4.c -o Atividade4
//./Atividade4

typedef struct concessionaria {
    char cor[100], placa[6], nome_proprietario[100], modelo[100];
    int choice_combust, ano, n_chassi;
    struct concessionaria *proximo;
}   atividade4;

void buscaA(){
    atividade4 *percorre = ini_ponto;

}
void buscaB(){
    
}
void buscaC(){
    
}
void buscaD(){
    
}

int main(){
    atividade4 *ini_ponto;
    atividade4 *at_ponto;
    int resposta, aux, aux1;

    ini_ponto = (atividade4 *)malloc(sizeof(atividade4));
        if (ini_ponto == NULL)
            exit(1);
    at_ponto = ini_ponto;

    do{
        do{
            printf("Digite 1 - Para um novo cadastro\nDigite 2 - Para a busca A\nDigite 3 - Para a busca B\nDigite 4 - Para a busca C\nDigite 5 - Para a busca D\nDigite 6 - Para fechar o programa\n");
            scanf("%d", &resposta);
        } while (resposta > 6 || resposta < 0);
        switch (resposta){
        case 1:
            printf("Qual o nome do proprietario?\n");
            fflush(stdin);
            fgets(at_ponto->nome_proprietario, 100, stdin);
            do{
                printf("Digite 1 - Gasolina\nDigite 2 - Alcool\nDigite 3 - Diesel\n");
                scanf("%d", &at_ponto->choice_combust);
            }   while(at_ponto->choice_combust > 3 || at_ponto->choice_combust < 0);
            printf("Qual o modelo do carro?\n");
            fflush(stdin);
            fgets(at_ponto->modelo, 100, stdin);
            printf("Qual a cor do carro?\n");
            fflush(stdin);
            fgets(at_ponto->cor, 100, stdin);
            printf("Numero do chassi?\n");
            scanf("%d", &at_ponto->n_chassi);
            printf("Qual o ano do carro?\n");
            scanf("%d", &at_ponto->ano);
            do{
                printf("Qual a placa do carro?\n");
                fflush(stdin);
                fgets(at_ponto->placa, 6, stdin);
                for(int i = 0; i < 3; i++)
                    if (at_ponto->placa[i] < 'a' || at_ponto->placa[i] > 'z')
                        aux = 0;
                for(int i = 3; i < 6; i++)
                    if (at_ponto->placa[i] > 9 || < 0)
                        aux1 = 0;
            }   while(aux == 0 || aux1 == 0);
            
            break;
        case 2:
            
            break;
        case 3:
            
            break;
        case 4:
            
            break;
        case 5:
            
            break;
        case 6:
            
            break;
        }
    } while (resposta != 6);
    return 0;
}