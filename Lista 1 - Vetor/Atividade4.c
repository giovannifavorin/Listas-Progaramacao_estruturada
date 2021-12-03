#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char Letras[30];
    char Resultado[30];
    int VetorValores;
    int vetorInvert;
} SLetras;

int Inicializar(SLetras *sResposta){
    sResposta->VetorValores = 0;
    sResposta->vetorInvert = 0;
    for (int i = 0; i != 30; i++)
    {
        sResposta->Letras[i] = 0;
        sResposta->Resultado[i] = 0;
    }
    

    return 0;
}

int perguntaLetra(SLetras *sResposta){

    do{
        printf("\nDigite uma letra\n");
        scanf("%c", &sResposta->Letras[sResposta->VetorValores]);
        fflush(stdin);

        sResposta->VetorValores++;
    } while (sResposta->VetorValores != 30);
    
    return 0;
}
int InverteOrdem(SLetras *sResposta){
    
    for (sResposta->vetorInvert = 0; sResposta->vetorInvert < 30; sResposta->vetorInvert++){

        sResposta->Resultado[sResposta->vetorInvert] = sResposta->Letras[sResposta->VetorValores - 1];
        sResposta->VetorValores--;
    }
    
    sResposta->vetorInvert = 0;
    
    do
    {
        printf("O resultado: %c\n\n", sResposta->Resultado[sResposta->vetorInvert]);
        sResposta->vetorInvert++;
    } while (sResposta->vetorInvert != 30);

    return 0;
}

int main(){
    SLetras Resposta;

    Inicializar(&Resposta);
    perguntaLetra(&Resposta);
    InverteOrdem(&Resposta);

    printf("%s", Resposta.Letras);

    return 0;
}
