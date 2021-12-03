#include <stdio.h>


typedef struct{
    int telefone; 
    char nome[100], endereco[100];
} atividade1;

int main(){
    atividade1 ati1[3];

    for (int i = 0; i < 3; i++){
        printf("Qual o seu nome?\n");
        fflush(stdin);
        fgets(ati1[i].nome, 100, stdin);
        printf("---------------------------");
        printf("\nQual o seu telefone?\n");
        scanf("%d", &ati1[i].telefone);
        printf("---------------------------");
        printf("\nQual o seu endereco?\n");
        fflush(stdin);
        fgets(ati1[i].endereco, 100, stdin);
    }
    
    for (int i = 0; i < 3; i++)
        printf("\nO seu nome%sO seu telefone %d\nO seu endereco %s\n", ati1[i].nome, ati1[i].telefone, ati1[i].endereco);
    
    return 0;
}