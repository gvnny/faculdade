#include <stdio.h>

#define TAB 10
#define HABIL 5

int main() {
    int tabuleiro[TAB][TAB] = {0};

    // --- Posicionar Navios ---
    // Navio horizontal tamanho 3
    for(int j=1; j<=3; j++) tabuleiro[2][j] = 3;
    // Navio vertical tamanho 3
    for(int i=5; i<=7; i++) tabuleiro[i][7] = 3;

    // --- Criar Matrizes de Habilidade ---
    int cone[HABIL][HABIL] = {0};
    int cruz[HABIL][HABIL] = {0};
    int octaedro[HABIL][HABIL] = {0};

    // --- Construir cone (expande para baixo) ---
    for(int i=0; i<HABIL; i++) {
        for(int j=0; j<HABIL; j++) {
            if(j >= HABIL/2 - i && j <= HABIL/2 + i)
                cone[i][j] = 1;
        }
    }

    // --- Construir cruz ---
    for(int i=0; i<HABIL; i++) {
        for(int j=0; j<HABIL; j++) {
            if(i == HABIL/2 || j == HABIL/2)
                cruz[i][j] = 1;
        }
    }

    // --- Construir octaedro (losango) ---
    for(int i=0; i<HABIL; i++) {
        for(int j=0; j<HABIL; j++) {
            if(j >= HABIL/2 - i && j <= HABIL/2 + i && i <= HABIL/2)
                octaedro[i][j] = 1;
            if(j >= i - HABIL/2 && j <= 3*HABIL/2 - i -1 && i >= HABIL/2)
                octaedro[i][j] = 1;
        }
    }

    // --- Pontos de origem das habilidades no tabuleiro ---
    int origConeX = 0, origConeY = 5;
    int origCruzX = 5, origCruzY = 2;
    int origOctX = 4, origOctY = 7;

    // --- Sobrepor cone ---
    for(int i=0; i<HABIL; i++) {
        for(int j=0; j<HABIL; j++) {
            int x = origConeX + i - HABIL/2;
            int y = origConeY + j - HABIL/2;
            if(x>=0 && x<TAB && y>=0 && y<TAB && cone[i][j]==1 && tabuleiro[x][y]==0)
                tabuleiro[x][y] = 5;
        }
    }

    // --- Sobrepor cruz ---
    for(int i=0; i<HABIL; i++) {
        for(int j=0; j<HABIL; j++) {
            int x = origCruzX + i - HABIL/2;
            int y = origCruzY + j - HABIL/2;
            if(x>=0 && x<TAB && y>=0 && y<TAB && cruz[i][j]==1 && tabuleiro[x][y]==0)
                tabuleiro[x][y] = 5;
        }
    }

    // --- Sobrepor octaedro ---
    for(int i=0; i<HABIL; i++) {
        for(int j=0; j<HABIL; j++) {
            int x = origOctX + i - HABIL/2;
            int y = origOctY + j - HABIL/2;
            if(x>=0 && x<TAB && y>=0 && y<TAB && octaedro[i][j]==1 && tabuleiro[x][y]==0)
                tabuleiro[x][y] = 5;
        }
    }

    // --- Exibir tabuleiro ---
    printf("\nTabuleiro com habilidades:\n");
    for(int i=0; i<TAB; i++) {
        for(int j=0; j<TAB; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}