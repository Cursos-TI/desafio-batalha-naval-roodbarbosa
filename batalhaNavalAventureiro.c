#include <stdio.h>

#define TAMANHO 10
#define NAVIO 3

int main() {
    int tabuleiro[TAMANHO][TAMANHO];

    // Tabuleiro com água (0)
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Imprime navio horizontal: linha 2, colunas 3–5 (D2, E2, F2)
    for (int i = 0; i < NAVIO; i++) {
        tabuleiro[2][3 + i] = 3;
    }

    //Imprime navio vertical: coluna 6, linhas 5–7 (G5, G6, G7)
    for (int i = 0; i < NAVIO; i++) {
        tabuleiro[5 + i][6] = 3;
    }

    // Imprime Navio diagonal  (A0 → C2): (0,0), (1,1), (2,2)
    for (int i = 0; i < NAVIO; i++) {
        tabuleiro[0 + i][0 + i] = 3;
    }

    // Imprime navio diagonal  (A9 → C7): (9,0), (8,1), (7,2)
    for (int i = 0; i < NAVIO; i++) {
        tabuleiro[9 - i][0 + i] = 3;
    }

    // Imprime o cabeçalho com letras A–J
    printf("   ");
    for (int j = 0; j < TAMANHO; j++) {
        printf(" %c ", 'A' + j);
    }
    printf("\n");

    // Imprime o tabuleiro
    for (int i = 0; i < TAMANHO; i++) {
        printf("%2d ", i);
        for (int j = 0; j < TAMANHO; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}