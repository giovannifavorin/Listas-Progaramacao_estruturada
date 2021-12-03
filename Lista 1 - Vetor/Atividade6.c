#include <stdio.h>

typedef struct
{
    int matricula[100];
    double salario[100];
    double maiorSalario;
    double menorSalario;
    int repet;
    int vetorSala;
    int endMaior;
    int endMenor;
} Atividade6;

void defineMaior(Atividade6 *dados);

void Inicializar(Atividade6 *dados){
    dados->maiorSalario = 0;
    for (int i = 0; i != 100; i++){
        dados->matricula[i] = 0;
        dados->salario[i] = 0;
    }
    dados->menorSalario = 999999999;
    dados->repet = 0;
    dados->vetorSala = 0;
    dados->endMaior = 0;
    dados->endMenor = 0;
}

void compara(Atividade6 *dados){
    for (int j = 0; j != dados->vetorSala; j++){
        if (dados->matricula[j] == dados->matricula[dados->vetorSala]){
            printf("\nMatricula errada\n");
            dados->repet = 1;
        }
    }
}

void defineMenor(Atividade6 *dados){
    for (int j = 0; j != 100; j++){
        if (dados->salario[j] > dados->salario[j + 1]){
        dados->menorSalario = dados->salario[j];
        dados->endMaior = dados->matricula[j];
        }
    }
    printf("\nO maior salario: %.2lf\nMatricula: %d", dados->menorSalario, dados->endMaior);
}

void perguntaValores(Atividade6 *dados){
    for (; dados->vetorSala != 100; dados->vetorSala++){
        printf("\nQual o valor do seu salario? ");
        scanf("%lf", &dados->salario[dados->vetorSala]);

        do{
            printf("\nQual o numero de sua matricula? ");
            scanf("%d", &dados->matricula[dados->vetorSala]);

            dados->repet = 0;

            compara(dados);
        } while (dados->repet == 1);
    }

    dados->vetorSala = 0;


    defineMaior(dados);
    defineMenor(dados);
}



int main(){
    Atividade6 dados;

    Inicializar(&dados);
    perguntaValores(&dados);
    return 0;
}

void defineMaior(Atividade6 *dados){
    int i = 0;
    int j = i + 1;
    for (; i != 4; i++){
        if (dados->salario[i] < dados->salario[j]){
        dados->maiorSalario = dados->salario[i];
        dados->endMenor = dados->matricula[i];
        }
    }
    printf("\nO menor salario: %.2lf\nMatricula: %d ", dados->maiorSalario, dados->endMenor);
}

/*static function*/