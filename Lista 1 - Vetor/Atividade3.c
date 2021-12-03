#include <stdio.h>

typedef struct 
{
    int Quantidade;
    int Valores [100];
    int VetorValores;
    int Resultado;
} SValores;

int Inicializar(SValores *sResposta){
    sResposta->Quantidade = 0;
    for (int i = 0; i <= 100; i++)
    {
        sResposta->Valores[i] = 0;
    }
    sResposta->VetorValores = 0;
    sResposta->Resultado = 0;

    return 0;
}

int PergQuantia(SValores *sResposta){

    do
    {
        printf("\n\nQuantos numeros a somar?\n");
        scanf("%d", &sResposta->Quantidade);

        if (sResposta->Quantidade > 100)
        {
            printf("\nQuantia incorreta, deve ser menor que 100");
        }
    } while (sResposta->Quantidade > 100);
    return 0;
}

int PergValores(SValores *sResposta){

    do
    {
        printf("\n\nQual vai somar?\n");
        scanf("%d", &sResposta->Valores[sResposta->VetorValores]);

        sResposta->VetorValores++;
    } while (sResposta->VetorValores != sResposta->Quantidade);
    return 0;
}

int SomaValores(SValores *sResposta){

    for (sResposta->VetorValores = 0; sResposta->VetorValores != sResposta->Quantidade; sResposta->VetorValores++)
    {
        sResposta->Resultado = sResposta->Valores[sResposta->VetorValores] + sResposta->Resultado;
    }
        printf("O resultado é: %d", sResposta->Resultado);
    
    return 0;
}

int main(){
    SValores Resposta;

    Inicializar(&Resposta);
    PergQuantia(&Resposta);
    PergValores(&Resposta);
    SomaValores(&Resposta);

    return 0;
}
