#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>
//clang Atividade7.c -o Atividade7
//./Atividade7
int main(){
    char frase[50], primeiroNome[256];

    printf("Qual a frase? ");
    fflush(stdin);
    fgets(frase, sizeof(frase), stdin);

    printf("Qual o nome? ");
    fflush(stdin);
    fgets(primeiroNome, sizeof(primeiroNome), stdin);

    for (int i = 0; i < strlen(frase); i++){
        if (strcmp(&frase[i], "\n") == 0)
            frase[i] = frase[i + 1];
    }
    for (int i = 0; i < strlen(primeiroNome); i++)
        primeiroNome[i] = toupper(primeiroNome[i]);
    strcat(frase, ": ");
    strcat(frase, primeiroNome);

    printf("%s", frase);
    sleep(10);
    return 0;
}