#include <stdio.h>
//clang Atividade5.c -o Atividade5
//./Atividade5

typedef struct {
    char cor[100], placa[6], nome_proprietario[100], modelo[100];
    int choice_combust, ano, n_chassi;
}   Atividade5;

void buscaA(concessionaria *cade);
void buscaB(concessionaria *cade);
void buscaC(concessionaria *cade);
void buscaD(concessionaria *cade);

int main(){
    atividade5 concessionaria[5000];
    int resposta, aux; 

    do{
        do{
            printf("Digite 1 - Para um novo cadastro\nDigite 2 - Para a busca A\nDigite 3 - Para a busca B\nDigite 4 - Para a busca C\nDigite 5 - Para a busca D\nDigite 6 - Para fechar o programa\n");
            scanf("%d", &resposta);
        } while (resposta > 6 || resposta < 0);
        switch (resposta){
        case 1:
            printf("Qual o nome do proprietario?\n");
            fflush(stdin);
            fgets(concessionaria.nome_proprietario, 100, stdin);
            do{
                printf("Digite 1 - Gasolina\nDigite 2 - Alcool\nDigite 3 - Diesel\n");
                scanf("%d", &concessionaria.choice_combust);
            }   while(concessionaria.choice_combust > 3 || concessionaria.choice_combust < 0);
            printf("Qual o modelo do carro?\n");
            fflush(stdin);
            fgets(concessionaria.modelo, 100, stdin);
            printf("Qual a cor do carro?\n");
            fflush(stdin);
            fgets(concessionaria.cor, 100, stdin);
            printf("Numero do chassi?\n");
            scanf("%d", &concessionaria.n_chassi);
            printf("Qual o ano do carro?\n");
            scanf("%d", &concessionaria.ano);
            do{
                printf("Qual a placa do carro?\n");
                fflush(stdin);
                fgets(concessionaria.placa, 6, stdin);
                for(int i = 0; i < 3; i++)
                    if (concessionaria.placa[i] < 'a' || concessionaria.placa[i] > 'z')
                        aux = 0;
                for(int i = 3; i < 6; i++)
                    if (concessionaria.placa[i] > 9 || < 0)
                        aux1 = 0;
            }   while(aux == 0 || aux1 == 0);
            
            break;
        case 2:
            buscaA(&concessionaria);
            break;
        case 3:
            buscaB(&concessionaria);
            break;
        case 4:
            buscaC(&concessionaria);
            break;
        case 5:
            buscaD(&concessionaria);
            break;
        case 6:
            printf("Isso e tudo p-p-p-p-pessoal :)\n");
            break;
        }
    } while (resposta != 6);
    return 0;
}

void buscaA(concessionaria *cade){

}
void buscaB(concessionaria *cade){
    
}
void buscaC(concessionaria *cade){
    
}
void buscaD(concessionaria *cade){
    
}