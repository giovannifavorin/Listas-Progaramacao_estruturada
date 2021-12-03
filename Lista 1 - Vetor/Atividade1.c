#include<stdio.h>
int main(){
    double notas[30];
    int i = 0;
    int Quantidade = 0;

    do
    {
        printf("\n\nQuantos alunos? ");
        scanf("%d", &Quantidade);

        if (((Quantidade > 51)  || (Quantidade < 1)))
        {
            printf("Quantia incorreta \nDeve ser menor que 50 e maior que 1");
        }

    } while (((Quantidade > 51)  || (Quantidade < 1)));

    for(i = 0;i < Quantidade; i++){
        printf("Digite a nota: ");
        scanf("%lf", &notas[i]);
    }

    for(i = 0; i < Quantidade; i++){
        printf("%.1lf\n", notas[i]);
    }
    return 0;
}