#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};

    // --- Navios Horizontais e Verticais ---
    // Navio horizontal de tamanho 3, começa em (2,1)
    for(int j = 1; j <= 3; j++) {
        tabuleiro[2][j] = 3;
    }

    // Navio vertical de tamanho 3, começa em (5,7)
    for(int i = 5; i <= 7; i++) {
        tabuleiro[i][7] = 3;
    }

    // --- Navios Diagonais ---
    // Diagonal de cima direita para baixo esquerda (↙), tamanho 3, começa em (0,9)
    for(int i = 0; i < 3; i++) {
        tabuleiro[i][9 - i] = 3;
    }

    // Diagonal de cima esquerda para baixo direita (↘), tamanho 3, começa em (5,5)
    for(int i = 0; i < 3; i++) {
        tabuleiro[5 + i][5 + i] = 3;
    }

    // --- Exibir Tabuleiro ---
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}