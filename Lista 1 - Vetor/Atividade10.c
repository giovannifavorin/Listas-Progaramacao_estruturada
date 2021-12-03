#include <stdio.h>

typedef struct Atividade10{
    int notas[80];
    int Aluno[80];
    int fBool;
    int i;
    int zero;
    int um;
    int dois;
    int tres;
    int quatro;
    int cinco;
    int seis;
    int sete;
    int oito;
    int nove;
    int dez;

}Atividade10;

void confere(Atividade10 *sigmaDF);

void inicializar(Atividade10 *sigmaDF){
    for (int i = 0; i != 80; i++){
        sigmaDF->notas[i] = 0;
    }
    sigmaDF->fBool = 0;
    sigmaDF->i = 0;
    sigmaDF->zero = 0;
    sigmaDF->um = 0;
    sigmaDF->dois = 0;
    sigmaDF->tres = 0;
    sigmaDF->quatro = 0;
    sigmaDF->cinco = 0;
    sigmaDF->seis = 0;
    sigmaDF->sete = 0;
    sigmaDF->oito = 0;
    sigmaDF->nove = 0;
    sigmaDF->dez = 0;

}

void pergunta(Atividade10 *sigmaDF){
    for (; sigmaDF->i != 8; sigmaDF->i++){
        do{
        printf("Nota: ");
        scanf("%d", &sigmaDF->notas[sigmaDF->i]);

        sigmaDF->fBool = 0;
        confere(sigmaDF);

        } while (sigmaDF->fBool == 1);
    }
}

void confere(Atividade10 *sigmaDF){
    for (int j = 0; j != 80; j++){
        if (sigmaDF->notas[j] > 10 ){
            printf("Nota errada, maior que 10\n");
            sigmaDF->fBool = 1;
        }    
        else if ( sigmaDF->notas[j] < 0){
            printf("Nota errada, menor que 0\n");
            sigmaDF->fBool = 1;
        }
    }
}

void contagem(Atividade10 *sigmaDF){
    for (int i = 0; i != 8; i++){
        switch (sigmaDF->notas[i])
        {
        case 0:
            sigmaDF->zero++;
            break;
        case 1:
            sigmaDF->um++;
            break;
        case 2:
            sigmaDF->dois++;
            break;
        case 3:
            sigmaDF->tres++;
            break;
        case 4:
            sigmaDF->quatro++;
            break;
        case 5:
            sigmaDF->cinco++;
            break;
        case 6:
            sigmaDF->seis++;
            break;
        case 7:
            sigmaDF->sete++;
            break;
        case 8:
            sigmaDF->oito++;
            break;
        case 9:
            sigmaDF->nove++;
            break;
        case 10:
            sigmaDF->dez++;
            break;
        default:
            break;
        }
    }
    

}

void tabela(Atividade10 *sigmaDF){
    printf("Frequencias de notas________________________________________________________\nZero: %d\nUm: %d\nDois: %d\nTres: %d\nQuatro: %d\nCinco: %d\nSeis: %d\nSete: %d\nOito: %d\nNove: %d\nDez: %d",sigmaDF->zero, sigmaDF->um, sigmaDF->dois, sigmaDF->tres, sigmaDF->quatro, sigmaDF->cinco, sigmaDF->seis, sigmaDF->sete, sigmaDF->oito, sigmaDF->nove, sigmaDF->dez);
}


int main(){
    Atividade10 sigmaDF;

    inicializar(&sigmaDF);
    pergunta(&sigmaDF);
    contagem(&sigmaDF);
    //printf("\33[H\33[2J");
    tabela(&sigmaDF);

    return 0;
}