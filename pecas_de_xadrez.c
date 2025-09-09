#include <stdio.h>
#include <string.h>

int main() {
    printf("\n--------------------\n");

    // Torre
    printf("Torre\n\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n--------------------\n");

    // Bispo
    printf("Bispo\n\n");
    int i = 1;
    while (i <= 5) {
        printf("Cima, Direita\n");
        i++;
    }

    printf("\n--------------------\n");

    // Dama
    i = 1;
    printf("Dama\n\n");
    do{
        printf("Esquerda\n");
        i++;
    } while (i < 9);

    printf("\n--------------------\n");

    // Cavalo
    printf("Cavalo\n\n");

    for (int i = 1; i <= 2; i++) {
        printf("Baixo\n");

        if (i == 2) {
            int j = 1;
            while (j <= 1) {
                printf("Esquerda\n");
                j++;
            }
        }
    }

    return 0;
}