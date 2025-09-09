#include <stdio.h>
#include <string.h>

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Torre
    printf("\n--------------------\n");
    printf("Torre\n\n");
    void torre(int n) {
        if(n > 0) {
            printf("Direita\n");
            torre(n - 1);
        }
    }
    torre(casasTorre);

    // Bispo
    printf("\n--------------------\n");
    printf("Bispo\n\n");
    void bispo(int n) {
        if(n > 0) {
            for(int i = 0; i < 1; i++) {
                printf("Cima ");
                for (int j = 0; j < 1; j++) {
                    printf("Direita\n");
                }
            }
            bispo(n - 1);
        }
    }
    bispo(casasBispo);

    // Rainha
    printf("\n--------------------\n");
    printf("Rainha\n\n");
    void rainha(int n) {
        if(n > 0) {
            printf("Esquerda\n");
            rainha(n - 1);
        }
    }
    rainha(casasRainha);

    // Cavalo
    printf("\n--------------------\n");
    printf("Cavalo\n\n");
    for (int i = 1; i <= 2; i++) {
    for (int j = 1; j <= 1; j++) {
        if (i < 2) {
            printf("Cima\n");
            continue;
        } else {
            printf("Cima\n");
            printf("Direita\n");
            break;
        }
    }
}

    return 0;
}