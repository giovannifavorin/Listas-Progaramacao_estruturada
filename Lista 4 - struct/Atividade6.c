#include <stdio.h>

typedef struct {
    char rua[100], bairro[100], cidade[100], estado[100];
    int cep;
}   endereco;

typedef struct {
    char nome[100];
    int estadoCivil, telefone, CPF, idade, sexo;
    double salario;
    endereco endereco;
}   cadastro;

void limpatela();
void quebralinha();
void pegaCad(cadastro *cad);
void printUser(cadastro *cad, int *Users);

int main(){
    cadastro cad[5];
    int final, choice, Users = 0, maisVelho = 0, pepino = 0, buscaID;

    do{
        limpatela();
        quebralinha();
        do{
            printf("\nDigite 1 - Para Cadastrar mais alguem\nDigite 2 - Para ver a lista de cadastros\nDigite 3 - para encontrar a pessoa com maior idade\nDigite 4 - Para encontrar as pessoas de sexo masculino\nDigite 5 - Para encontrar pessoas com mais de 1000R$ mensais\nDigite 6 - Para buscar alguem pela identidade\nDigite 7 - Para terminar\n");
            scanf("%d", &choice);
            if (Users == 5){
                printf("Quantidade total de cadastros");
                choice = 9;
            }
        } while (choice > 7 || choice < 1);

            switch (choice){
                case 1:
                    limpatela();
                    pegaCad(&cad[Users]);
                    Users++;
                    limpatela();
                break;
            case 2:
                for (int i = 0; i <  Users; i++){
                    limpatela();
                    quebralinha();
                    printf("Posicao: %d\n", i);
                    printUser(&cad[i], &Users);
                    quebralinha();
                }
                break;
            case 3://buscar o mais velho
                maisVelho = cad[0].idade;
                for (int i = 0; i < Users; i++){
                    if (maisVelho < cad[i].idade)
                        maisVelho = cad[i].idade;
                }
                printf("O mais velho: %d\n", maisVelho);
                printf("Digite um inteiro para seguir\n");
                scanf("%d", &pepino);
                break;
            case 4://busca homem
                for (int i = 0; i < Users; i++){
                    if (cad[i].sexo == 1){
                        printf("Este usuario e homem: \n");
                        quebralinha();
                        printf("Posicao: %d\n", i);
                        printUser(&cad[i], &Users);
                        quebralinha();
                    }
                }
                printf("Digite um inteiro para seguir\n");
                scanf("%d", &pepino);
                break;
            case 5://busca rico
                for (int i = 0; i < Users; i++){
                    if (cad[i].salario >= 1000.0){
                        printf("Este usuario tem um salario maior que 1000R$: \n");
                        quebralinha();
                        printf("Posicao: %d\n", i);
                        printUser(&cad[i], &Users);
                        quebralinha();
                    }
                }
                printf("Digite um inteiro para seguir\n");
                scanf("%d", &pepino);
                break;
            case 6://busca ID
                printf("Qual CPF deseja procurar?");
                scanf("%d", &buscaID);
                for (int i = 0; i < Users; i++){
                    if (cad[i].CPF == buscaID){
                        printf("Este usuario tem o CPF que busca: \n");
                        quebralinha();
                        printf("Posicao: %d\n", i);
                        printUser(&cad[i], &Users);
                        quebralinha();
                    }
                }
                printf("Digite um inteiro para seguir\n");
                scanf("%d", &pepino);
                break;
        }
    } while (choice != 7);
    return 0;
}

void quebralinha(){
    printf("\n------------------\n");
}

void limpatela(){
    printf("\33[H\33[2J");
}

void pegaCad(cadastro *cad){
    printf("Qual o seu nome?\n");
    fflush(stdin);
    fgets(cad->nome, 100, stdin);

    do{
        printf("Qual o seu estado civil?\n1 - Casado\n2 - solteiro\n3 - depressivo\n");
        scanf("%d", &cad->estadoCivil);
    } while (cad->estadoCivil > 3 || cad->estadoCivil < 1);    

    do{
        printf("Qual o seu genero?\n1 - Masculino\n2 - Feminino\n3 - NDA\n");
        scanf("%d", &cad->sexo);
    } while(cad->sexo > 3 || cad->sexo < 1);

    printf("Qual o seu telefone?\n");
    scanf("%d", &cad->telefone);

    printf("Qual o seu CPF?\n");
    scanf("%d", &cad->CPF);

    printf("Qual o seu salario?\n");
    scanf("%lf", &cad->salario);

    printf("Qual a sua idade?\n");
    scanf("%d", &cad->idade);

    printf("Qual a sua rua?\n");
    fflush(stdin);
    fgets(cad->endereco.rua, 100, stdin);

    printf("Qual o seu bairro?\n");
    fflush(stdin);
    fgets(cad->endereco.bairro, 100, stdin);

    printf("Qual a sua cidade?\n");
    fflush(stdin);
    fgets(cad->endereco.cidade, 100, stdin);

    printf("Qual a sua estado?\n");
    fflush(stdin);
    fgets(cad->endereco.estado, 100, stdin);

    printf("Qual o seu CEP");
    scanf("%d", &cad->endereco.cep);
}

void printUser(cadastro *cad, int *Users){
    printf("O seu nome: %s\n", cad->nome);
    if (cad->estadoCivil == 1 && cad->sexo == 1){
        printf("O seu estado civil: Casado\n");
    } else if(cad->estadoCivil == 1 && (cad->sexo == 2 || cad->sexo == 3)){
        printf("O seu estado civil: Casada\n");
    } else if(cad->estadoCivil == 2 && cad->sexo == 1){
        printf("O seu estado civil: solteiro\n");
    } else if(cad->estadoCivil == 2 && (cad->sexo == 2 || cad->sexo == 3)){
        printf("O seu estado civil: solteira\n");
    } else if(cad->estadoCivil == 3){
        printf("A vida tem dessas as vezes\n");
    }
    if (cad->sexo == 1){
        printf("O seu genero: Masculino\n");
    } else if (cad->sexo == 2){
        printf("O seu genero: Feminino\n");
    } else{
        printf("O seu genero: Nao definido\n");
    }
    printf("O seu telefone: %d\n", cad->telefone);
    printf("O seu CPF: %d\n", cad->CPF);
    printf("O seu salario: %lf\n", cad->salario);
    printf("A sua idade: %d\n", cad->idade);
    printf("A sua rua: %s", cad->endereco.rua);
    printf("O seu bairro: %s", cad->endereco.bairro);
    printf("A sua cidade: %s", cad->endereco.cidade);
    printf("O seu estado: %s", cad->endereco.estado);
    printf("O seu CEP: %d", cad->endereco.cep);
}