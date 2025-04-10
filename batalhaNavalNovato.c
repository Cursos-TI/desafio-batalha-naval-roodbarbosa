#include <stdio.h>


int main() {
    int tabuleiro[10][10];
    int navio_horizontal[3] = {3, 3, 3};
    int navio_vertical[3] = {3, 3, 3};

    //  Tabuleiro com água (0)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posicão navio horizontal (linha 2, colunas D-F)
    int linha_h = 2;
    int coluna_h = 3;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_h][coluna_h + i] = navio_horizontal[i];
    }

    // Posicão navio vertical (coluna G, linhas 5-7)
    int linha_v = 5;
    int coluna_v = 6;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_v + i][coluna_v] = navio_vertical[i];
    }

    // Printa o tabuleiro 
    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf(" %c ",'A' + j);  // Cabeçalho das colunas
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%2d ", i);  // Número da linha
        for (int j = 0; j < 10; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}