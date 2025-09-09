#include <stdio.h>

#define TAM 10
#define TAM_NAVIO 3

int main() {
    int tabuleiro[TAM][TAM];

    // Inicializa tabuleiro com água (0)
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Coordenadas iniciais dos navios
    int linhaNavioH = 2, colunaNavioH = 1;  // horizontal
    int linhaNavioV = 5, colunaNavioV = 7;  // vertical

    // Posiciona navio horizontal
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaNavioH][colunaNavioH + i] = 3;
    }

    // Posiciona navio vertical
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaNavioV + i][colunaNavioV] = 3;
    }

    // Exibe tabuleiro
    printf("\nTabuleiro:\n\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}