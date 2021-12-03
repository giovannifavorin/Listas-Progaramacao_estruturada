#include <stdio.h>
//clang Atividade2.c -o Atividade2
//./Atividade2

typedef struct{
    int numeroMatr, serie, sexo, media, aprovado, anoNascimento;
    char nome[100], naturalidade[100];
}   Atividade2;

int main(){
    Atividade2 cad[500];
    int final, quantCad = 0, choice, i, totalSerie1 = 0, totalSerie2 = 0, serie1 = 0, serie2 = 0, aprSerie1 = 0, reprSerie1 = 0, homemSerie1 = 0, mulherSerie1 = 0,aprSerie2 = 0, reprSerie2 = 0, homemSerie2 = 0, mulherSerie2 = 0, idadeSerie1 = 0, idadeSerie2 = 0;

    do{
        printf("\33[H\33[2J");
        printf("\n------------Menu----------\n");
        printf("Total de cadastros atuais: %d\n", quantCad);
        printf("Digite 1 - Cadastro\nDigite 2 - Printar todos os cadastros\nDigite 3 - Exibir a porcentagem de alunos aprovados e reprovados por turma, totalizados por série\nDigite 4 - Exibir a porcentagem de alunos do sexo masculino e do sexo feminino por turma, totalizados por série\nDigite 5 - Apresentar a média das idades de cada uma das séries\nDigite 6 - Para fechar");
        scanf("%d", &choice);

        switch (choice){
        case 1:
            do{
                printf("\n------------Cadastro----------\n");
                printf("Qual o seu nome?\n");
                fflush(stdin);
                fgets(cad[quantCad].nome, 100, stdin);
                printf("Qual a sua naturalidade?\n");
                fflush(stdin);
                fgets(cad[quantCad].naturalidade, 100, stdin);
                printf("Qual o numero de sua matricula?\n");
                scanf("%d", &cad[quantCad].numeroMatr);
                do{
                    printf("Qual a sua serie?\nSerie 1 ou serie 2?");
                    scanf("%d", &cad[quantCad].numeroMatr);
                    if (cad[quantCad].numeroMatr == 1){
                        serie1++;
                    } else if (cad[quantCad].numeroMatr == 2){
                        serie2++;
                    }
                } while (cad[quantCad].numeroMatr > 2 || cad[quantCad].numeroMatr < 1);
                do{
                    printf("Qual o seu sexo?\nDigite 1 - Para homem\nDigite 2 - Para mulher\n");
                    scanf("%d", &cad[quantCad].sexo);
                    if (cad[quantCad].sexo == 1 && cad[quantCad].numeroMatr == 1){
                        homemSerie1++;
                    } else if (cad[quantCad].sexo == 2 && cad[quantCad].numeroMatr == 1){
                        mulherSerie1++;
                    } else if (cad[quantCad].sexo == 1 && cad[quantCad].numeroMatr == 2){
                        homemSerie2++;
                    } else if (cad[quantCad].sexo == 2 && cad[quantCad].numeroMatr == 2){
                        mulherSerie2++;
                    }
                } while (cad[quantCad].sexo > 2 || cad[quantCad].sexo < 1);
                printf("Qual a sua media?\n");
                scanf("%d", &cad[quantCad].media);
                do{
                    printf("Voce esta aprovado?\nDigite 1 - Sim\nDigite 2 - Nao\n");
                    scanf("%1d", &cad[quantCad].aprovado);
                    if (cad[quantCad].aprovado == 1 && cad[quantCad].numeroMatr == 1){
                        aprSerie1++;
                    } else if (cad[quantCad].aprovado == 2 && cad[quantCad].numeroMatr == 1){
                        reprSerie1++;
                    } else if (cad[quantCad].aprovado == 1 && cad[quantCad].numeroMatr == 2){
                        aprSerie2++;
                    } else if (cad[quantCad].aprovado == 2 && cad[quantCad].numeroMatr == 2){
                        reprSerie2++;
                    }
                } while (cad[quantCad].aprovado > 2 || cad[quantCad].aprovado < 1);
                if (cad[quantCad].numeroMatr == 1){
                    printf("Qual o seu ano de nascimento?\n");
                    scanf("%4d", &cad[quantCad].anoNascimento);
                    idadeSerie1 = (cad[quantCad].anoNascimento - 2021) + idadeSerie1;
                } else if (cad[quantCad].numeroMatr == 2){
                    printf("Qual o seu ano de nascimento?\n");
                    scanf("%4d", &cad[quantCad].anoNascimento);
                    idadeSerie2 = (cad[quantCad].anoNascimento - 2021) + idadeSerie2;
                }
                quantCad++;

                do{
                    printf("Digite 1 - Para cadastrar um usuario\nDigite 2 - Para fechar o processo");
                    scanf("%d", &i);
                } while (i > 2 || i < 1);
            } while (i != 2 );
            break;

        case 2:
            for ( i = 0; i < quantCad; i++ ){
                printf("Nome: %sNaturalidade: %sMatricula: %d\nSerie: %d\nAno de nascimento: %d\nMedia: %d\n", cad[i].nome, cad[i].naturalidade, cad[i].numeroMatr, cad[i].serie, cad[i].anoNascimento, cad[i].media);
                switch (cad[i].sexo){
                case 1:
                    printf("Sexo: Homem\n");
                    break;
                default:
                    printf("Sexo: Mulher\n");
                    break;
                }
                switch (cad[i].aprovado){
                case 1:
                    printf("Aprovado: Sim\n");
                    break;
                default:
                    printf("Aprovado: Nao\n");
                    break;
                }
            }
            break;
        
        case 3:
            printf("\n---------Dados em porcentagem---------\n");
            totalSerie1 = aprSerie1/serie1;
            printf("Total de aprovados da serie 1: %d\n", totalSerie1);
            totalSerie1 = reprSerie1/serie1;
            printf("Total de reprovados da serie 1: %d\n", totalSerie1);
            totalSerie2 = aprSerie2/serie2;
            printf("Total de aprovados da serie 2: %d\n", totalSerie2);
            totalSerie2 = reprSerie2/serie2;
            printf("Total de reprovados da serie 2: %d\n", totalSerie2);
            break;

        case 4:
            printf("\n---------Dados em porcentagem---------\n");
            totalSerie1 = homemSerie1/serie1;
            printf("Total de homens da serie 1: %d\n", totalSerie1);
            totalSerie1 = mulherSerie1/serie1;
            printf("Total de mulheres da serie 1: %d\n", totalSerie1);
            totalSerie2 = homemSerie2/serie2;
            printf("Total de homens serie 2: %d\n", totalSerie2);
            totalSerie2 = mulherSerie2/serie2;
            printf("Total de mulheres da serie 2: %d\n", totalSerie2);
            break;

        case 5:
            printf("\n---------Media de idades---------\n");
            totalSerie1 = idadeSerie1/serie1;
            printf("Idade media da serie 1: %d\n", totalSerie1);
            totalSerie2 = idadeSerie2/serie2;
            printf("Idade media da serie 2: %d\n", totalSerie2);

        }
    } while (choice != 6);
    return 0;
}