#include <stdio.h>
//sem matriculas iguais
//se entrar 0, terminar as perguntas
typedef struct Atividade9{
    int calouros[3];
    int matricula[50];
    int meses[50];
    int cont;
    int fBool;
    int aBool;
    int quantMatri;

} Atividade9;

void inicializar(Atividade9 *firma){
    for (int i = 0; i != 50; i++){
        firma->matricula[i] = 0;
        firma->meses[i] = 0;
    }
    for (int j = 0; j != 3; j++){
        firma->calouros[j] = 0;
    }
    firma->fBool = 0;
    firma->aBool = 0;
    firma->cont = 0;
    firma->quantMatri = 0;
}

void confereMatricula(Atividade9 *firma){
    for (int i = 0; i != firma->cont; i++){
        if (firma->matricula[i] == firma->matricula[firma->cont]){
            firma->fBool = 1;
            printf("\nMatricula repetida\n");
        }
    }
}

void confereMeses(Atividade9 *firma){
    for (int i = 0; i != firma->cont; i++){
        if (firma->meses[i] == firma->meses[firma->cont]){
            firma->fBool = 1;
            printf("\nMes repetido\n");
        }
    }
}

void pergunta(Atividade9 *firma){
    printf("Digite 0 na matricula para encerrar\n ");

    do{
        printf("\nMatricula: ");
        scanf("%d", &firma->matricula[firma->cont]);

        firma->fBool = 0;
        confereMatricula(firma);

        for (int j = 0; j != firma->cont; j++){
            if (firma->fBool == 1){
                do{
                    printf("\nMatricula: ");
                    scanf("%d", &firma->matricula[firma->cont]);

                    firma->fBool = 0;
                    confereMatricula(firma);
                }while (firma->fBool == 1);
            }
        }

        printf("\nMeses: ");
        scanf("%d", &firma->meses[firma->cont]);
        
        firma->fBool = 0;
        confereMeses(firma);

        for (int j = 0; j != firma->cont; j++){
            if (firma->fBool == 1){
                do{
                    printf("\nMeses: ");
                    scanf("%d", &firma->meses[firma->cont]);

                    firma->fBool = 0;
                    confereMeses(firma);
                } while (firma->fBool == 1);
            }
        }

        printf("%d", firma->matricula[firma->cont]);

        firma->cont++;
        printf("%d", firma->cont);
        
    } while (firma->matricula[firma->cont] != 0 || firma->cont != 50);
}

void novatos(Atividade9 *firma){
    int j = 0;

    do{
        for (int i = 0; i != 5; i++){
            if (j == 0){
                if (firma->meses[i] > firma->calouros[j])
                    firma->calouros[j] = firma->meses[i];
            }
            if (j == 1){
                if (firma->meses[i] > firma->calouros[j] && firma->calouros[j] != firma->calouros[j-1])
                    firma->calouros[j] = firma->meses[i];
            }
            if (j == 2){
                if (firma->meses[i] > firma->calouros[j] && firma->calouros[j] != firma->calouros[j-1] && firma->calouros[j] != firma->calouros[j-2])
                    firma->calouros[j] = firma->meses[i];
            }
        }
        j++;
    } while (j != 3);
}

int main(){
    Atividade9 firma;
    int a = 0;
    int b = 1;
    int c = 2;

    inicializar(&firma);
    pergunta(&firma);
    novatos(&firma);

    printf("-----Lista de novatos-----\nOrdem decrescente\nPrimeiro: %d\nSegundo: %d\nTerceiro: %d", firma.calouros[a], firma.calouros[b], firma.calouros[c]);

    return 0;
}