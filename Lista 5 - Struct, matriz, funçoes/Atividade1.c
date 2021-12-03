#include <stdio.h>
//clang Atividade1.c -o Atividade1
//./Atividade1
typedef struct{
    int codigo, baixa;
    char nome[100];
    double preco;
}   atividade1;

typedef struct{
    int diaMais, semanasMais, pos;
} posMais;

typedef struct{
    posMais posMais;
    int i, j;
}   valores;

void cadProdutos(atividade1 *cadProd);
void printMais(atividade1 *print);

int main(){
    atividade1 produtos[4][6];
    valores valores;
    int final = 0, quantProd = 0, semanas = 0, dias = 0;
    valores.i = 0, valores.j = 0;

    do{
        cadProdutos(&produtos[semanas][dias]);
        dias++;
        if (dias == 6){
            dias = 0;
            semanas++;
        }
        quantProd++;
        printf("maximo de 4 semanas e 6 dias, totalizando 24 dias\n");
        printf("Semana: %d\n", semanas);
        printf("Dias: %d\n", dias);
        printf("Quantidade de produtos cadastrados agora: %d\n", quantProd);
        printf("Digite 1 - Caso queira cadastrar mais algum produto\nDigite 2 - Caso queira terminar os cadastros\n");
        scanf("%d", &final);
        if (semanas == 4 && dias == 6)
            final = 2;
    } while (final != 2);

    valores.posMais.pos = produtos[0][0].baixa;

    do{
        if (valores.posMais.pos < produtos[valores.i][valores.j].baixa){
            valores.posMais.diaMais = valores.j;
            valores.posMais.semanasMais = valores.i;
            valores.posMais.pos = produtos[valores.i][valores.j].baixa;
        }
        valores.j++;
        if (valores.j == 6){
            valores.j = 0;
            valores.i++;
        }
    } while (valores.i != semanas && valores.j != dias);
    printMais(&produtos[valores.posMais.semanasMais][valores.posMais.diaMais]);
    return 0;
}

void cadProdutos(atividade1 *cadProd){
    printf("Qual o codigo do produto?\n");
    scanf("%d", &cadProd->codigo);
    printf("Qual o nome do produto?\n");
    fflush(stdin);
    fgets(cadProd->nome, 100, stdin);
    printf("Qual o preco de produto?\n");
    scanf("%lf", &cadProd->preco);
    printf("Quantos desse produto foram vendidos?\n");
    scanf("%d", &cadProd->baixa);
}

void printMais(atividade1 *print){
    printf("O nome: %s", print->nome);
    printf("A quantia de baixas: %d", print->baixa);
}