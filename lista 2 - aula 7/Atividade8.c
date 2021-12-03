#include <stdio.h>

typedef struct {
    int peso[3];
} atividade8;

void ordem(atividade8 *ati8);

int main(){
    atividade8 ati8;

    printf("Digite o peso da pessoa somente em kg\n");
    printf("Entre o peso da pessoa\n");
    for (int i = 0; i < 3; ++i)
    scanf("%d", &ati8.peso[i]);

    ordem(&ati8);
    return 0;
}

void ordem(atividade8 *ati8){
    int  meio; 

    for (int i = 0; i < 3; ++i){
        for (int j = i + 1; j < 3; ++j){
            if (ati8->peso[i] > ati8->peso[j]){
                meio =  ati8->peso[i];
                ati8->peso[i] = ati8->peso[j];
                ati8->peso[j] = meio;
            }
        }
    }

    for (int i = 0; i < 3; i++)
        printf("\nO peso: %d\n", ati8->peso[i]);
}