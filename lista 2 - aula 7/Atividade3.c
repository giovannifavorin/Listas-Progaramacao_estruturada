#include <stdio.h>

typedef struct {
    int quantAlunos, nota1[20], nota2[20], resultado[20];
}   atividade3;

void calcA(atividade3 *ati3);
void calcB(atividade3 *ati3);
void calcC(atividade3 *ati3);
void limpaTela();

int main(){
    atividade3 ati;
    int saida, i = 1, pergFunc, pergFinal = 0;
    ati.quantAlunos = 0;

    for (int i = 0; i < 20; i++){
        ati.nota1[i] = 0;
        ati.nota2[i] = 0;
        ati.resultado[i] = 0;
    }
    

    do{
        limpaTela();
        printf("Qual a primeira nota do aluno *%d? ",i);
        scanf("%d", &ati.nota1[ati.quantAlunos]);

        printf("Qual a segunda nota do aluno *%d? ",i);
        scanf("%d", &ati.nota2[ati.quantAlunos]);
        i++;
        ati.quantAlunos++;
        printf("Deseja cadastrar mais alguem? 1 - Nao 2 - Sim");
        scanf("%d", &saida);
    } while (saida != 1 || ati.quantAlunos == 20);

    do{
        do{
            limpaTela();
            printf("Qual calculo deseja fazer?\n1 - Média aritmética das duas notas\n2 - Média ponderada com peso 4 e 6 respectivamente\n3 - Média ponderada com peso 3 e 7 respectivamente ");
            scanf("%d", &pergFunc);
        } while (pergFunc < 1 || pergFunc > 3);

        switch (pergFunc)
        {
        case 1:
            calcA(&ati);
            break;

        case 2:
            calcB(&ati);
            break;
        
        case 3:
            calcC(&ati);
            break;
        }
        i = 1;
        for (int j = 0; j < ati.quantAlunos; j++){
            printf("O resultado do *%d aluno: %d\n", i, ati.resultado[j]);
            i++;
        }
        do{
            printf("Deseja ver mais algum resultado? 1 - Sim 2 - Nao ");
            scanf("%d", &pergFinal);
        } while (pergFinal > 2 || pergFinal < 1);
    } while(pergFinal != 2);
    
    return 0;
}

void calcA(atividade3 *ati3){
    for (int i = 0; i < ati3->quantAlunos; i++){
        ati3->resultado[i] = ati3->nota1[i] + ati3->nota2[i];
        ati3->resultado[i] = ati3->resultado[i] / 2;
    }
}

void calcB(atividade3 *ati3){
    for (int i = 0; i < ati3->quantAlunos; i++){
        ati3->resultado[i] = (ati3->nota1[i] * 0.4) + (ati3->nota2[i] * 0.6);
        ati3->resultado[i] = ati3->resultado[i] / 2;
    }
}

void calcC(atividade3 *ati3){
    for (int i = 0; i < ati3->quantAlunos; i++){
        ati3->resultado[i] = (ati3->nota1[i] * 0.3) + (ati3->nota2[i] * 0.7);
        ati3->resultado[i] = ati3->resultado[i] / 2;
    }
}

void limpaTela(){
    printf("\33[H\33[2J");
}