#include <stdio.h>

typedef struct {
    int a, b, c;
} atividade5;

int main(){
    atividade5 ati5[2];
    int A, B, C;

    for (int i = 0; i < 2; i++){
        printf("Qual o valor de A?\n");
        scanf("%d", &ati5[i].a);
        printf("Qual o valor de B?\n");
        scanf("%d", &ati5[i].b);
        printf("Qual o valor de C?\n");
        scanf("%d", &ati5[i].c);
    }
    
    A = ati5[0].a + ati5[1].a;
    B = ati5[0].b + ati5[1].b;
    C = ati5[0].c + ati5[1].c;

    printf("A soma de A: %d\n", A);
    printf("A soma de B: %d\n", B);
    printf("A soma de C: %d\n", C);

    return 0;
}