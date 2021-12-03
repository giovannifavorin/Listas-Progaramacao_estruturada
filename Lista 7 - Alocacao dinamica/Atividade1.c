#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//clang Atividade1.c -o Atividade1
//./Atividade1
// leia o preço, o nome e  as baixas de todos os dias de  todos os produtose  armazene em uma lista  encadeada  simples
// após  percorra  a  estrutura  de  dados  e  verifique  qual  foi  o  produto  que teve mais baixa, ou seja, que foi mais vendido
typedef struct vetor{
    int codigo, baixa[4][6], maior;
    char nome[100];
    double preco;
    struct vetor *proximo;
} atividade1; 

int main(){
    atividade1 *ponto_inicial;
    atividade1 *proximo_ponto;
    atividade1 *mais_venda;
    int aux, resposta;

    ponto_inicial = (atividade1 *)malloc(sizeof(atividade1));
        if (ponto_inicial == NULL)
            exit(1);
    proximo_ponto = ponto_inicial;

    mais_venda->maior = 0;
    do{
        do{
            printf("Qual o codigo do produto? \n");
            scanf("%d", &proximo_ponto->codigo);
            fflush(stdin);
        } while (proximo_ponto->codigo != (int)proximo_ponto->codigo);
        for (int semanas = 0; semanas < 4; semanas++){
            printf("\33[H\33[2J");
            printf("Semana: %d\n", semanas);
            for (int dias = 0; dias < 6; dias++){
                do{
                    printf("Dia: %d\n", dias);
                    printf("Quantos desse produto fora vendido? \n");
                    scanf("%d", &proximo_ponto->baixa[semanas][dias]);
                    fflush(stdin);
                    proximo_ponto->maior = proximo_ponto->baixa[semanas][dias] + proximo_ponto->maior;
                } while (proximo_ponto->baixa[semanas][dias] != (int)proximo_ponto->baixa[semanas][dias]);
            }
        }
        do{
            printf("Qual o preco desse produto? \n");
            scanf("%lf", &proximo_ponto->preco);
            fflush(stdin);
        } while (proximo_ponto->preco != (int)proximo_ponto->preco);
        printf("Qual o nome desse produto? \n");
        fflush(stdin);
        fgets(proximo_ponto->nome, 100, stdin);

        printf("Digite 1 - para cadastrar mais um\nDigite 2 - para ir para o proximo passo\n");
        scanf("%d", &resposta);
        if (resposta == 1){
            proximo_ponto->proximo = (atividade1*)malloc(sizeof(atividade1));
            proximo_ponto = proximo_ponto->proximo;
        }
    } while (resposta == 1);

    proximo_ponto->proximo = NULL;
    proximo_ponto = ponto_inicial;

    do{
        if (mais_venda->maior < proximo_ponto->maior)
            mais_venda = proximo_ponto;
        proximo_ponto = proximo_ponto->proximo;
    } while (proximo_ponto != NULL);

    printf("Nome: %s Quantidade de vendas: %d\n",mais_venda->nome, mais_venda->maior);
    free(mais_venda);
    free(ponto_inicial);
    free(proximo_ponto);

    return 0;
}
