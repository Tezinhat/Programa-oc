#include <stdio.h>

int main() {
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];

    // Preenche todo o tabuleiro com 0
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Barco 1: linha 3, colunas D até F
    for (int j = 3; j <= 5; j++) {
        tabuleiro[2][j] = 3;
    }

    // Barco 2: coluna H, linhas 6 até 8
    for (int i = 5; i <= 7; i++) {
        tabuleiro[i][7] = 3;
    }

    // Barco diagonal cima: coluna C → linhas 8 até 10
    for (int i = 7, j = 2; i <= 9 && j <= 5; i++, j++) {
        tabuleiro[i][j] = 3;
    }

    // Barco diagonal baixo: coluna F → linhas 4 até 6
    for (int i = 3, j = 5; i <= 5 && j <= 7; i++, j--) {
        tabuleiro[j][i] = 3;
    }

    // ------------------------------------------------
    // FORMA 1 — CONE (valor 5)
    // ------------------------------------------------
    int iniL = 0, iniC = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {

            int valor = 0;

            if (i == 0 && j == 2) valor = 5;        
            if (i == 1 && (j >= 1 && j <= 3)) valor = 5;
            if (i == 2) valor = 5;

            if (valor != 0) {
                int L = iniL + i;
                int C = iniC + j;
                if (L >= 0 && L < 10 && C >= 0 && C < 10) {
                    tabuleiro[L][C] = valor;
                }
            }
        }
    }

    // ------------------------------------------------
    // FORMA 2 — CRUZ (valor 5)
    // ------------------------------------------------
    iniL = 0;
    iniC = 5;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {

            int valor = 0;

            if (i == 0 && j == 2) valor = 5;
            if (i == 1) valor = 5;
            if (i == 2 && j == 2) valor = 5;

            if (valor != 0) {
                int L = iniL + i;
                int C = iniC + j;
                if (L >= 0 && L < 10 && C >= 0 && C < 10) {
                    tabuleiro[L][C] = valor;
                }
            }
        }
    }

    // ------------------------------------------------
    // FORMA 3 — OCTAEDRO (valor 5)
    // ------------------------------------------------
    iniL = 5;
    iniC = 2;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {

            int valor = 0;

            if (i == 0 && j == 2) valor = 5;
            if (i == 1 && (j >= 1 && j <= 3)) valor = 5;
            if (i == 2 && j == 2) valor = 5;

            if (valor != 0) {
                int L = iniL + i;
                int C = iniC + j;
                if (L >= 0 && L < 10 && C >= 0 && C < 10) {
                    tabuleiro[L][C] = valor;
                }
            }
        }
    }

    // ------------------------------------------------
    // Impressão do tabuleiro
    // ------------------------------------------------
    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf("%c ", linha[j]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
