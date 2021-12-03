#include <stdio.h>

typedef struct {
    int peso;
    double toneladas, gramas;
} atividade9;

void perg(atividade9 *ati9);
void ton(atividade9 *ati9);
void gram(atividade9 *ati9);

int main(){
    atividade9 ati9;

    perg(&ati9);
    printf("\nO peso em tonelada:\n");
    ton(&ati9);
    printf("\nO peso em gramas:\n");
    gram(&ati9);
    return 0;
}

void perg(atividade9 *ati9){
    printf("Qual o peso em Kg?\n");
    scanf("%d",&ati9->peso);
}

void ton(atividade9 *ati9){
    ati9->toneladas = (float)ati9->peso / 1000;
    printf("%.3lf", ati9->toneladas);
}

void gram(atividade9 *ati9){
    ati9->gramas = ati9->peso * 1000;
    printf("%.lf", ati9->gramas);
}