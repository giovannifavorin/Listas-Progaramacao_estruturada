#include <stdio.h>

typedef struct
{
    int vetorInt;
    int valorDado[80];
    int comparaCom;
    int repet;
    int vetorRepet;
    int local[80];
} Atividade5;

int Inicializar(Atividade5 *structValores)
{
    structValores->comparaCom = 0;
    structValores->vetorInt = 0;
    structValores->repet = 0;

    for (int i = 0; i <= 80; i++)
    {
        structValores->valorDado[i] = 0;
        structValores->local[i] = 0;
    }

    return 0;
}

int perguntaValor(Atividade5 *structValores)
{
    printf("Com qual valor quer comparar?\n");
    scanf("%d", &structValores->comparaCom);

    do
    {
        printf("Insira um valor\n");
        scanf("%d", &structValores->valorDado[structValores->vetorInt]);

        structValores->vetorInt++;
    } while (structValores->vetorInt != 8 /*80*/);

    return 0;
}

int compara(Atividade5 *structValores)
{
    int j = 0;
    int i = 0;

    for (; i != 8; i++, j++)
    {
        if (structValores->comparaCom == structValores->valorDado[i])
        {
            structValores->repet++;
            structValores->local[j] = i;
        }
    }

    for (i = 0; i != 8; i++, j++)
    {
        printf("Os locais onde tem iguais: %d\n\n", structValores->local[j]);
    }
    printf("Quantidade de repeticoes: %i", structValores->repet);
    return 0;
}
//n armazena o local do vetor, e tem um icone estranho na quantidade 
int main()
{
    Atividade5 structValores;

    Inicializar(&structValores);
    perguntaValor(&structValores);
    printf("\33[H\33[2J"); 
    compara(&structValores);

    return 0;
}